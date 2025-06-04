#include <iostream>
#include <string>
using namespace std;

struct carro{
    string nome;
    string cor;
    int pot;
    int velmax;

};

int main(){
    carro car1, car2;
    // características do carro
    car1.nome = "celta";
    car1.cor = "vermelho";
    car1.pot = 450;
    car1.velmax = 350;

    car2.nome = "dodge ram";
    car2.cor = "preto";
    car2.pot = 350;
    car2.velmax = 280;

    cout << "nome:" << car2.nome << endl;;
    cout << "cor: " << car2.cor << endl;
    cout << "potência:  "<< car2.pot << endl;;
    cout << "velocidade maxima: " << car2.velmax << endl;
    return 0;
}