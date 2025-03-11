#ifndef CALCUL_LANCER_H
#define CALCUL_LANCER_H

#include <iostream>
#include <cmath>

const double G = 9.81; // Accélération gravitationnelle en m/s²

// Déclaration de la fonction de calcul du lancer
void calculerLancer(double v0, double alpha, double Fv, double phi_v, 
                    double x_cible, double z_cible, double rayon_cible);

#endif // CALCUL_LANCER_H
