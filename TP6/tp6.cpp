#include <iostream>
using namespace std;

int convertirEnJours(int j, int m, int a) {
    return j + (m * 30) + (a * 365);
}

int main() {
    int j1, m1, a1, j2, m2, a2;
    cout << "Entrez la 1ere date (jj mm aaaa) : ";
    cin >> j1 >> m1 >> a1;
    cout << "Entrez la 2eme date (jj mm aaaa) : ";
    cin >> j2 >> m2 >> a2;

    int total1 = convertirEnJours(j1, m1, a1);
    int total2 = convertirEnJours(j2, m2, a2);

    int difference = total2 - total1;
    if (difference < 0) difference = -difference;

    cout << "Nombre de jours approximatif entre les deux dates : " << difference << " jours." << endl;
    return 0;
}