// 3-) Skieur ayant réalisé le deuxième meilleure temps
#include <iostream>
using namespace std;

int main() {
    int dosse, dossmt1 = 0, dossmt2 = 0;
    float tc, mt1 = 999999, mt2 = 999999;

    while (true) {
        cout << "Entrez le dossard (0 pour arreter) : ";
        cin >> dosse;
        if (dosse == 0) break;

        cout << "Entrez son temps : ";
        cin >> tc;

        if (tc < mt1) {
            mt2 = mt1;
            dossmt2 = dossmt1;
            mt1 = tc;
            dossmt1 = dosse;
        } else if (tc < mt2) {
            mt2 = tc;
            dossmt2 = dosse;
        }
    }

    cout << "1er : Dossard " << dossmt1 << " (" << mt1 << ")" << endl;
    if (dossmt2 != 0)
        cout << "2eme : Dossard " << dossmt2 << " (" << mt2 << ")" << endl;
    return 0;
}