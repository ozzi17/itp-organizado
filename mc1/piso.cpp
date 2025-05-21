#include <iostream>
using namespace std;
int piso(float number) { // cria a função para determinar o piso
    int inteiro = 0; 
    if (number >= 0) // inicia o laco se o número for maior que zero
    {
        for (int i = 0; i <= number; i++)
        {
            inteiro = i; //substitui o inteiro por i enquanto i for menor ou igual ao número
        } 
    }
    else if (number < 0) //inicia o laço se o número for menor que zero
    {
        for (int i = 0; i >= number; i--)
        {
            inteiro = i - 1; //o -1 ocorre porque o valor precisa ser menor que o número inserido
        } 
    }
    return inteiro; //retorna o valor final, no caso, o piso do número
}
//se o número inseido for 0, o valor a ser retornado será 0

int main() {

    float n; //declara um número n de ponto flutuante
    cin >> n; //comando para inserir o número

    cout << piso(n); //imprime o piso do número

    return 0;
}