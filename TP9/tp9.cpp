#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double px = 0, double py = 0) {
        x = px;
        y = py;
    }

    void deplace(double dx, double dy) {
        x += dx;
        y += dy;
    }

    void affiche() {
        cout << "Coordonnees : (" << x << ", " << y << ")" << endl;
    }

    void saisir() {
        cout << "Entrez x : "; cin >> x;
        cout << "Entrez y : "; cin >> y;
    }

    double distance(Point p) {
        return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    }

    Point milieu(Point p) {
        return Point((x + p.x) / 2, (y + p.y) / 2);
    }
};

int main() {
    Point p1, p2;
    cout << "Saisie du point 1 :\n"; p1.saisir();
    cout << "Saisie du point 2 :\n"; p2.saisir();

    p1.affiche();
    p2.affiche();

    cout << "Distance entre les deux : " << p1.distance(p2) << endl;
    Point m = p1.milieu(p2);
    cout << "Milieu du segment : "; m.affiche();

    return 0;
}