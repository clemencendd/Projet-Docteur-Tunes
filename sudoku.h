#include <stdlib.h> // Pour pouvoir utiliser exit()
#include <stdio.h> // Pour pouvoir utiliser printf()
#include <math.h> // Pour pouvoir utiliser sin() et cos()
#include "../../LibraryISEN/GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "../../LibraryISEN/BmpLib.h"

#include "string.h"
#define LargeurFenetre 1200
#define HauteurFenetre 800


typedef struct Sudo{
	int answer;
	int etape;
	int o;
	int r;
	char chaine[4];
}sudo;


sudo gereClavierReponse (sudo s);
sudo etape(DonneesImageRGB *sudoku1, DonneesImageRGB *sudoku2, DonneesImageRGB *sudoku3, DonneesImageRGB *neutron, DonneesImageRGB *phineas, DonneesImageRGB *dexter, DonneesImageRGB *chrono , 
DonneesImageRGB *bande, sudo s, int temps,FILE* result);
sudo step(DonneesImageRGB *sudoku1, DonneesImageRGB *sudoku2, DonneesImageRGB *sudoku3, DonneesImageRGB *neutron, DonneesImageRGB *phineas, DonneesImageRGB *dexter, DonneesImageRGB *chrono ,
DonneesImageRGB *bande, sudo s, int temps,FILE* result);
void fichierScore (FILE* fichier,sudo s);
void affichage (char time[2],int temps, DonneesImageRGB *chrono);
void regle();

