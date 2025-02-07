#include <iostream>
#include "balistique.h" // Inclusion du fichier header

using namespace std;

int main() {
    double vitesse, angle;
    char continuer = 'o';

    cout << "=== Simulateur de Tir Balistique ===\n";

    while (continuer == 'o' || continuer == 'O') {
        cout << "\nEntrez la vitesse initiale du projectile (m/s) : ";
        cin >> vitesse;
        cout << "Entrez l'angle de tir (degrés) : ";
        cin >> angle;

        // Calcul du tir en utilisant la fonction du header
        ResultatTir resultat = calculerTir(vitesse, angle);

        // Affichage des résultats
        cout << "\nRésultats du tir balistique :\n";
        cout << " - Temps de vol : " << resultat.tempsVol << " secondes\n";
        cout << " - Portée du projectile : " << resultat.portee << " mètres\n";
        cout << " - Hauteur maximale atteinte : " << resultat.hauteurMax << " mètres\n";

        cout << "\nVoulez-vous faire un autre tir ? (o/n) : ";
        cin >> continuer;
    }

    cout << "Merci d'avoir utilisé le simulateur !\n";
    return 0;
}
rt
