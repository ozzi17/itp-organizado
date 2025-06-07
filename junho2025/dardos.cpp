#include <iostream>
#include <cmath>
using namespace std;

double distancia(double xa, double ya, double xb, double yb){
    double resultado;
    resultado = sqrt((pow(xa - xb, 2) + pow(ya - yb, 2)));

    return resultado;
}

int pontuacao(double x, double y){

    int pontos = 0;
    double distalvo = distancia(x, y, 0, 0);
    if (distalvo <= 1)
    {
        pontos += 10;
    }
    else if (distalvo > 1 && distalvo <= 2)
    {
        pontos += 6;
    }
    else if (distalvo > 2 && distalvo <= 3)
    {
        pontos += 4;
    }
    return pontos;
}

int ultimopont(double x, double y, double s, double t){
    double distultimo = distancia(x, y, s, t);
    int pontos = 0;
    if (distultimo <= 1)
    {
        pontos += 10;
    }
    else if (distultimo > 1 && distultimo <= 2)
    {
        pontos += 6;
    }
    else if (distultimo > 2 && distultimo <= 3)
    {
        pontos += 4;
    }
    return pontos;
}

int main(){
    int point = 0;
    double placar[10], placarb[10];
    for (int i = 0; i < 10; i++)
    {
        double x, y;
        cin >> x >> y;
        int pontos = pontuacao(x, y);
        point += pontos;
        placar[i] = x;
        placarb[i] = y;
        if (i != 0)
        {
            point += (ultimopont(x, y, placar[i-1], placarb[i-1]) / 2);
        }
        
    }
    
    cout << point;
    return 0;
}