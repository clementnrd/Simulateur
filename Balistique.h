#include <iostream>
#include <cmath> 
#ifndef CALCUL_LANCER
#define CALCUL_LANCER

#define G 9.81  // Accélération gravitationnelle (m/s²)

using namespace std;

// Fonction principale
int main() {
    // Paramètres de la cible
    const double x_cible = 2.37;       // Distance en X (m)
    const double z_cible = 1.73;       // Hauteur du centre de la cible (m)
    const double rayon_cible = 0.2255; // Rayon de la cible (m)

    // Variables utilisateur
    double v0, alpha, Fv, phi_v;

    // Saisie des paramètres
    cout << "Entrez la vitesse initiale (m/s) : ";
    cin >> v0;
    cout << "Entrez l'angle de tir (degres) : ";
    cin >> alpha;
    cout << "Entrez la force du vent (N) : ";
    cin >> Fv;
    cout << "Entrez l'angle du vent (degres, 0 = vent de face, 180 = vent arriere) : ";
    cin >> phi_v;

    // Conversion des angles en radians
    double alpha_rad = alpha * (3, 14 / 180.0);
    double phi_v_rad = phi_v * (3, 14 / 180.0);

    // Décomposition de la vitesse initiale
    double v0x = v0 * cos(alpha_rad);
    double v0z = v0 * sin(alpha_rad);

    // Calcul de l'accélération due au vent (approximation simplifiée)
    double ax_v = (Fv * cos(phi_v_rad)) / 1.0; // Supposons une masse de 1 kg pour le projectile
    double az_v = (Fv * sin(phi_v_rad)) / 1.0;

    // Calcul du temps de vol en résolvant : -0.5 * (G - az_v) * t² + v0z * t + 0 = 0
    double a = -0.5 * (G - az_v);
    double b = v0z;
    double delta = b * b - 4 * a * 0;

    if (delta < 0) {
        cout << "Le projectile ne touche pas le sol." << endl;
        return 0;
    }

    // Temps d'impact avec le sol (on prend la solution positive)
    double t_impact = (-b + sqrt(delta)) / (2 * a);

    // Calcul de la position en X et Z à t_impact
    double x_impact = 0.5 * ax_v * t_impact * t_impact + v0x * t_impact;
    double z_impact = 0.5 * (az_v - G) * t_impact * t_impact + v0z * t_impact;

    // Affichage des résultats
    cout << "Impact du projectile : (" << x_impact << ", " << z_impact << ") m" << endl;

    // Vérification si l'impact est dans la cible
    double distance_centre = sqrt(pow(x_impact - x_cible, 2) + pow(z_impact - z_cible, 2));

    if (distance_centre <= rayon_cible) {
        cout << "----Le projectile touche la cible !-----" << endl;
    }
    else {
        cout << "xxx Le projectile rate la cible. xxx" << endl;
    }

    return 0;
}
