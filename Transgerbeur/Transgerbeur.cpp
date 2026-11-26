// Transgerbeur.cpp
// Ambroise Gaté
// 24/11/2026
#include <iostream>
#include <cstring>
using namespace std;

// Définition du type Palette
struct Palette {
    int poids;          // a un poids de type entier
    char reference[20]; // a une ref de type char max 19 caracteres + 1
};

// Définition du type Rouleau
struct Rouleau{
    float longueur;     // a une longueur réelle
    int numero;         // a un numéro entier
};

// Définition du type Etat
enum Etat {
    vide, palette, rouleau // a trois état différents
};

// Définition du type Contenu
union Contenu { 
    Palette palette;    // soit une palette
    Rouleau rouleau;    // soit un rouleau
};

// Définition du type Casier
struct Casier {
    int px;             // coordonnée x entier
    int py;             // coordonnée y entier
    Contenu contenu;    // contenu
    Etat etat;          // etat du casier
};



int main() {
    Rouleau ro1 = {10.0f, 1};                       // déclaration et initialisation du rouleau ro1
    Palette pa1;                                    // déclaration de la palette pa1
    pa1.poids = 25;                                 //
    strcpy_s(pa1.reference, "PAL1");                // initialisation de la palette pa1
    Etat etatC1 = vide;                             // déclaration et initialisation de l'état
    Contenu cont = {pa1};                           // déclaration et initialisation du contenu
    cont.rouleau = ro1;                             // affectation de ro1 à contenu
    Casier c1 = { 2, 3, pa1, palette };             // déclaration et initialisation du casier c1
    Casier c2 = { 0,0, {50, "PAL2"} , palette };    // déclaration et initialisation du casier c2
    Casier tabCasiers[9];                           // déclaration et initialisation du tableau
    tabCasiers[0] = c1;                             // c1 à l'indice 0
    tabCasiers[2] = c2;                             // c2 à l'indice 2

    cout << "Programme : Transgerbeur" << endl;
    cout << "Taille de chaque elements en octets : \n";
    cout << "Taille de ro1 : "<<sizeof(ro1)<<endl;
    cout << "Taille de pa1 : " << sizeof(pa1) << endl;
    cout << "Taille de etatC1 : " << sizeof(etatC1) << endl;
    cout << "Taille de cont : " << sizeof(cont) << endl;
    cout << "Taille de c1 : " << sizeof(c1) << endl;
    cout << "Taille de c2 : " << sizeof(c2) << endl;
    cout << "Taille de tabCasiers  : " << sizeof(tabCasiers) << endl;

    return 0;
}
