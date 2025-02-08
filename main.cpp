#include <iostream>
#include "CALCUL_LANCER.h" 
#include "REGLE_LANCER.h"
using namespace std;

int main() {
    float vitesse_initiale, angle, position_x_lanceur, position_z_lanceur;
    const int g = 9.81; 
    const int distance_cible = 2.37 ; 
    cout << "=== Simulateur de Tir Balistique ===\n";

while (vitesse_initiale <= 0 || position_x_lanceur <= 0 || position_z_lanceur <=0)
  {
        cout << "Entrez la vitesse initiale du projectile (m/s) : "<< endl; 
        cin >> vitesse_initiale;
        cout << "Entrez l'angle de tir (degrés) : " << endl ; 
        cin >> angle;
        cout << "Entrez la position x du lanceur (m) : " << endl;
        cin >> position_x_lanceur;
        cout << "Entrez la position z du lanceur (m) : " << endl ;
        cin >> position_z_lanceur ; 
  }
 
    double angle_radian = angle_degre * M_PI / 180.0; 

    cout << "Temps de vol de la flechette est de (s): " << calculer_temps_de_vol(vitesse_initiale, angle_radian, distance_cible);
    cout << "Le point d'impactacte de la flechette est de (m):" << calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible); 
    
    
cout << "Merci d'avoir utilisé le simulateur !\n";   
return 0;
}


