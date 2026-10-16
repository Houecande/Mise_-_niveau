// 3-) Teste de la validité d'une date et calcule du lendemain
#include <iostream>
using namespace std;

int main() {
    int j, m, a;
    cout << "Entrez le jour, le mois et l'annee (jj mm aaaa) : ";
    cin >> j >> m >> a;

    bool bissextile = (a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0));
    int maxJours = 31;

    if (m == 4 || m == 6 || m == 9 || m == 11) maxJours = 30;
    else if (m == 2) maxJours = bissextile ? 29 : 28;

    // Test de validité
    if (a >= 1 && m >= 1 && m <= 12 && j >= 1 && j <= maxJours) {
        cout << "La date est valide." << endl;

        // Calcul du lendemain
        j++;
        if (j > maxJours) {
            j = 1;
            m++;
            if (m > 12) {
                m = 1;
                a++;
            }
        }
        cout << "La date du lendemain est : " << j << "/" << m << "/" << a << endl;
    } else {
        cout << "La date est invalide !" << endl;
    }
    return 0;
}