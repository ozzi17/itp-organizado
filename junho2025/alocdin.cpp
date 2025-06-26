#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    int *array = new int[t];
    for (int i = 0; i < t; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < t; i++)
    {
        array[i] *= 2;
    }
    delete[] array;
    
    return 0;
}