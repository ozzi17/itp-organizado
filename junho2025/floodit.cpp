#include <iostream>
#include <cmath>
using namespace std;

const int N = 100;
void cores(int tam, int matriz[][N], int i, int j, int corant, int novacor) {
    if (i < 0 || i >= tam || j < 0 || j >= tam)
    {
        return;
    }
    if (matriz[i][j] != corant || matriz[i][j] == novacor)
    {
        return;
    }

    matriz[i][j] = novacor;

    cores(tam, matriz, i-1, j, corant, novacor);
    cores(tam, matriz, i+1, j, corant, novacor);
    cores(tam, matriz, i, j-1, corant, novacor);
    cores(tam, matriz, i, j+1, corant, novacor);

}
int main(){
    int tam, i, j, corant, cor;
    cin >> tam;
    int matrix[N][N];
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            cin >> matrix[i][j];
        }
        
    }
    corant = matrix[0][0];
    cin >> cor;

    if (corant != cor)
    {
        cores(tam, matrix, 0, 0, corant, cor);
    }
    
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}