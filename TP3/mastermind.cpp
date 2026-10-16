// Simulation du jeu de mastermind
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret[5], proposition[5];
    
    // Génération de la combinaison secrète (chiffres de 1 à 9)
    for(int i=0; i<5; i++) {
        secret[i] = rand() % 9 + 1;
    }

    int maxCoups = 10;
    bool trouve = false;

    for(int coup=1; coup<=maxCoups; coup++) {
        cout << "Essai " << coup << "/" << maxCoups << ". Entrez 5 chiffres (1-9) : ";
        int bienPlaces = 0;

        for(int i=0; i<5; i++) {
            cin >> proposition[i];
            if(proposition[i] == secret[i]) {
                bienPlaces++;
            }
        }

        if(bienPlaces == 5) {
            cout << "Bravo, vous avez gagne en " << coup << " essais !" << endl;
            trouve = true;
            break;
        } else {
            cout << "Reponse : " << bienPlaces << " numeros bien places." << endl;
        }
    }

    if(!trouve) {
        cout << "Vous avez perdu ! La bonne combinaisonetait : ";
        for(int i=0; i<5; i++) cout << secret[i] << " ";
        cout << endl;
    }
    return 0;
}