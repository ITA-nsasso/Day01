#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
    std::vector<int> tab;
    std::vector<int> biggestTab;
    int target, index, smallInt, midInt, bigInt, i, j, compare;

    target = -1;
    index = -1;
    while (target != 0){
        if (index < 2)
            cout << "Entrez un nombre à mettre dans le tableau : ";
        else
            cout << "Entrez un nombre à mettre dans le tableau ('0' pour arrêter) : ";
        cin >> target;
        if (target != 0){
            tab.push_back(target);
            index++;
            cout << tab[index] << "\n";
        }
    }

    i = 0;
    j = 0;
    cout << biggestTab.size() << "\n";
    while (biggestTab.size() < 3){
        cout << "big While\n";
        while (tab[i]){
            cout << "i While\n";
            if (compare < tab[i]){
                compare = tab[i];
                cout << "if compare\n";
            }
            i++;
            cout << "i While END\n";
        }
        biggestTab.insert(biggestTab.begin(), compare);
        tab.erase(std::find(tab.begin(),tab.end(), compare));
        i = 0;
        cout << "big While END\n";
    }
    for (int num : biggestTab)
        cout << num << " ";
    cout << "\n";
    return 0;
}