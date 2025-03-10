#include <iostream>
#include <cmath> 
#ifndef CALCUL_LANCER
#define CALCUL_LANCER



// Fonction pour calculer le temps de vol
double calculer_temps_de_vol(double vitesse_initiale, double angle_radian, double distance_cible) {
    return distance_cible / (vitesse_initiale * cos(angle_radian));
}

// Fonction pour calculer la hauteur d'impact
double calculer_hauteur_impact(double position_x_lanceur, double position_z_lanceur, double vitesse_initiale, double angle_radian, double distance_cible) {
    return -g / 2 * pow((position_x_lanceur - distance_cible) / (vitesse_initiale * cos(angle_radian)), 2)
           + tan(angle_radian) * (position_x_lanceur - distance_cible)
           + position_z_lanceur;
}
#endif



////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2eme programme test avec vent VZ

#include <iostream>
#include <cmath>

const double g = 9.81; // Accélération gravitationnelle en m/s²

// Fonction pour calculer le temps de vol
double calculerTempsDeVol(double vD, double alpha, double zD) {
    double vDz = k * vD * sin(alpha); // Composante du vent vDZ avec k le coef de frottement de l'air
    double delta = vDz * vDz + 2 * g * zD;

    if (delta < 0) {
        std::cerr << "Erreur : pas de solution physique (delta négatif)." << std::endl;
        return -1;
    }

    double t1 = (-vDz + sqrt(delta)) / g;
    double t2 = (-vDz - sqrt(delta)) / g;

    return (t1 > 0) ? t1 : t2; // On prend la valeur positive
}

// Fonction pour calculer la hauteur de l'impact
double calculerHauteurImpact(double vD, double alpha, double xD, double zD, double xImpact) {
    double vDx = k* vD * cos(alpha); // Composante du vecteur avec k le coef de frottemtn de l'air 
    double tImpact = (xImpact - xD) / vDx; // Temps pour atteindre xImpact

    return -0.5 * g * tImpact * tImpact + vD * sin(alpha) * tImpact + zD;
}

