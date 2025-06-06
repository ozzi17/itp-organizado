#include <iostream>
#include <string>
using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velmax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvelmax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velmax = stvelmax;
        vel = 0;
    }
    void mostra(){
        cout << "nome:" << nome << endl;;
        cout << "cor: " << cor << endl;
        cout << "potência:  "<< pot << endl;;
        cout << "velocidade maxima: " << velmax << endl;
        cout << "velocidade atual: " << vel;
    }

    void mudavel(int mv){
        vel = mv;
        if (vel > velmax)
        {
            vel = velmax;
        }
        if (vel < 0)
        {
            vel = 0;
        }
        
    }
};

int main(){
    Carro car2, car3, car4;
    // características do carro
    car2.insere("celta", "vermelho", 350, 280);
    car3.insere("uno", "branco", 400, 320);

    car2.mudavel(300);

    car2.mostra(); cout << endl;
    car3.mostra();

    return 0;
}