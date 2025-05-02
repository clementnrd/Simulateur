#include "balistique.h"

// Fonction pour résoudre l'équation quadratique et obtenir t
double calculer_t(double v0, double alpha, double phi, double vv, double alpha_v, double phi_v) {
    double a, b, c;

    if (vv == 0) {
        a = 0; // Pas de frottement du vent sur x
        b = v0 * cos(alpha) * cos(phi);
        c = -x_cible;
        return x_cible / b; // Solution simple en 2D
    }
    else {
        a = K * vv * vv * cos(alpha_v) * cos(phi_v) / (2 * masse);
        b = v0 * cos(alpha) * cos(phi);
        c = -x_cible;

        double delta = b * b - 4 * a * c;

        if (delta < 0) return -1; // Pas de solution physique

        double t1 = (-b + sqrt(delta)) / (2 * a);
        double t2 = (-b - sqrt(delta)) / (2 * a);

        return (t1 > 0) ? t1 : t2;
    }
}

double calculer_y(double t, double v0, double alpha, double phi, double vv, double alpha_v, double phi_v) {
    if (vv == 0) {
        return v0 * cos(alpha) * sin(phi) * t;
    }
    else {
        double a = K * vv * vv * cos(alpha_v) * sin(phi_v) / (2 * masse);
        double b = v0 * cos(alpha) * sin(phi);
        return a * t * t + b * t;
    }
}

double calculer_z(double t, double v0, double alpha, double vv, double alpha_v) {
    if (vv == 0) {
        double b = v0 * sin(alpha);
        double a = -g / 2;
        return a * t * t + b * t;
    }
    else {
        double a = (-g + (K * vv * vv * sin(alpha_v) / masse)) / 2;
        double b = v0 * sin(alpha);
        return a * t * t + b * t;
    }
}

bool est_dans_la_cible(double y_impact, double z_impact) {
    double distance = sqrt(pow(y_impact, 2) + pow(z_impact - z_cible, 2));
    return distance <= (diametre_cible / 2);
}

int calculer_points(double y_impact, double z_impact) {
    double distance = sqrt(pow(y_impact, 2) + pow(z_impact - z_cible, 2));

    if (distance <= 0.0127) return 50;
    else if (distance <= 0.0318) return 25;
    else if (distance <= 0.107) return 10;
    else if (distance <= diametre_cible / 2) return 5;
    else return 0;
}
