#include <iostream>
#include <cmath>
using namespace std;

struct Frac{
    int numerador;
    int denominador;
};

void add(Frac a1, Frac a2){
    int num, den;
    den = a1.denominador * a2.denominador;
    num = ((den / a1.denominador) * a1.numerador) + ((den/ a2.denominador) * a2.numerador);
    cout << num << "/" << den;
}

void mult(Frac a1, Frac a2){
    int den, num;
    num = a1.numerador * a2.numerador;
    den = a1.denominador * a2.denominador;
    cout << num << "/" << den;
}

void diva(Frac a1, Frac a2){
    int den, num, sinal = 1;
    if (a2.numerador < 0)
    {
        a2.numerador = abs(a2.numerador);
        sinal = -1;
    }
    num = a1.numerador * a2.denominador * sinal;
    den = a1.denominador * a2.numerador;
    cout << num << "/" << den;
}

int main(){
    Frac a;
    Frac b;
    string c, d, e;
    cin >> c >> d >> e;

    size_t barra = c.find('/');
    a.numerador = stoi(c.substr(0, barra));
    a.denominador = stoi(c.substr(barra+1));

    barra = d.find('/');
    b.numerador = stoi(d.substr(0, barra));
    b.denominador = stoi(d.substr(barra +1));

    if (e == "a")
    {
        add(a, b);
    }
    else if (e == "m")
    {
        mult(a, b);
    }
    else if (e == "d")
    {
        diva(a, b);
    }
    return 0;
}