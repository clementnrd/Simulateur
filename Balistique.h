#ifndef BALISTIQUE_H
#define BALISTIQUE_H

#include <cmath>

// Constante de gravité
const double g = 9.81;

// Structure pour stocker les résultats du tir
struct ResultatTir {
    double tempsVol;
    double portee;
    double hauteurMax;
};

// Fonction pour convertir un angle en radians
inline double toRadians(double angle) {
    return angle * 3.1415926535 / 180.0;
}

// Fonction qui calcule la portée, le temps de vol et la hauteur max
ResultatTir calculerTir(double vitesse, double angle) {
    ResultatTir resultat;
    double angleRad = toRadians(angle);

    // Temps de vol
    resultat.tempsVol = (2 * vitesse * sin(angleRad)) / g;

    // Portée du projectile
    resultat.portee = vitesse * cos(angleRad) * resultat.tempsVol;

    // Hauteur maximale atteinte
    resultat.hauteurMax = (vitesse * sin(angleRad)) * (vitesse * sin(angleRad)) / (2 * g);

    return resultat;
}

#endif // BALISTIQUE_H

