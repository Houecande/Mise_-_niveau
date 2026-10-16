// 2-) Détermine si un mois a 31 jours
#include <iostream>
using namespace std;

int main() {
    int mois;
    bool mois31 = false;

    cout << "Entrez le numero du mois (1 a 12) : ";
    cin >> mois;

    if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12) {
        mois31 = true;
    }

    if (mois31) {
        cout << "Ce mois a bien 31 jours." << endl;
    } else {
        cout << "Ce mois n'a pas 31 jours." << endl;
    }
    return 0;
}