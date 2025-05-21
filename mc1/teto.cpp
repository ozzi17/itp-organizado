#include <iostream>
using namespace std;

int teto(float number) { //cria a função para determinar o teto
    int inteiro = 0;
    if (number >= 0) //inicia o laço se o número for positivo
    {
        for (int i = 0; i < number + 1; i++)
        {
            inteiro  = i; //substitui o inteiro por i
        }
        //se o número inserido for 0, nenhum laço vai iniciar, então o teto = 0
    }
    else if (number < 0) //inicia o laço se o n´¨mero for negativo
    {
        for (int i = 0; i > number; i--)
        {
            inteiro = i; //substitui o inteiro por i
        }
        
    }
    return inteiro;
}
int main() {
    float n; //declara um número n de ponto flutuante
    cin >> n; //comando para inserir o número n

    cout << teto(n); //imprime o teto do número inserido
}