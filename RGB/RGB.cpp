#include <iostream>
using namespace std;

struct Srgb
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

union UColor
{
    unsigned int val;
    Srgb components;
    unsigned char tabCol[3];
};


int main() {
    char choix = {};
    UColor couleur = { 0 };
    unsigned int temp = 0;

    cout << "Programme : RGB" << endl;
    cout << "Saisir la couleur : \n";
    cout << "- via les 3 composantes (1)\n";
    cout << "- via la valeur unique (2)\n";
    cin >> choix;

    if (choix == '1')
    {
        cout << "Entrez les valeurs \n";
        cout << "du rouge : ";
        cin >> hex >> temp;
        couleur.components.r = temp;

        cout << "du bleu : ";
        cin >> hex >> temp;
        couleur.components.b = temp;

        cout << "du vert : ";
        cin >> hex >> temp;
        couleur.components.g = temp;

    }
    if (choix == '2')
    {
        cout << "Entrez la valeur unique en hexadecimal : ";
        cin >> hex >> temp;
        couleur.val = temp;
    }

    cout << "-----------------------------------\n";
    cout << "-- Descriptif de la couleur --\n";
    cout << "Valeur de l'octet rouge : " << hex << static_cast<int>(couleur.components.r) << "\n";
    cout << "Valeur de l'octet vert : " << hex << static_cast<int>(couleur.components.g) << "\n";
    cout << "Valeur de l'octet bleu : " << hex << static_cast<int>(couleur.components.b) << "\n";
    cout << "Valeur globale en hexadecimal : " << hex << couleur.val << "\n";
    cout << "Tableau : \n";
    cout << hex << static_cast<int>(couleur.tabCol[0]) << "\n";
    cout << hex << static_cast<int>(couleur.tabCol[1]) << "\n";
    cout << hex << static_cast<int>(couleur.tabCol[2]) << "\n";

    return 0;
}
