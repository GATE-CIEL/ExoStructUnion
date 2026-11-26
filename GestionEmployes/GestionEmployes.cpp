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
    cout << "Programme : GestionEmployes" << endl;
    return 0;
}
