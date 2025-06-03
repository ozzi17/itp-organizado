struct Pixel{
    unsigned char r, g, b;
};

struct Image {
    int largura, altura;
    Pixel pixel[3][3];
};

int main(){
    Pixel p1 = {10, 67, 241};
    Pixel p2 = {10, 67, 241};

    int x[2] = {3, 4};

    Pixel a[3][3] = {{p1, p2, p1},
                    {p1, p2, p1},
                    {p1, p1, p2}};

}


enum Naipe {
    Copas, Espadas, Paus, Ouros
};
enum Valor {
    As, V2, V3, V4, V5, V6, V7, V8, V9, V10, VJ, VQ, VK, JOKER

};

struct carta{
    Valor valor;
    Naipe naipe;

};

struct Cartas{
    int quantidade;
    carta cartas[54];

};

int main(){
    carta c = {VQ, Ouros};
    //c.naipe = Ouros;
    //c.valor = VQ;

    Cartas c = {3, 
        {{VQ, Ouros}, {V5, Paus}, {As, Copas}}
    };
}

