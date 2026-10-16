#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // 1-)  ADRESSE IPv4
    int x, y, z, t;
    cout << "ANALYSE IPv4" << endl;
    cout << "Entrez les 4 entiers de l'IPv4 (X Y Z T) : ";
    cin >> x >> y >> z >> t;

    // Vérification des erreurs (entre 0 et 255)
    if (x < 0 || x > 255 || y < 0 || y > 255 || z < 0 || z > 255 || t < 0 || t > 255) {
        cout << "Erreur : Adresse IP incorrecte ! Les valeurs doivent etre entre 0 et 255." << endl;
    } else {
        cout << "Adresse IP : " << x << "." << y << "." << z << "." << t << endl;

        // Détermination de la classe
        if (x >= 1 && x <= 126) {
            cout << "Classe : A" << endl;
            cout << "Masque de sous-reseau : 255.0.0.0" << endl;
            cout << "Adresse de diffusion : " << x << ".255.255.255" << endl;
            cout << "Plage d'hotes : " << x << ".0.0.1 a " << x << ".255.255.254" << endl;
        } 
        else if (x >= 128 && x <= 191) {
            cout << "Classe : B" << endl;
            cout << "Masque de sous-reseau : 255.255.0.0" << endl;
            cout << "Adresse de diffusion : " << x << "." << y << ".255.255" << endl;
            cout << "Plage d'hotes : " << x << "." << y << ".0.1 a " << x << "." << y << ".255.254" << endl;
        } 
        else if (x >= 192 && x <= 223) {
            cout << "Classe : C" << endl;
            cout << "Masque de sous-reseau : 255.255.255.0" << endl;
            cout << "Adresse de diffusion : " << x << "." << y << "." << z << ".255" << endl;
            cout << "Plage d'hotes : " << x << "." << y << "." << z << ".1 a " << x << "." << y << "." << z << ".254" << endl;
        } 
        else {
            cout << "Classe particuliere (D ou E) -> Inexploitable pour des hotes." << endl;
        }
    }

    // 2-) ADRESSE IPv6 
    string ipv6;
    cout << "\n=== ANALYSE IPv6 ===" << endl;
    cout << "Entrez une adresse IPv6 (ex: ::1 ou 2001:db8::1) : ";
    cin >> ipv6;

    // Affichage des informations de base pour l'IPv6
    cout << "Adresse IPv6 saisie : " << ipv6 << endl;
    cout << "Masque de sous-reseau standard : /64" << endl;
    
    if (ipv6 == "::1") {
        cout << "Type : Adresse de bouclage (Localhost)" << endl;
    } else {
        cout << "Type : Adresse IPv6 standard" << endl;
        cout << "Remarque : Pas de diffusion en IPv6." << endl;
    }

    return 0;
}