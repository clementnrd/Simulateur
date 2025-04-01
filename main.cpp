#include <iostream>
#include "calcul_lancer.h"
#include "regle_lancer.h"
#include <cmath>


using namespace std ;
int main() {
    // Paramètres du projectile
    double v0, alpha_z, phi_y, x, z, y, xd, zd, yd, resultat_lancer_z, resultat_lancer_y, temps_vol, point, joueurs, joueurs_partie, tir,r, teta;
    const int tir = 0 ; 
    const float rayon_cible = 0.2255 ;
    const float g = 9.81;
    const float air_cible = 3.14* rayon_cible * rayon_cible ; 

  cout << "combien de joueurs etes vous  (1/4) ? ";
    cin >> joueurs_partie;
    
    

    do{
        if ( tir == 6) {
        tir = 0 ;
        joueurs = joueurs +1 ; 
        }
        if ( joueurs <= joueurs_partie) {
        cout << "JOUEUR " << joueurs << endl ; 
        }
        else{
        joueurs = 1 ;
        cout << "JOUEUR " << joueurs << endl ; 
        }
        
        
        cout << "Entrez la vitesse initiale (m/s)  : ";
        cin >> v0 ;
        cout << "Entrez l'angle de tir sur z  (degres) : ";
        cin >> alpha_z ;
        cout << "Entrez l'angle de tir sur y  (degres) : ";
        cin >> phi_y ;
        cout << "Entrez la position X du tirreur (m) : ";
        cin >> x ;
        cout << "Entrez la position Z du tirreur(m) : ";
        cin >> z ;
        cout << "Entrez la position Y du tirreur (m) : ";
        cin >> y ;
        cout << "Entrez la position position xd du lancer (m) : ";
        cin >> xd ;
        cout << "Entrez la position position zd du lancer (m) : ";
        cin >> zd ;
        cout << "Entrez la position position yd du lancer (m) : ";
        cin >> yd ;
        tir = tir +1;
        cout<< "Vous avez tire:  " << tir << " fleches" << endl  ; 

        resultat_lancer_z = position_fleche_z(g, x, xd , v0, alpha_z, phi_y, zd) ;
        resultat_lancer_y = position_fleche_y(x, xd , phi_y, yd);
       
        r = sqrt((resultat_lancer_z*resultat_lancer_z)+ (resultat_lancer_y* resultat_lancer_y));
        teta = 
    
    }while ( v0 >0) ;
  cout << "Veuillez choisir une vitesse initial positive;

    


      
