#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
struct Histograma{
    int tam;
    int valores[MAX_SIZE];
};

struct Plateau{
    int ind_inicial;
    int ind_final;
    int ind_freqvalue;
};

Plateau findplateau(Histograma hist){
    Plateau plateau_found;

    for (int i = 1; i < hist.tam; i++)
    {
        if (hist.valores[i] == hist.valores[i-1])
        {
            plateau_found.ind_inicial = i-1;
            plateau_found.ind_freqvalue = hist.valores[i];

            int j = i;
            while (j < hist.valores[i] && hist.valores[j] == plateau_found.ind_freqvalue)
            {
                j++;
            }
            plateau_found.ind_final = j - 1;
            return plateau_found;
        }
    }
    return plateau_found;
}