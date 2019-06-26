#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
#include "../../Documents/GfxLib/GfxLib.h"
#include "../../Documents/GfxLib/BmpLib.h"

#include "Coordonnees.h"

#define LargeurFenetre 1200
#define HauteurFenetre 800
#define MAX 256
#define PtDonneesImageRGB DonneesImageRGB*


int ClicDrapeaux(int choix);
int ClicWelcome(int choix);
int ClicBienvenue(int choix);
int ClicContactInformation(int choix);
int ClicCoordonnees(int choix);
int ClicMenuAnglais(int choix);
int ClicMenuFrancais(int choix);
int ClicSynchronisation(int choix);
int ClicSynchronization(int choix);
int ClicVitesseAnalyse(int choix);
int ClicSpeedAnalysis(int choix);
int ClicMemoire(int choix);
int ClicMemory(int choix);
int ClicMobility(int choix);
int ClicMobilite(int choix);
Coordonnees initialiseCoordonnees(Coordonnees c);
int ClicHelpThePrincess(int choix);
int ClicAideLaPrincesse(int choix);
int ClicSudokunesFR(int choix);
int ClicSudokunesEN(int choix);
int ClicAttrapeMarmotte(int choix);
int ClicCatchGroundhog(int choix);
int ClicCharlie(int choix);
int ClicCharly(int choix);
int ClicCouleur(int choix);
int ClicColor(int choix);
int ClicCartoonFR(int choix);
int ClicCartoonEN(int choix);
int ClicVille(int choix);
int ClicCity(int choix);
int ClicResultMem(int choix);
int ClicResultatMem(int choix);
int ClicResultMob(int choix);
int ClicResultSpeed(int choix);
int ClicResultSynchro(int choix);
int ClicResultatMob(int choix);
int ClicResultatSynchro(int choix);
int ClicResultatVitesse(int choix);
void fichierCoordonnees (FILE* fichier, Coordonnees c);
int GereClicJeuCouleur1(int etape, int clic);
int GereClicJeuCouleur2(int etape, int clic);
int GereClicJeuCouleur3(int etape, int clic);
int GereClicJeuCouleur4(int etape, int clic);
int GereClicJeuCouleur5(int etape, int clic);
void JeuCouleur1();
void JeuCouleur2();
void JeuCouleur3();
void JeuCouleur4();
void JeuCouleur5();
