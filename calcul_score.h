#include <stdio.h>
#include <math.h>
#ifndef calcul_score
#define calcul_score
#define PI 3.141592653589793


int secteurs[20] = { 6, 13, 4, 18, 1, 20, 5, 12, 9, 14,
                   11, 8, 16, 7, 19, 3, 17, 2, 15, 10 };



int calculer_score(double z, double y) {
    double rho = sqrt(z * z + y * y);
    double theta_deg;

    if (rho == 0) {
        theta_deg = 0;
    }
    else {
        theta_deg = acos(z / rho) * 180.0 / PI;
        if (y < 0) {
            theta_deg = 360.0 - theta_deg;
        }
    }
    int index = (int)((theta_deg + 9) / 18) % 20;
    int base_score = secteurs[index];
    int score = 0;
  

    if (rho <= 6.35) 
    {
        score = 50;
     
    }
    else if (rho <= 15.9) 
    {
        score = 25;
    }
    else if (rho >= 162 && rho <= 170) 
    {
        score = base_score * 2;
  
    }
    else if (rho >= 99.4 && rho <= 107.4) 
    {
        score = base_score * 3;
    }
    else if (rho <= 225.5) 
    {
        score = base_score;
    }
    else 
    {
        score = 0; 
    }

    return score;
}
#endif 