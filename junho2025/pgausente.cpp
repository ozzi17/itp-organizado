#include <iostream>
#include <string>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int digitalizadas[n];
    string ausentes;
    for (int i = 0; i < n; i++)
    {
        cin >> digitalizadas[i];
    }
    int original[m];
    for (int i = 1; i <= m; i++)
    {
        original[i-1] = i;
    }
    for (int i = 0; i < m; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (original[i] == digitalizadas[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
            {
                ausentes += to_string(original[i]);
                ausentes += ' ';
            }
    }
    cout << ausentes;
    return 0;
}