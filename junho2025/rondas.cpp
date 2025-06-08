#include <iostream>
#include <cmath>
#include <string>
using namespace std;


void horario(int hprim, int minprim, int segprim, int a, int b, int c){
    int hora = hprim, min = minprim, seg = segprim;
    
    if (segprim + c > 59)
    {
        seg = (segprim+c) % 60;
        min += 1;
    }
    else{seg = segprim + c;}

    if (min + b > 59)
    {
        min = (min + b) % 60;
        hora += 1;
    }
    else{min = min + b;}

    if (hora + a > 23)
    {
        hora = (hora + a) % 24;
    }
    else{hora = hora + a;}

    
    if (hora < 10)
    {
        cout << "0" << hora << ":";
    }
    else{cout << hora << ":";}

    if (min < 10)
    {
        cout << "0" << min << ":";
    }
    else{cout << min << ":";}
    
    if (seg < 10)
    {
        cout << "0" << seg;
    }
    else{cout << seg;}
    
}

int main(){
    int s, t, u;
    cin >> s >> t >> u;

    horario(s, t, u, 1, 0, 0); cout << endl;
    horario(s, t, u, 2, 10, 30); cout << endl;
    horario(s, t , u, 4, 40, 50); cout << endl;
    horario(s, t, u, 12, 5, 5);
    return 0;
}