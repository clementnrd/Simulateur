#include <iostream>
#include "CALCUL_LANCER.h" 
#include "REGLE_LANCER.h"
using namespace std;

int main() {
    float vitesse_initiale, angle, position_x_lanceur, position_z_lanceur, point;
    const int g = 9.81; 
    const int distance_cible = 2.37 ;  
    
    cout << "=== Simulateur de Tir Balistique ===\n";

do
  {
        cout << "Entrez la vitesse initiale du projectile (m/s) : "<< endl;
        cin >> vitesse_initiale;
        cout << "Entrez l'angle de tir (degrés) : " << endl ;
        cin >> angle_degre;
        cout << "Entrez la position x du lanceur (m) : " << endl;
        cin >> position_x_lanceur;
        cout << "Entrez la position z du lanceur (m) : " << endl ;
        cin >> position_z_lanceur ;
    
        cout << "Temps de vol de la flechette est de (s): " << calculer_temps_de_vol(vitesse_initiale, angle_radian, distance_cible);
        cout << "Le point d'impactacte de la flechette est de (m):" << calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g) ; 
      
         if (calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g) < 1.5573 )
        {
        cout << "Vous n avez pas touche la cible" << endl;
        cout << "Vous avez marque 0 points" << endl ; 
        point = point + 0;
        }
        if (calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g) >= 1.5573 )
        {
        cout << "Vous avez touche la cible" << endl ; 
        cout << "Vous avez marque 3 points" << endl ; 
        point = point + 6 ; 
        }
        else if (calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g) >= 1.5653)
        {
        cout << "Vous avez touche la cible " <<endl  ;
        cout << " Vous avez marque 3 points  " << endl  ; 
        point = point +3 ;
        }
        else if ( calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g)>= 1.6199)
        {
        cout << "Vous avez touche la cible " <<endl  ;
        cout << Vous avez marque 9 points " << endl ;
        point = point  + 9 ; 
        }
        else if ( calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g)>= 1.6279)
        {
        cout << "Vous avez touche la cible " <<endl  ;
        cout << Vous avez marque 3 points " << endl ;
        point = point  + 3 ;   
        }
        else if ( calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g)>= 1.6955)
        { 
        cout << "Vous avez touche la cible " <<endl  ;
        cout << Vous avez marque 25 points " << endl ;
        point = point  + 25 ;
        }
        else if ( calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g)>= 1.7146)
        {
        cout << "Vous avez touche la cible " <<endl  ;
        cout << Vous avez marque 50 points " << endl ;
        point = point  + 50 ;    
        }
       else if ( calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g)>= 1.74)
        {
        cout << "Vous avez touche la cible " <<endl  ;
        cout << Vous avez marque 50 points " << endl ;
        point = point  + 50 ;    
        }
        else if ( calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g)>= 1.7691)
        {
        cout << "Vous avez touche la cible " <<endl  ;
        cout << Vous avez marque 25 points " << endl ;
        point = point  + 25 ;    
        }
         else if ( calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g)>= 1.8376)
        {
        cout << "Vous avez touche la cible " <<endl  ;
        cout << Vous avez marque 25 points " << endl ;
        point = point  + 3 ;    
        }
        else if ( calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g)>= 1.8527)
        {
        cout << "Vous avez touche la cible " <<endl  ;
        cout << Vous avez marque 25 points " << endl ;
        point = point  + 9 ;
        }
        else if ( calculer_hauteur_impact(position_x_lanceur, position_z_lanceur ,vitesse_initiale, angle_radian, distance_cible, g)>= 1.7691)
        {
        cout << "Vous avez touche la cible " <<endl  ;
        cout << Vous avez marque 25 points " << endl ;
        point = point  + 25 ;    
        
        
 
            
  
  
  
  }while(vitesse_initiale <= 0 || position_x_lanceur <= 0 || position_z_lanceur <=0 ) || point >= 50 );
 
    double angle_radian = angle_degre * M_PI / 180.0; 

   
cout << "Merci d'avoir utilisé le simulateur !\n";   
return 0;
}


