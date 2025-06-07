#include <iostream>
using namespace std;

int scorediario(int a, int b, int c){
    if (a == b)
    {
        return a;
    }
    if (b == c)
    {
        return b;
    }
    int matriz[3] = {a, b, c};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (matriz[j] < matriz[j+1])
        {
            int temp = matriz[j];
            matriz[j] = matriz[j+1];
            matriz[j+1] = temp;
        }
        }
        
        
    }
    return matriz[1];
}

int scoregeral(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9){
    int score1 = scorediario(a1, a2, a3);
    int score2 = scorediario(a4, a5, a6);
    int score3 = scorediario(a7, a8, a9);

    return scorediario(score1, score2, score3);
}

int main(){
    int matrizA[9], matrizB[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> matrizA[i];
    }
    for (int i = 0; i < 9; i++)
    {
        cin >> matrizB[i];
    }
    if (scoregeral(matrizA[0], matrizA[1], matrizA[2], matrizA[3],
        matrizA[4], matrizA[5], matrizA[6], matrizA[7], matrizA[8]) > 
        scoregeral(matrizB[0], matrizB[1], matrizB[2], matrizB[3],
        matrizB[4], matrizB[5], matrizB[6], matrizB[7], matrizB[8]) )
    {
        cout << "A";
    }
    else if (scoregeral(matrizB[0], matrizB[1], matrizB[2], matrizB[3],
        matrizB[4], matrizB[5], matrizB[6], matrizB[7], matrizB[8]) > 
        scoregeral(matrizA[0], matrizA[1], matrizA[2], matrizA[3],
        matrizA[4], matrizA[5], matrizA[6], matrizA[7], matrizA[8]))
    {
        cout << "B";
    }
    else{
        cout << "empate";
    }

    return 0;
}