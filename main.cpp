#include <iostream>
#include "calcul_lancer.h"
#inculde "regle_lancer.h"



using namespace std ; 
int main() {
    // Paramètres du projectile
    double v0, alpha, phi_v, x_cible, xd, zd, resultat_lancer, temps_vol;
    const float rayon_cible = 0.2255 ; 
    const float g = 9.81; 

    
    cout << "Entrez la vitesse initiale (m/s) : ";
    cin >> v0;
    cout << "Entrez l'angle de tir (degrés) : ";
    cin >> alpha;
    cout << "Entrez l'angle du vent (degrés) : ";
    cin >> phi_v;
    cout << "Entrez la position X de la cible (m) : ";
    cin >> x_cible;
    cout << "Entrez la position position xd de la cible (m) : ";
    cin >> xd;
    cout << "Entrez la position position zd de la cible (m) : ";
    cin >> zd;
    
    resultat_lancer = position_fleche(g, x_cible, xd, vitesse_ini, alpha, phi_v, zd)

    temps_vol=  calcul_temps_vol(

    

    return 0;
}
