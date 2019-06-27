#include <stdlib.h> // Pour pouvoir utiliser exit()
#include <stdio.h> // Pour pouvoir utiliser printf()
#include <time.h>//pour utiliser rand
#include <math.h> // Pour pouvoir utiliser sin() et cos()
#include "../LibraryISEN/GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "../LibraryISEN/BmpLib.h"
#define LargeurFenetre 1200
#define HauteurFenetre 800

typedef struct Variable{
int value;

int a0;
int a1;
int a2;
int a3;
int a4;
int a5;
int a6;
int a7;
int a8;
int a9;

int b0;
int b1;
int b2;
int b3;
int b4;
int b5;
int b6;
int b7;
int b8;
int b9;

int c0;
int c1;
int c2;
int c3;
int c4;
int c5;
int c6;
int c7;
int c8;
int c9;

int temps;
int etape;
}var;


var initVar(var l);
void afficheFond1(DonneesImageRGB *garfield1);
void afficheFond2(DonneesImageRGB *mario1);
void afficheFond3(DonneesImageRGB *titi1);
var general(DonneesImageRGB *lasagna,DonneesImageRGB *garfield,var l,char time[100],DonneesImageRGB *odie,DonneesImageRGB *peach,DonneesImageRGB *mario1,DonneesImageRGB *garfield1,DonneesImageRGB *mario,DonneesImageRGB *luigi,DonneesImageRGB *bugs,DonneesImageRGB *titi1,DonneesImageRGB *lola,DonneesImageRGB *bugs1,DonneesImageRGB *daffy,int r, char chaine[4],FILE* result);
void file(FILE* fichier,var l);
var clicT(var l,DonneesImageRGB *garfield,DonneesImageRGB *lasagna,DonneesImageRGB *luigi,DonneesImageRGB *mario,DonneesImageRGB *bugs,DonneesImageRGB *daffy);

var gereClicNiv1(var l,DonneesImageRGB *garfield ,DonneesImageRGB *lasagna);
void reafficheIm1(var l,DonneesImageRGB *garfield ,DonneesImageRGB *lasagna);

var gereClicNiv2(var l, DonneesImageRGB *luigi, DonneesImageRGB *mario);
void reafficheIm2(var l, DonneesImageRGB *luigi, DonneesImageRGB *mario);

var gereClicNiv3(var l, DonneesImageRGB *bugs, DonneesImageRGB *daffy);
void reafficheIm3(var l,DonneesImageRGB *bugs ,DonneesImageRGB *daffy);





