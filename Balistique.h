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
