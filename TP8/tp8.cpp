#include <iostream>
using namespace std;

class Rectangle {
private:
    double largeur;
    double hauteur;

public:
    Rectangle(double l, double h) {
        largeur = l;
        hauteur = h;
    }

    double getLargeur() { return largeur; }
    void setLargeur(double l) { largeur = l; }

    double getHauteur() { return hauteur; }
    void setHauteur(double h) { hauteur = h; }

    double perimetre() { return 2 * (largeur + hauteur); }
    double surface() { return largeur * hauteur; }

    void afficher() {
        cout << "Largeur: " << largeur << " | Hauteur: " << hauteur << endl;
        cout << "Perimetre: " << perimetre() << " | Surface: " << surface() << endl;
    }
};

int main() {
    Rectangle r(4.0, 5.5);
    r.afficher();
    return 0;
}