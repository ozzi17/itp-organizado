#include <iostream>
using namespace std;
int main(){
    int N, Q;
    cin >> N;
    cin >> Q;
    int matriz[N +1][N+1];
    for (int i = 0; i < N+1; i++)
    {
        matriz[i][0] = 0;
        matriz[0][i] = 0;
        matriz[N][i] = 0;
        matriz[i][N] = 0;
    }
    int novamatriz[N+1][N+1];
    for (int i = 0; i < N+1; i++)
    {
        novamatriz[i][0] = 0;
        novamatriz[0][i] = 0;
        novamatriz[N][i] = 0;
        novamatriz[i][N] = 0;
    }

    for (int i = 1; i < N+1; i++)
    {
        for (int j = 1; j < N+1; j++)
        {
            cin >> matriz[i][j];
        }
        
    }

    for (int k = 0; k < Q; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                int vizvivas = 0;

                if (matriz[i-1][j-1] == 1)
                    {
                        vizvivas++;
                    }
                if (matriz[i-1][j] == 1)
                    {
                        vizvivas++;
                    }
                if (matriz[i-1][j+1] == 1)
                    {
                        vizvivas++;
                    }
                if (matriz[i][j-1] == 1)
                    {
                        vizvivas++;
                    }
                if (matriz[i][j+1] == 1)
                    {
                        vizvivas++;
                    }
                if (matriz[i+1][j-1] == 1)
                    {
                        vizvivas++;
                    }
                if (matriz[i+1][j] == 1)
                    {
                        vizvivas++;
                    }
                if (matriz[i+1][j+1] == 1)
                    {
                        vizvivas++;
                    }
                if (matriz[i][j] == 0)
                {
                    novamatriz[i][j] = (vizvivas == 3) ? 1 : 0;
                }
                else if (matriz[i][j] == 1)
                {
                    novamatriz[i][j] = (vizvivas == 2 || vizvivas == 3 ) ? 1 : 0;
                }
                
                
            }

                
        }
    
        for (int u = 1; u <= N; u++)
        {
            for (int h = 1; h <= N; h++)
            {
                matriz[u][h] = novamatriz[u][h];
            }
            
        }
        for (int i = 0; i <= N; i++) {
            matriz[i][0] = 0;
            matriz[0][i] = 0;
            matriz[N][i] = 0;
            matriz[i][N] = 0;
        }
        
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << novamatriz[i][j];
        }
        cout << endl;
    }
    

    return 0;
}
