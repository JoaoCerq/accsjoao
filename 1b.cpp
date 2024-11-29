#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int numero;
    int xp_necessario;
    int bonus;
    cin >> numero;
    vector<int> missoes;
    vector<int> multiplicadores;
    int input;
    for (int i = 0; i < numero; i++)
    {
        cin >> input;
        missoes.push_back(input);
    }
    for (int i = 0; i < numero; i++)
    {
        cin >> input;
        multiplicadores.push_back(input);
    }
    cin >> xp_necessario >> bonus;
    int total_xp = 0;
    for (int i = 0; i < numero; i++)
    {
        total_xp += missoes[i] * (multiplicadores[i] + bonus);
    }
    if (total_xp >= xp_necessario)
    {
        cout << "Upou de Nivel!";
    }
    else
    {
        cout << "Nao foi dessa vez!";
    }
}