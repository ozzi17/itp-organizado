#include <iostream>
#include <string>
using namespace std;

struct Livro{
    string titulo;
    int year_published;
    string autores;
    int pages_number;
    string available;
};

struct Livros{
    int tam;
    Livro livro[200];
};

int main(){
    int n; cin >> n;
    cin.ignore();
    Livros a;
    a.tam = n;
    string chave;
    cout << "insira os dados dos livros" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, a.livro[i].titulo);
        getline(cin, a.livro[i].autores);
        cin >> a.livro[i].year_published;
        cin >> a.livro[i].pages_number >> a.livro[i].available;
        cin.ignore();
    }
    cout << "Faça sua consulta" << endl;
    cin >> chave;
    bool found = false;
    for (int i = 0; i < a.tam; i++)
    {
        if (a.livro[i].autores.find(chave) != std::string::npos || 
            a.livro[i].titulo.find(chave) != std::string::npos)
        {
            if (a.livro[i].available == "s")
            {
                cout << a.livro[i].titulo << endl;
                found = true;
            }
            
        }
    }
    if (!found)
    {
        cout << "livro não disponível";
    }
    
    
    return 0;
}