#include <iostream>
#include <string>
using namespace std;
int main(){
    int amigos, bebidas = 0;
    cin >> amigos;
    int valor[amigos], jogador[amigos], winner_index;
    for (int i = 0; i < amigos; i++)
    {
        cin >> valor[i] >> jogador[i];
    }

    cin >> winner_index;
    long long bet_total = 0;
    for (int i = 0; i < amigos; i++)
    {
        bet_total += valor[i];
    }

    bebidas = bet_total / 10;
    long long valor_ganhadores = bet_total - bebidas;

    cout << "Total: R$ " << bet_total << endl;
    int index_apostadores_winners[amigos];
    int reais_ganhadores = 0;
    long long soma_apostas = 0;


    for (int i = 0; i < amigos; i++)
    {
        if (jogador[i] == winner_index)
        {
            index_apostadores_winners[reais_ganhadores] = i;
            soma_apostas += valor[i];
            reais_ganhadores++;
        }
    }

    long long valor_final[amigos];
    for (int i = 0; i < amigos; i++) {
        valor_final[i] = 0;
    }
    long long premio_dist = 0;

    if (reais_ganhadores > 0 && soma_apostas > 0)
    {
        for (int k = 0; k < reais_ganhadores; k++)
        {
            int idx_ganhador = index_apostadores_winners[k];
            double proporcao = static_cast<double>(valor[idx_ganhador]) / soma_apostas;
            long long valor_este_winner = static_cast<long long>(proporcao * valor_ganhadores);

            valor_final[idx_ganhador] = valor_este_winner;
            premio_dist += valor_este_winner;
        }
    }
    else{
        if (bet_total > 0)
        {
            for (int i = 0; i < amigos; i++)
            {
                double proporcao = static_cast<double>(valor[i]) / bet_total;
                long long valor_este = static_cast<long long>(proporcao * valor_ganhadores);

                valor_final[i] = valor_este;
                premio_dist += valor_este;
            }
        }
    }

    long long sobras = valor_ganhadores - premio_dist;
    bebidas += sobras;

    if (reais_ganhadores > 0)
    {
        for (int i = 0; i < reais_ganhadores; i++)
        {
            int idx_ganhador = index_apostadores_winners[i];
            cout << "Apostador " << idx_ganhador + 1 << ": R$ " << valor_final[idx_ganhador] << endl;
        }
    }
    else{
        for (int i = 0; i < amigos; i++)
        {
            cout << "Apostador " << i + 1 << ": R$ " << valor_final[i] << endl;
        }
    }
    cout << "Bebidas e petiscos: R$ " << bebidas << endl;

    return 0;
}