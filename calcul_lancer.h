#ifndef CALCUL_LANCER_H
#define CALCUL_LANCER_H
#include <math.h>
#define PI 3.141592653589793

double calcul_temps_vol(double x, double xd, double v0, double alpha, double phi)
{
    double alpha_rad = alpha * (PI / 180.0);
    double phi_rad = phi * (PI / 180.0);
    return (x - xd) / (v0 * cos(alpha_rad) * cos(phi_rad));
}

double position_fleche_y(double x, double xd, double phi, double yd)
{
    double phi_rad = phi * (PI / 180.0);
    double y = (x - xd) * tan(phi_rad) + yd;
    return y;
}

double position_fleche_z(double g, double x, double xd, double v0, double alpha, double phi, double zd)
{
    double alpha_rad = alpha * (PI / 180.0);
    double phi_rad = phi * (PI / 180.0);
    double dx = x - xd;

    double z = -(g / 2.0) * (dx * dx) /
        (v0 * v0 * pow(cos(alpha_rad), 2) * pow(cos(phi_rad), 2))
        + (tan(alpha_rad) / cos(phi_rad)) * dx
        + zd;
    return z;
}


#endif