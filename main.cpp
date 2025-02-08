#include <iostream>
#include "balistique.h" // Inclusion du fichier header
#include "REGLE_LANCER.h"
using namespace std;

int main() {
    flaot vitesse_initial, angle ;

    cout << "=== Simulateur de Tir Balistique ===\n";

  while (vitesse_initial <= 0){
        cout << "Entrez la vitesse initiale du projectile (m/s) : " << endl;
        cin >> vitesse_initial;
        cout << "Entrez l'angle de tir (degrés) : ";
        cin >> angle;
       }

        // Calcul du tir en utilisant la fonction du header
        ResultatTir resultat = calculerTir(vitesse_initial, angle);

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
