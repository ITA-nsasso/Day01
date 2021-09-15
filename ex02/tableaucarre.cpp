#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    std::vector<int> tab;
    std::vector<int> tabsquare;
    int target;
    int index;

    index = -1;
    target = -1;
    while (target != 0){
        cout << "Entrez un nombre à mettre dans le tableau par ordre croissant ('0' pour arrêter) : ";
        cin >> target;
        if (target != 0 || target > tab[index]){
            tab.push_back(target);
            index++;
            cout << tab[index] << "\n";
        }
    }

    index = 0;
    while(tab[index]){
        tabsquare.push_back(tab[index]*tab[index]);
        index++;
    }
    for (int num : tab){
        cout << num << " ";
    }
    cout << "\n";
    
    return (0);
}