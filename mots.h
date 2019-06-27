#include <stdlib.h> // Pour pouvoir utiliser exit()
#include <stdio.h> // Pour pouvoir utiliser printf()
#include <math.h> // Pour pouvoir utiliser sin() et cos()
#include "../LibraryISEN/GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "../LibraryISEN/BmpLib.h"

#include "string.h"
#define LargeurFenetre 1200
#define HauteurFenetre 800
#define LIGNE 78


typedef struct MOTS{
	
	char mot[78][15];
	int elsa;
	int chef;
	int olly;
	int dory;
	int hans;
	int carl;
	int many;
	int buck;
	int fred;
	int anna;
	int belle;
	int cendrillon;
	int nemo;
	int aurore;
	int mickey;
	int answer;
	int pass;
	
	
	
	int score;
	}mots;
	

mots tabMots(mots m);

void affichageMots(mots m, int temps);

mots jeu(mots m,DonneesImageRGB *city, int temps, char chaine[2],int r, char chain[3], FILE* result);
mots init(mots m);
void score(FILE* fichier, mots m);
mots gereClic(mots m);
void resultat(FILE* result, int r,char chain[3]);
void affichageMotRepons();

