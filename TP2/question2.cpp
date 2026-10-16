// Répétition de la saisie en cas d'erreur de dossard
#include <iostream>
using namespace std;

int main() {
    int dosse, dossmt;
    float tc, mt;

    do {
        cout << "Entrez le premier dossard (entier positif, 0 pour quitter) : ";
        cin >> dosse;
    } while (dosse < 0);

    if (dosse == 0) return 0;

    cout << "Entrez son temps : ";
    cin >> tc;

    dossmt = dosse;
    mt = tc;

    while (true) {
        do {
            cout << "Entrez un dossard (positif, 0 pour arreter) : ";
            cin >> dosse;
        } while (dosse < 0);

        if (dosse == 0) break;

        cout << "Entrez son temps : ";
        cin >> tc;

        if (tc < mt) {
            mt = tc;
            dossmt = dosse;
        }
    }

    cout << "Le vainqueur est le dossard " << dossmt << " avec " << mt << endl;
    return 0;
}