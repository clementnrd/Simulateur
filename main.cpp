#include <iostream>
#include "calcul_lancer.h"
#inculde "regle_lancer.h"


using namespace std ;
int main() {
    // Paramètres du projectile
    double v0, alpha, phi_y, x_cible, z_cible, y_cible, xd, zd, yd, resultat_lancer_z, resultat_lancer_y, temps_vol, point ;
    const float rayon_cible = 0.2255 ;
    const float g = 9.81;

    do
    {
    cout << "Entrez la vitesse initiale (m/s) : ";
    cin >> v0 ;
    cout << "Entrez l'angle de tir sur z  (degres) : ";
    cin >> alpha ;
    cout << "Entrez l'angle de tir sur y  (degres) : ";
    cin >> phi_y ;
    cout << "Entrez la position X de la cible (m) : ";
    cin >> x_cible ;
    cout << "Entrez la position Z de la cible (m) : ";
    cin >> z_cible ;
    cout << "Entrez la position Y de la cible (m) : ";
    cin >> y_cible ;
    cout << "Entrez la position position xd du tirreur (m) : ";
    cin >> xd ;
    cout << "Entrez la position position zd du tirreur (m) : ";
    cin >> zd ;
    cout << "Entrez la position position yd du tirreur (m) : ";
    cin >> yd ;
    
    }while ( v0 >0  ) 
   
    cout << "Veuillez choisir une vitesse initial positive"; 

    resultat_lancer_z = position_fleche_z(g, x_cible, xd, v0, alpha, phi_y, zd) ;

    resultat_lancer_y = position_fleche_y(x_cible, xd, phi_y, yd) ;

    temps_vol =  calcul_temps_vol(x_cible, xd, v0, alpha, phi_y) ;

    cout << "Position z " << resultat_lancer_z << endl ;
    cout << "position y " << resultat_lancer_y << endl ;

    if ( resultat_lancer_z < z_cible || resultat_lancer_z > z_cible+rayon_cible || resultat_lancer_y > rayon_cible || resultat_lancer_y < - rayon_cible )
    {
    cout << "Vous n avez pas toucher la cible" ;
    point = 0;
    }


  

    return 0;
}
