#ifndef CALCUL_LANCER_H
#define CALCUL_LANCER_H

#include <iostream>
#include <cmath>

const double G = 9.81; // Accélération gravitationnelle (m/s²)

struct ResultatLancer {
    double x_impact;
    double z_impact;
    bool touche_cible;
};

// Fonction de calcul du lancer de projectile
ResultatLancer calcul_lancer(double v0, double alpha, double Fv, double phi_v, 
                             double x_cible, double z_cible, double rayon_cible) {
    // Conversion des angles en radians
    double alpha_rad = alpha * (M_PI / 180.0);
    double phi_v_rad = phi_v * (M_PI / 180.0);

    // Décomposition de la vitesse initiale
    double v0x = v0 * cos(alpha_rad);
    double v0z = v0 * sin(alpha_rad);

    // Calcul de l'accélération due au vent (approximation simplifiée)
    double ax_v = Fv * cos(phi_v_rad); // Supposons une masse de 1 kg pour le projectile
    double az_v = Fv * sin(phi_v_rad);

    // Calcul du temps de vol en résolvant : -0.5 * (G - az_v) * t² + v0z * t = 0
    double a = -0.5 * (G - az_v);
    double b = v0z;
    double delta = b * b;

    if (a == 0 || delta < 0) {
        std::cout << "Le projectile ne touche pas le sol." << std::endl;
        return {0, 0, false};
    }

    // Temps d'impact avec le sol (on prend la solution positive)
    double t_impact = (-b + sqrt(delta)) / (2 * a);

    // Calcul de la position en X et Z à t_impact
    double x_impact = 0.5 * ax_v * t_impact * t_impact + v0x * t_impact;
    double z_impact = 0.5 * (az_v - G) * t_impact * t_impact + v0z * t_impact;

    // Vérification si l'impact est dans la cible
    double distance_centre = sqrt(pow(x_impact - x_cible, 2) + pow(z_impact - z_cible, 2));
    bool touche_cible = (distance_centre <= rayon_cible);

    return {x_impact, z_impact, touche_cible};
}

#endif // CALCUL_LANCER_H
