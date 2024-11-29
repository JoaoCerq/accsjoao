#include <iostream>
#include <vector>
#include <utility>
using namespace std;

struct amigos
{
    string nome;
    int peso;
};

int main(void)
{
    int quantidade_de_amigos;
    cin >> quantidade_de_amigos;
    vector<amigos> viajantes;
    for (int i = 0; i < quantidade_de_amigos; i++)
    {
        string nome;
        int peso;
        cin >> nome >> peso;
        amigos a = {nome, peso};
        viajantes.push_back(a);
    }
    int peso_max;
    cin >> peso_max;
    vector<amigos> ultrapassaram;
    bool cair = false;
    for (int i = 0; i < quantidade_de_amigos; i++)
    {
        if (viajantes[i].peso > peso_max)
        {
            ultrapassaram.push_back(viajantes[i]);
            cair = true;
        }
    }
    if (cair)
    {
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for (size_t i = 0; i < ultrapassaram.size(); i++)
        {
            cout << ultrapassaram[i].nome << endl;
        }
    }
    else
    {
        cout << "Vamos todos encontrar a montanha!" << endl;
    }
}