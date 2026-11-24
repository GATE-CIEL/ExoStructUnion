#include <iostream>
using namespace std;


struct Palette {
    int poids;
    char reference;
};
struct Rouleau{
    float longueur;
    int numero;
};
enum Etat {
    vide, palette, rouleau
};
struct Casier {
    int px;
    int py;
    Contenu contenu;
    Etat etat;
};
union Contenu { 
    Palette palette;
    Rouleau rouleau;
};


int main() {
    cout << "Programme : Transgerbeur" << endl;
    Casier tabCasiers;

    return 0;
}
