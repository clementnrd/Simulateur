#include <iostream>
#include "calcul_lancer.h"

int main() {
    // Paramètres du projectile
    double v0, alpha, Fv, phi_v, x_cible, z_cible, rayon_cible;

    // Saisie des valeurs
    std::cout << "Entrez la vitesse initiale (m/s) : ";
    std::cin >> v0;
    std::cout << "Entrez l'angle de tir (degrés) : ";
    std::cin >> alpha;
    std::cout << "Entrez la force du vent (N) : ";
    std::cin >> Fv;
    std::cout << "Entrez l'angle du vent (degrés) : ";
    std::cin >> phi_v;
    std::cout << "Entrez la position X de la cible (m) : ";
    std::cin >> x_cible;
    std::cout << "Entrez la position Z de la cible (m) : ";
    std::cin >> z_cible;
    std::cout << "Entrez le rayon de la cible (m) : ";
    std::cin >> rayon_cible;

    // Appel de la fonction de calcul
    ResultatLancer resultat = calcul_lancer(v0, alpha, Fv, phi_v, x_cible, z_cible, rayon_cible);

    // Affichage des résultats
    std::cout << "Impact du projectile : (" << resultat.x_impact << ", " << resultat.z_impact << ") m" << std::endl;

    if (resultat.touche_cible) {
        std::cout << "----Le projectile touche la cible !-----" << std::endl;
    } else {
        std::cout << "xxx Le projectile rate la cible. xxx" << std::endl;
    }

    return 0;
}
