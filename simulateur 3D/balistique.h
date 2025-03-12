#ifndef BALISTIQUE_H
#define BALISTIQUE_H

#include <iostream>
#include <cmath>

using namespace std;

// Constantes
const double g = 9.81;               // Gravité (m/s²)
const double K = 8.68e-6;            // Coefficient de frottement de l'air
const double masse = 0.030;          // Masse de la fléchette en kg
const double x_cible = 2.37;         // Position de la cible en x (m)
const double z_cible = 1.73;         // Position de la cible en z (m)
const double diametre_cible = 0.451; // Diamètre de la cible en m

// Fonction pour résoudre l'équation quadratique et obtenir t
double calculer_t(double v0, double alpha, double phi, double vv, double alpha_v, double phi_v);

// Calcul de y(x)
double calculer_y(double t, double v0, double alpha, double phi, double vv, double alpha_v, double phi_v);

// Calcul de z(x)
double calculer_z(double t, double v0, double alpha, double vv, double alpha_v);

// Vérifier si la fléchette atteint la cible
bool est_dans_la_cible(double y_impact, double z_impact);

#endif
