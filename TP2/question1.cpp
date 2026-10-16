// 1-) Programme C++ de l'algorithme donné
#include <iostream>
using namespace std;

int main() {
    int dosse, dossmt;
    float tc, mt;

    cout << "Entrez le dossard (0 pour arreter) : ";
    cin >> dosse;
    if (dosse == 0) return 0;

    cout << "Entrez son temps : ";
    cin >> tc;

    dossmt = dosse;
    mt = tc;

    while (true) {
        cout << "Entrez le dossard : ";
        cin >> dosse;
        if (dosse == 0) break;

        cout << "Entrez son temps : ";
        cin >> tc;

        if (tc < mt) {
            mt = tc;
            dossmt = dosse;
        }
    }

    cout << "Le vainqueur est : Dossard " << dossmt << " avec un temps de " << mt << endl;
    return 0;
}