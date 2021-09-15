#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    std::vector<int> tab;
    int target;
    int index;

    index = -1;
    target = -1;
    while (target != 0){
        cout << "Entrez un nombre à mettre dans le tableau ('0' pour arrêter) : ";
        cin >> target;
        if (target != 0){
            tab.push_back(target);
            index++;
            cout << tab[index] << "\n";
        }
    }

    cout << "Veuillez insérer un nombre à chercher dans le tableau : ";
    cin >> target;
    index = 0;
    while(tab[index]){
        if (tab[index] == target){
            cout << "trouvé ! L'index de " << target << " est " << index << "\n";
            return 0;
        }
        index++;
    }

    return (-1);
}