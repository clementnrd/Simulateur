#include <iostream>
#include "calcul_lancer.h"
#inculde "regle_lancer.h"


using namespace std ;
int main() {
    // Paramètres du projectile
    double v0, alpha, phi_y, x, z, y, xd, zd, yd, resultat_lancer_z, resultat_lancer_y, temps_vol, point, joueurs, joueurs_partie, tir ;
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
        cin >> alpha ;
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

        resultat_lancer_z =
        resultat_lancer_y = 
       
        }while ( v0 >0) ;
  cout << "Veuillez choisir une vitesse initial positive;

    

if( resultat_lancer_y < 0.3 ||  resultat_lancer_y > 1.52 || resultat_lancer_z <-0.61 || resulat_lancer_z >0.61)
{
    cout << "Vous navez pas toucher la cible, vous avez marquer 0 points"; 
    point = point +0;
}
else if (resulat_lancer_y < 0.36 &&   resultat_lancer_y < 1.46 && resultat_lancer_z >-0.55 && resulat_lancer_z <0.55)  
    cout << "Vous avez toucher la cible, vous avez marquer 1 points"; 
    point = point +1;
}
else if (resulat_lancer_y > 0.42 &&  resultat_lancer_y < 1.4 && resultat_lancer_z >-0.49 && resulat_lancer_z <0.49)  
    cout << "Vous avez toucher la cible, vous avez marquer 2 points"; 
    point = point +2;

else if (resulat_lancer_y > 0.48 &  resultat_lancer_y < 1.34 && resultat_lancer_z >-0.43 && resulat_lancer_z <0.43)  
    cout << "Vous avez toucher la cible, vous avez marquer 3 points"; 
    point = point + 3;
else if (resulat_lancer_y > 0.54 &&  resultat_lancer_y < 1.28 && resultat_lancer_z >-0.37 &&  resulat_lancer_z <0.37)  
    cout << "Vous avez toucher la cible, vous avez marquer 5 points"; 
    point = point +4;
else if (resulat_lancer_y > 0.6 &&  resultat_lancer_y < 1.22 && resultat_lancer_z >-0.31 && resulat_lancer_z <0.31)  
    cout << "Vous avez toucher la cible, vous avez marquer 5 points"; 
    point = point +5;
else if (resulat_lancer_y > 0.66 &&  resultat_lancer_y < 1.16 && resultat_lancer_z >-0.25 &&  resulat_lancer_z <0.25)  
    cout << "Vous avez toucher la cible, vous avez marquer 6 points"; 
    point = point +6;
else if (resulat_lancer_y > 0.72 &&  resultat_lancer_y <1.1  && resultat_lancer_z >-0.19 && resulat_lancer_z <0.19)  
    cout << "Vous avez toucher la cible, vous avez marquer 7 points"; 
    point = point +7;
else if (resulat_lancer_y > 0.78 &&  resultat_lancer_y <1.04 && resultat_lancer_z >-0.13 && resulat_lancer_z <0.13)  
    cout << "Vous avez toucher la cible, vous avez marquer 8 points"; 
    point = point +8;
else if (resulat_lancer_y > 0.84 &&  resultat_lancer_y <0.98 && resultat_lancer_z >-0.7 && resulat_lancer_z <0.7)  
    cout << "Vous avez toucher la cible, vous avez marquer 9 points"; 
    point = point +9;
else if (resulat_lancer_y > 0.9 &&  resultat_lancer_y <0.92 && resultat_lancer_z > && resulat_lancer_z <0.13)  
    cout << "Vous avez toucher la cible, vous avez marquer 1 points"; 
    point = point +8;

    return 0;
}
