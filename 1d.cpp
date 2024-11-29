#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



struct year{
    int dia;
    int mes;
    int ano;
};

bool compare(const year& a, const year& b){
    return ((a.ano < b.ano) || ((a.ano == b.ano) && (a.mes < b.mes)) || ((a.ano == b.ano) && (a.mes == b.mes) && (a.dia < b.dia)));
}
int main(){
    int inputint;
    vector<year> years;
    year inputyear;
    while (cin >> inputyear.dia >> inputyear.mes >> inputyear.ano) {
        years.push_back(inputyear);
    }
    stable_sort(years.begin(), years.end(), compare);
    for (size_t i = 0; i < years.size(); i++){
        cout << years[i].dia << " " << years[i].mes << " " << years[i].ano << endl;
    }
}