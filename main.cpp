#include <iostream>
#include "calcul_lancer.h"

using namespace std ; 
int main() {
    // Paramètres du projectile
    double v0, alpha, Fv, phi_v, x_cible, z_cible, rayon_cible;

    // Saisie des valeurs
    cout << "Entrez la vitesse initiale (m/s) : ";
    cin >> v0;
    cout << "Entrez l'angle de tir (degrés) : ";
    cin >> alpha;
    cout << "Entrez la force du vent (N) : ";
    cin >> Fv;
    cout << "Entrez l'angle du vent (degrés) : ";
    cin >> phi_v;
    cout << "Entrez la position X de la cible (m) : ";
    cin >> x_cible;
    cout << "Entrez la position Z de la cible (m) : ";
    cin >> z_cible;
    cout << "Entrez le rayon de la cible (m) : ";
    cin >> rayon_cible;

    // Appel de la fonction de calcul
    ResultatLancer resultat = calcul_lancer(v0, alpha, Fv, phi_v, x_cible, z_cible, rayon_cible);

    // Affichage des résultats
    cout << "Impact du projectile : (" << resultat.x_impact << ", " << resultat.z_impact << ") m" << endl;

    

    return 0;
}
