#ifndef CALCUL_LANCER
#define CALCUL_LANCER
#include <iostream>
#include <cmath>

}
double calcul_temps_vol(double longueur_bras,double xd , double vitisse_ini, double alpha, double phi)
{
double t ; 
double alpha_rad = alpha * (3.14 / 180.0);
double phi_rad = phi * (3.14 / 180.0);  
t = longueur_bras - xd/ cos(alpha_rad) * cos(phi_rad) ; 
return t; 
}

double position_fleche(double g, double longueur_bras, double xd , double vitesse_ini, double alpha, double phi, double zd)
{
double alpha_rad = alpha * (3.14 / 180.0);
double phi_rad = phi * (3.14 / 180.0); 
double z ; 
z = -g/2 * ((longueur_bras - xd / 2 vitesse_ini * cos(alpha_rad)) * cos(phi_rad)*(longueur_bras - xd / 2 vitesse_ini * cos(alpha_rad) * cos(phi_rad))) + (tan (alpha_rad)/cos(phi_rad))*(longueur_bras-xd) + zd
return z; 
}

#endif 
