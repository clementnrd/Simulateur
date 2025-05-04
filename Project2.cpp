#include <iostream>
#include <cmath>
#include "calcul_lancer.h"
#include "calcul_score.h"
#include "regle_lancer.h"

#define MAX_JOUEURS 4
#define NB_LANCERS   3

using namespace std;

int main() {

    double x_tir, y_tir, z_tir, x_cible, y_cible, z_cible, v0, alpha, phi,t ,y_abs,z_abs, y_rel, z_rel, rho, reste;
    int joueurs, vainqueur, tour_score, pts;
    int scores[MAX_JOUEURS];
    const double g = 9.81;
    bool fini, double_out;

    regle_lancer();
    
    
    cout << "Combien de joueurs (1 / 4) ? ";
    cin >> joueurs;
    if (joueurs < 1)
    {
        joueurs = 1;
    }
    if (joueurs > 4)
    {
        joueurs = 4;
    }
    
    for (int i = 0; i < joueurs; i++)
    {
        scores[i] = 501;
    }
     
     fini = false;
     vainqueur = -1;

    while (!fini) {
        for (int j = 0; j < joueurs; j++)
        {
            cout << "--- Joueur " << (j + 1) << " (reste " << scores[j] << " pts) ---" << endl;
            
            tour_score = 0;
            double_out = false;

            for (int l = 0; l < NB_LANCERS; l++) {
                cout << "Lancer " << (l + 1) << ":" << endl;

                

                cout << "Position tireur X en m: ";
                cin >> x_tir;
                cout << "Position tireur Y en m: ";
                cin >> y_tir;
                cout << "Position tireur Z en m: ";
                cin>> z_tir;
                cout << "Position cible  X en m: ";
                cin >> x_cible;
                cout << "Position cible  Y en m: ";
                cin >> y_cible;
                cout << "Position cible  Z en m: ";
                cin >> z_cible;
                cout << "Vitesse initiale (m/s): ";
                cin >> v0;
                cout << "Angle elevation Alpha  (degres): ";
                cin >> alpha;
                cout << "Angle lateral Phi  (degres): ";
                cin >> phi;

                
                t = calcul_temps_vol(x_cible, x_tir, v0, alpha, phi);
                y_abs = position_fleche_y(x_cible, x_tir, phi, y_tir);
                z_abs = position_fleche_z(g, x_cible, x_tir, v0, alpha, phi, z_tir);

                
                y_rel = (y_abs - y_cible) * 1000.0;
                z_rel = (z_abs - z_cible) * 1000.0;
                rho = sqrt(z_rel * z_rel + y_rel * y_rel);

                
                pts = calculer_score(z_rel, y_rel);
                cout << "Impact relatif : Z=" << z_rel << " mm, Y=" << y_rel << " mm (rho=" << rho << " mm) -> " << pts << " pts" << endl;

                

                if (rho <= 6.35 || (rho >= 162.0 && rho <= 170.0))
                {
                    double_out = true;
                }
                reste = scores[j] - (tour_score + pts);
                
                if (reste < 0 || reste == 1) 
                {
                    cout << "Tour annule (score invalide)." << endl;
                    tour_score = 0;
                    break;
                }
                if (reste == 0) 
                {
                    if (double_out) 
                    {
                        tour_score += pts;
                        vainqueur = j;
                        fini = true;
                    }
                    else 
                    {
                        cout << "Fin invalide : doit finir par un double." << endl;
                        tour_score = 0;
                    }
                    break;
                }

                tour_score += pts;
            }

            scores[j] -= tour_score;
            cout << "Score joueur " << (j + 1) << " = " << scores[j] << " pts" << endl;
            if (fini) break;
        }
    }

    cout << " Le joueur " << (vainqueur + 1) << " a gagne ! " << endl;
    return 0;
}
