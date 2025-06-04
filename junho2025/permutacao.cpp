#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int lista[n], controle[n], count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        controle[i] = i +1;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> lista[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (controle[i] == lista[j])
            {
                count++;
            }
            
        }
        
        
    }
    if (count == n)
    {
        cout << "sim";
    }
    else{
        cout << "não";
    }
    return 0;
}