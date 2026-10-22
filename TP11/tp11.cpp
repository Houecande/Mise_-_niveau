#include <iostream>
using namespace std;

class Etudiant {
protected:
    string nom, prenom;
    float tabnotes[10];

public:
    virtual void saisie() {
        cout << "Nom : "; cin >> nom;
        cout << "Prenom : "; cin >> prenom;
        for(int i=0; i<10; i++) {
            cout << "Note " << i+1 << " : ";
            cin >> tabnotes[i];
        }
    }

    virtual void affichage() {
        cout << "Nom: " << nom << " " << prenom << " | Moyenne: " << moyenne() << endl;
    }

    virtual float moyenne() {
        float somme = 0;
        for(int i=0; i<10; i++) somme += tabnotes[i];
        return somme / 10.0;
    }

    virtual int admis() {
        return (moyenne() >= 10.0) ? 1 : 0;
    }

    int exae_quo(Etudiant E) {
        return (moyenne() == E.moyenne()) ? 1 : 0;
    }
};

class Etudiant_en_Maitrise : public Etudiant {
private:
    float note_memoire;

public:
    void saisie() override {
        Etudiant::saisie();
        cout << "Note de memoire : ";
        cin >> note_memoire;
    }

    void affichage() override {
        Etudiant::affichage();
        cout << "Note memoire: " << note_memoire << endl;
    }

    float moyenne() override {
        return (Etudiant::moyenne() + note_memoire) / 2.0; 
    }

    int admis() override {
        return (Etudiant::moyenne() >= 10.0 && note_memoire >= 10.0) ? 1 : 0;
    }

    int exae_quo(Etudiant_en_Maitrise E) {
        return (moyenne() == E.moyenne() && note_memoire == E.note_memoire) ? 1 : 0;
    }
};

int main() {
    Etudiant_en_Maitrise em;
    em.saisie();
    em.affichage();
    if (em.admis() == 1) cout << "Admis en Maitrise !" << endl;
    else cout << "Refuse." << endl;
    return 0;
}

// Les méthodes à redéfinir dans la classe fille sont saisie, affichage, moyenne, admis et exae_quo pour intégrer la note de mémoire.