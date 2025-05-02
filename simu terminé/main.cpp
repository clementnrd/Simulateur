#include <iostream>
#include <cmath>
#include "balistique.h"

using namespace std;

int main() {
    // Demande des entrées utilisateur
    double v0, alpha, phi, vv, alpha_v, phi_v;

    cout << "Entrez la vitesse initiale du projectile (m/s) : ";
    cin >> v0;
    cout << "Entrez l'angle d'elevation du tir (en degres) : ";
    cin >> alpha;
    cout << "Entrez l'angle de deviation laterale du tir (en degres) : ";
    cin >> phi;
    cout << "Entrez la vitesse du vent (m/s) : ";
    cin >> vv;
    cout << "Entrez l'angle d'elevation du vent (en degres) : ";
    cin >> alpha_v;
    cout << "Entrez l'angle de deviation laterale du vent (en degres) : ";
    cin >> phi_v;

    // Convertir les angles en radians
    alpha = alpha * 3.14 / 180.0;
    phi = phi * 3.14 / 180.0;
    alpha_v = alpha_v * 3.14 / 180.0;
    phi_v = phi_v * 3.14 / 180.0;

    // Calcul du temps d'impact
    double t = calculer_t(v0, alpha, phi, vv, alpha_v, phi_v);

    if (t < 0) {
        cout << "Pas de solution physique (tir impossible vers cette cible).\n";
        return 0;
    }

    // Calcul de la position de l'impact
    double y_impact = calculer_y(t, v0, alpha, phi, vv, alpha_v, phi_v);
    double z_impact = calculer_z(t, v0, alpha, vv, alpha_v);

    // Affichage des résultats
    cout << "Coordonnees de l'impact : y = " << y_impact << " m, z = " << z_impact << " m\n";

    int score = calculer_points(y_impact, z_impact);
    if (score > 0) {
        cout << "Bravo ! Tu as marque " << score << " points !\n";
    }
    else {
        cout << "Rate ! Aucun point marque.\n";
    }

    return 0;
}