#include <iostream>
using namespace std;

bool twinprimes(int n){
    int count = 0, count2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        
    }
    if (count != 2)
    {
        return false;
    }
    for (int i = 1; i <= n+2; i++)
    {
        if ((n + 2) % i == 0)
        {
            count2++;
        }
        
    }
    if (count2 == 2)
    {
        return true;
    }
    
    
    return false;
}

int main(){
    int n;
    cin >> n;
    if (twinprimes(n))
    {
        cout << "Numero forma par de gemeos";
    }
    else{
        cout << "Numero nao forma par de gemeos";
    }

    return 0;
}