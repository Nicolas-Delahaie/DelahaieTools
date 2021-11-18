/**
 * @file fonctions_orphelines.cpp
 * @author N. DELAHAIE
 * @brief Fonctions et procédures orphelines, utilisables pour d'autres programmes
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <windows.h>
#include "fonctions_orphelines.h"
#include "game-tools.h"
using namespace std;

const unsigned short int LARGEUR = 2;   //A modifier en fonction de la taille du tableau à afficher
const unsigned short int LONGUEUR = 2;  //A modifier en fonction de la taille du tableau à afficher


int main()
{
    test();   

    return 911;
}


// ------------------- P R O G R A M M E S ---------------------
void test()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // you can loop k higher to see more color choices
    for(int k = 1; k < 255; k++)
    {
    // pick the colorattribute k you want
    SetConsoleTextAttribute(hConsole, WORD(k));
    cout << k << " I want to be nice today!" << endl;
    }
}


// ---------------- C R E E S   P A R   N I C O L A S ----------------
void afficheMorpion(char tab[3][3])
{
    for (unsigned short int ligne = 0; ligne < 5 ; ligne++)
    {
        if (ligne % 2 != 0 )            {cout << endl << "---|---|---" << endl;}
                
        else
        {
            for (unsigned short int colonne = 0; colonne < 5 ; colonne++)
            {
                if (colonne % 2 == 0)   {cout << " " << tab[ligne/2][colonne/2] << " ";}
                else                    {cout << "|";}
            }
        }
    }
}

void afficherLigne(unsigned int nombreCases)
{
    cout << endl << "+";
    for (unsigned int i = 0; i < nombreCases; i++)
    {
        cout << "---+";
    }
    cout << endl;    
}

void afficherTableauDeNombres(short int tab[LARGEUR][LONGUEUR], unsigned short int LARGEUR, unsigned short int LONGUEUR)
{
    for (unsigned short int ligne = 0 ; ligne < LONGUEUR +1; ligne++)
    {
        if (ligne == 0) //Pour la première ligne
        {
            afficherLigne(LARGEUR+1);
            cout << "|   |";
            for (unsigned int i = 0 ; i < LARGEUR ; i++)
            {
                cout << " " << char(65+i) << " |";
            }
        }
        else
        {
            for (unsigned short int colonne = 0 ; colonne < LARGEUR +1; colonne++)
            {
                if (colonne == 0) //Pour la première colonne
                {
                    if (ligne < 10) {cout << "| " << double(ligne) << " |";}
                    else            {cout << "| " << double(ligne) << "|" ;}
                }
                else 
                {
                    if (tab[ligne-1][colonne-1] < 0)    {cout << " " <<  tab[ligne-1][colonne-1] << "|";}
                    else                                {cout << " " <<  tab[ligne-1][colonne-1] << " |";}
                }
            }
        }
        afficherLigne(LARGEUR+1);
    }
}

void afficherTableauDeCharacteres(char tab[LARGEUR][LONGUEUR], unsigned short int LARGEUR, unsigned short int LONGUEUR)
{
    for (unsigned short int ligne = 0 ; ligne < LONGUEUR +1; ligne++)
    {
        if (ligne == 0) //Pour la première ligne
        {
            afficherLigne(LARGEUR+1);
            cout << "|   |";
            for (unsigned int i = 0 ; i < LARGEUR ; i++)
            {
                cout << " " << char(65+i) << " |";
            }
        }
        else
        {
            for (unsigned short int colonne = 0 ; colonne < LARGEUR +1; colonne++)
            {
                if (colonne == 0) //Pour la première colonne
                {
                    if (ligne < 10) {cout << "| " << double(ligne) << " |";}
                    else            {cout << "| " << double(ligne) << "|" ;}
                }
                else 
                {
                    cout << " " <<  tab[ligne-1][colonne-1] << " |";
                }
            }
        }
        afficherLigne(LARGEUR+1);
    }
}

void listeNombresAleatoiresDistincts(int liste[], unsigned int tailleListe, int min, int max)
{
    unsigned int i;
    int nombreAleatoire;
    bool dejaPresent;


    if ( (max-min) +1 < static_cast<int>(tailleListe))
    {
        cout << "Quantite de nombres aleatoires disctincts demandee trop elevee" << endl;
    }
    else if (max < min)
    {
        cout << "Erreur de saisie des bornes" << endl;
    }
    else
    {
        i = 0;
        while (i < tailleListe)
        {
            nombreAleatoire = random (min, max);
            dejaPresent = false;
            for (unsigned int n = 0 ; n < i ; n++)
            {
                if (nombreAleatoire == liste[n])
                {
                    dejaPresent = true;
                }
            }

            if (dejaPresent == false)
            {
                liste[i] = nombreAleatoire;
                i++;
            }      
        }
    }
}

