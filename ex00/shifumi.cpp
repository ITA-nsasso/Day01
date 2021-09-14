#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
#include <time.h>

using namespace std;

string humanName(string name){

    cout << "Entrez votre pseudo : ";
    cin >> name;

    return (name);
}

void roundStart(int *keepScore, string human){
    
}
int moves(string, int*);

int moves(string human, int *round){
    string moves[3] = {"Marteau", "Ciseaux", "Papier"};
    int botMove = rand() % 2 + 0;
    int playerMove;

    cout << "Tour de " << human << " ! (0 pour Marteau, 1 pour Ciseaux, 2 pour Papier) : ";
    cin >> playerMove;

    if(playerMove - botMove == 0){
        cout << (moves[playerMove]) << " " << (moves[botMove]) << " ! Égalité,\n";
        round++;
        return (0);
    }

    if(playerMove - botMove == -1 || playerMove - botMove == 2 ){
        cout << human << " gagne la manche ! \n";
        return (1);
    }

    if(playerMove - botMove == 1 || playerMove - botMove == -2 ){
        cout << "Le bot gagne la manche ! \n";
        return (1337);
    }
    else return(404);
}

int main(){

    int keepScore[3] = {0, 0, 0};
    int res;
    string name;

    name = humanName(name);
    while (keepScore[1] != 3 && keepScore[2] != 3){
        keepScore[0]++;

        cout << "Manche " << keepScore[0] << " - Score ; " << name << " : " << keepScore[1] << ", Bot : " << keepScore[2] << "\n";

        srand(time(NULL));
        res = moves(name, &keepScore[0]);
        if (res == 1)
            keepScore[1]++;
        else if (res == 1337)
            keepScore[2]++;
    }

    if (keepScore[1] == 3)
        cout << name << " remporte la partie, Bien joué(e) !\n";
    else
        cout << "Le bot remporte la partie, dommage...\n";
    return 0;
}