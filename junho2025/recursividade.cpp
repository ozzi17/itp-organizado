#include <iostream>
using namespace std;

int contador(int num){ //conta do número ao 0

    if (num <= 0)
    {
        return num;
    }
    if (num > 0)
    {
        cout << num;
    }
    return contador(num - 1);
}

int counter(int numero, int contaagem){ // conta do 0 ao número
    cout << contaagem;
    if (numero > contaagem)
    {
        return counter(numero, contaagem +1);
    }
    return numero;
}

int factorial(int number){
    if (number == 0)
    {
        return 1;
    }
    return number * factorial(number -1);

}

int fib(int entrada){ //calcula o nésimo valor da seq de fibonacci
    if (entrada <= 1)
    {
        return 1;
    }
    return fib(entrada-1) + fib(entrada-2);

}

int main(){
    cout << fib(8);
    return 0;
}
