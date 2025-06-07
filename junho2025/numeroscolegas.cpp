#include <iostream>
using namespace std;

int somadiv(int n){
    int contagem = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) 
        {
            contagem+= i;
        }
        
    }
    return contagem;
}

bool ehcolega(int a, int b){
    if (abs(somadiv(a) - b) <= 2 && abs(somadiv(b) - a) <= 2)
    {
        return true;
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    if (ehcolega(n, m))
    {
        cout << "S";
    }
    else{
        cout << "N";
    }
    return 0;
}
