#include <iostream>
#include <string>
using namespace std;

struct Paciente{
    float peso;
    string nome;

};

struct Pacientes{
    int tam;
    Paciente paciente[200];
};

float media(int quant, Pacientes a){
    float resposta = 0;
    a.tam = quant;
    for (int i = 0; i < a.tam; i++)
    {
        cin >> a.paciente[i].nome >> a.paciente[i].peso;
        resposta += a.paciente[i].peso;
    }
    return resposta/a.tam;

}

int main(){
    int quant; cin >> quant;
    Pacientes n;
    cout << media(quant, n);

    return 0;
}