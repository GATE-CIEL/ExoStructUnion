#include <iostream>
using namespace std;

// Structure de dates
struct SDate
{
    int jour;
    int mois;
    int annee;
};

// Structure d'employés
struct SEmployes
{
    char nom[20];
    char prenom[20];
    SDate embauche;
    SDate fonction;
};

int main() {
    SEmployes assistant = {
        "Dupont", "Jean", {25,11,2026},{26,11,2026}
    };

    cout << "Programme : GestionEmployes" << endl;
    return 0;
}
