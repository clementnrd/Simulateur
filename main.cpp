#include <iostream>
#include "balistique.h" // Inclusion du fichier header

using namespace std;

int main() {
    flaot vitesse_initial, angle, distance, hauteur_lance ;

    cout << "=== Simulateur de Tir Balistique ===\n";

  while (vitesse_initial <= 0  || distance <= 0) || hauteur_lance <=0 {
        cout << "Entrez la vitesse initiale du projectile (m/s) : " << endl;
        cin >> vitesse_initial;
        cout << "Entrez l'angle de tir (degrés) : ";
        cin >> angle;
        cout << "Entrer disantance a la quel vous etes de la cible (m) "<<endl ; 
        cin >> distance ;
        cout <<"Entrer la hauteur du lance ? :  " ; 
        cin >> hauteur_lance; 
  }

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
