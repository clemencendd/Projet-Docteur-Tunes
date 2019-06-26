#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
#include "../../Documents/GfxLib/GfxLib.h"
#include "../../Documents/GfxLib/BmpLib.h"
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
sudo lancer(DonneesImageRGB *sudoku1, DonneesImageRGB *sudoku2, DonneesImageRGB *sudoku3, DonneesImageRGB *neutron, DonneesImageRGB *phineas, DonneesImageRGB *dexter, DonneesImageRGB *chrono , 
DonneesImageRGB *bande, sudo s, int temps,FILE* result);
sudo step(DonneesImageRGB *sudoku1, DonneesImageRGB *sudoku2, DonneesImageRGB *sudoku3, DonneesImageRGB *neutron, DonneesImageRGB *phineas, DonneesImageRGB *dexter, DonneesImageRGB *chrono ,
DonneesImageRGB *bande, sudo s, int temps,FILE* result);
void fichierScore (FILE* fichier,sudo s);
void affichage (char time[2],int temps, DonneesImageRGB *chrono);
void regle();

