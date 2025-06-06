#include <iostream>
using namespace std;

enum Naipe {
    Copas, Espadas, Paus, Ouros
};
enum Valor {
    As = 1, V2, V3, V4, V5, V6, V7, V8, V9, V10, VJ, VQ, VK,

};

struct Carta{
    Valor valor;
    Naipe naipe;

};

struct Cartas{
    int quantidade;
    Carta cartas[52];

};

bool temseq(Cartas cartas){
    for (int i = 0; i < cartas.quantidade -2; i++)
    {
        Carta c1 = cartas.cartas[i];
        Carta c2 = cartas.cartas[i+1];
        Carta c3 = cartas.cartas[i+2];
        bool mesmonaipe = c1.naipe == c2.naipe && c2.naipe == c3.naipe;
        bool sequencia = c1.valor == c2.valor && c2.valor == c3.valor;
        bool seqdif = c1.naipe == VQ && c2.valor == VK && c3.valor == As;

        if (mesmonaipe && (sequencia || seqdif) )
        {
            return true;
        }
        
    }
    

    return false;
}

int main(){

   return 0;
}

