// 1-) Programme C++ de l'algorithme des années bissextiles
#include <iostream>
using namespace std;

int main() {
    int an;
    bool bissextile;

    cout << "Entrez l'annee : ";
    cin >> an;

    bissextile = (an % 400 == 0) || ((an % 4 == 0) && (an % 100 != 0));

    if (bissextile) {
        cout << "L'annee est bissextile." << endl;
    } else {
        cout << "L'annee n'est pas bissextile." << endl;
    }
    return 0;
}