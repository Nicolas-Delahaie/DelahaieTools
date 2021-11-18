/**
 * @file fonctions_orphelines.h
 * @author N. DELAHAIE
 * @brief Entêtes des fonctions orphelines
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef FONCTIONS_ORPHELINES_h
#define FONCTIONS_ORPHELINES_h


//De : autre
void test();
/*Affiche toutes les couleurs*/


//De : N. DELAHAIE
/**
 * @brief Affiche tab sur forme de tableaux type morpion
 * 
 * @param tab 
 */
void afficheMorpion(char tab[3][3]);

/**
 * @brief Affiche une ligne en fonction du nombreCases
 * 
 * @param nombreCases 
 */
void afficherLigne(unsigned int nombreCases);

/**
 * @brief Affiche un tableau 2 dimensions composé de nombres dans un tableau visuel
 * 
 * @param tab 
 * @param LARGEUR 
 * @param LONGUEUR 
 */
void afficherTableauDeNombres(short int tab[LARGEUR][LONGUEUR], unsigned short int LARGEUR, unsigned short int LONGUEUR);

/**
 * @brief Affiche un tableau 2 dimensions composé de charactères dans un tableau visuel
 * 
 * @param tab 
 * @param LARGEUR 
 * @param LONGUEUR 
 */
void afficherTableauDeCharacteres(char tab[LARGEUR][LONGUEUR], unsigned short int LARGEUR, unsigned short int LONGUEUR);

/**
 * @brief Créé une liste composée de tailleListe nombres distincts compris entre min et max
 * 
 * @param liste 
 * @param tailleListe 
 * @param min 
 * @param max 
 */
void listeNombresAleatoiresDistincts(int liste[], unsigned int tailleListe, int min, int max);


#endif