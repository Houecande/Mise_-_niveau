#include <iostream>
using namespace std;

class Compteur {
private:
    int valeur;

public:
    Compteur() {
        valeur = 0;
    }

    void incrementer() {
        valeur++;
    }

    void decrementer() {
        if (valeur > 0) valeur--;
    }

    int getValeur() {
        return valeur;
    }
};

int main() {
    Compteur c;
    cout << c.getValeur() << " ";

    for(int i=0; i<10; i++) c.incrementer();
    cout << c.getValeur() << " ";

    for(int i=0; i<20; i++) c.decrementer();
    cout << c.getValeur() << endl;

    return 0;
}