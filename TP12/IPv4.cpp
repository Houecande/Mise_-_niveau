#include <iostream>
using namespace std;

int main() {
    int x, y, z, t;
    
    // Saisie des 4 octets de l'adresse IPv4
    cout << "Entrez les 4 octets de l'adresse IP (X Y Z T) : ";
    cin >> x >> y >> z >> t;

    // Vérification des erreurs de saisie (chaque octet doit être entre 0 et 255)
    if (x < 0 || x > 255 || y < 0 || y > 255 || z < 0 || z > 255 || t < 0 || t > 255) {
        cout << "Erreur : Adresse IP incorrecte ! Les octets doivent être compris entre 0 et 255." << endl;
        return 0;
    }

    // Gestion de l'adresse de bouclage
    if (x == 127) {
        cout << "Erreur : Adresse de boucle locale, inexploitable pour un réseau d'hôtes standard." << endl;
        return 0;
    }

    cout << " ANALYSE DE L'ADRESSE IP " << endl;
    cout << "Adresse saisie : " << x << "." << y << "." << z << "." << t << endl;

    // Détermination de la classe et des caractéristiques réseau
    if (x >= 1 && x <= 126) {
        cout << "Classe : A" << endl;
        cout << "Masque de sous-réseau par défaut : 255.0.0.0" << endl;
        cout << "Adresse de diffusion : " << x << ".255.255.255" << endl;
        cout << "Plage d'adresses d'hôtes utilisables : " << x << ".0.0.1 à " << x << ".255.255.254" << endl;
    } 
    else if (x >= 128 && x <= 191) {
        cout << "Classe : B" << endl;
        cout << "Masque de sous-réseau par défaut : 255.255.0.0" << endl;
        cout << "Adresse de diffusion : " << x << "." << y << ".255.255" << endl;
        cout << "Plage d'adresses d'hôtes utilisables : " << x << "." << y << ".0.1 à " << x << "." << y << ".255.254" << endl;
    } 
    else if (x >= 192 && x <= 223) {
        cout << "Classe : C" << endl;
        cout << "Masque de sous-réseau par défaut : 255.255.255.0" << endl;
        cout << "Adresse de diffusion : " << x << "." << y << "." << z << ".255" << endl;
        cout << "Plage d'adresses d'hôtes utilisables : " << x << "." << y << "." << z << ".1 à " << x << "." << y << "." << z << ".254" << endl;
    } 
    else if (x >= 224 && x <= 239) {
        cout << "Classe : D -> Inexploitable pour les adresses d'hôtes." << endl;
    } 
    else {
        cout << "Classe : E (Réservée) -> Inexploitable." << endl;
    }

    return 0;
}