
#ifndef BALISTIQUE_H
#define BALISTIQUE_H

#include <iostream>
#include <cmath>

using namespace std;

// Constante
const double g = 9.81;               // Gravie (m/s)
const double K = 8.68e-6;            // Coefficient de frottement de l'air
const double masse = 0.030;          // Masse de la fl�chette en kg f
const double x_cible = 2.37;         // Position de la cible en x (m)
const double z_cible = 1.73;         // Position de la cible en z (m)
const double diametre_cible = 0.451; // Diam�tre de la cible en m

// Fonction pour resoudre l'equation quadratique et obtenir t
double calculer_t(double v0, double alpha, double phi, double vv, double alpha_v, double phi_v);

// Calcul de y(x)
double calculer_y(double t, double v0, double alpha, double phi, double vv, double alpha_v, double phi_v);

// Calcul de z(x)
double calculer_z(double t, double v0, double alpha, double vv, double alpha_v);

// Verifier si la fl�chette atteint la cible
bool est_dans_la_cible(double y_impact, double z_impact);

// Calcul du score selon l'impact
int calculer_points(double y_impact, double z_impact);

#endif
