#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


struct padawans{
    string name;
    int number_of_completed_missions;
};
bool compare(padawans a, padawans b){
    return (a.name < b.name);
}
int main(){
    int number_of_padawans;
    cin >> number_of_padawans;
    vector<padawans> new_padawans;
    padawans padawan;
    int incompleted;
    int number_of_missions;
    for (int i = 0; i < number_of_padawans; i++){
        cin >> padawan.name >> number_of_missions >> incompleted;
        padawan.number_of_completed_missions = number_of_missions - incompleted;
        new_padawans.push_back(padawan); 
    }
    stable_sort(new_padawans.begin(), new_padawans.end(), compare);

    for (int i = 0; i < number_of_padawans; i++){
        cout << new_padawans[i].name << " " << new_padawans[i].number_of_completed_missions << endl;  
    }
}