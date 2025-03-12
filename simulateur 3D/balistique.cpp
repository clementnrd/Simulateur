#include "balistique.h"

// Fonction pour résoudre l'équation quadratique et obtenir t
double calculer_t(double v0, double alpha, double phi, double vv, double alpha_v, double phi_v) {
    double a = K * vv * vv * cos(alpha_v) * cos(phi_v) / (2 * masse);
    double b = v0 * cos(alpha) * cos(phi);
    double c = -x_cible; // x initial est 0

    double delta = b * b - 4 * a * c;

    if (delta < 0) return -1; // Pas de solution physique

    double t1 = (-b + sqrt(delta)) / (2 * a);
    double t2 = (-b - sqrt(delta)) / (2 * a);

    return (t1 > 0) ? t1 : t2; // Retourne la solution positive
}

// Fonction pour calculer y(x)
double calculer_y(double t, double v0, double alpha, double phi, double vv, double alpha_v, double phi_v) {
    double a = K * vv * vv * cos(alpha_v) * sin(phi_v) / (2 * masse);
    double b = v0 * cos(alpha) * sin(phi);
    return a * t * t + b * t;
}

// Fonction pour calculer z(x)
double calculer_z(double t, double v0, double alpha, double vv, double alpha_v) {
    double a = (-g + (K * vv * vv * sin(alpha_v) / masse)) / 2;
    double b = v0 * sin(alpha);
    return a * t * t + b * t;
}

// Fonction pour vérifier si la fléchette touche la cible
bool est_dans_la_cible(double y_impact, double z_impact) {
    double distance = sqrt(pow(y_impact, 2) + pow(z_impact - z_cible, 2));
    return distance <= (diametre_cible / 2);
}
