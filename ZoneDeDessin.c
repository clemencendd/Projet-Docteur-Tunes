#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
#include "../../Documents/GfxLib/GfxLib.h"
#include "../../Documents/GfxLib/BmpLib.h"

#include "ZoneDeDessin.h"

#define LargeurFenetre 1200
#define HauteurFenetre 800

#define PtDonneesImageRGB DonneesImageRGB*
#define MAX 256

Coordonnees initialiseCoordonnees(Coordonnees c){

	c.age = 0;
	
	return c;
}

int ClicDrapeaux(int choix){

	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=350 && x<=598 && y>=300 && y<=364){
	
		choix = 1;
		
	}
	
	
	else if (x>=750 && x<=998 && y>=300 && y<=364){
	
		choix = 2;
	
	}
	
	return choix;

}

int ClicWelcome(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1050 && x<=1200 && y>=700 && y<=800){
	
		choix = 3;
		
	}
	
	
	else if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 0;
		
	}
	
	return choix;
	
}

int ClicBienvenue(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=960 && x<=1200 && y>=700 && y<=800){
	
		choix = 4;
		
	}
	
	
	else if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 0;
	
	}
	
	return choix;
	
}

int ClicContactInformation(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1050 && x<=1200 && y>=700 && y<=800){
  	
		choix = 5;
		
	}
	
	
	else if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 1;
	
	}
	
	return choix;
	
}

int ClicCoordonnees(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=960 && x<=1200 && y>=700 && y<=800){
	
		choix = 6;
		
	}
	
	
	else if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 2;
	
	}
	
	return choix;
	
}

int ClicMenuAnglais(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 3;
	
	}
	
	else if (x>=900 && x<=1100 && y>=380 && y<=530){
	
		choix = 9;
	
	}
	
	else if (x>=450 && x<=550 && y>=390 && y<=500){
	
		choix = 8;
	
	}
	
	else if (x>=100 && x<=300 && y>=390 && y<=500){
	
		choix = 11;
	
	}
	
	else if (x>=700 && x<=900 && y>=390 && y<=500){
	
		choix = 13;
	
	}

	return choix;
	
}


int ClicMenuFrancais(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 4;
	
	}
	
	else if (x>=900 && x<=1100 && y>=380 && y<=530){
	
		choix = 10;
	
	}
	
	else if (x>=450 && x<=550 && y>=390 && y<=500){
	
		choix = 7;
	
	}

	else if (x>=100 && x<=300 && y>=390 && y<=500){
	
		choix = 12;
	
	}
	
	else if (x>=700 && x<=900 && y>=390 && y<=500){
	
		choix = 14;
	
	}


	return choix;
	
}

int ClicSynchronisation(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 6;
	
	}
	
	else if (x>=380 && x<=720 && y>=170 && y<=620){
	
		choix = 21;
	
	}
	
	else if (x>=490 && x<=510 && y>=50 && y<=70){
	
		choix = 32;
	
	}
	
	return choix;
	
}

int InitialiseJeuCouleur(int temps, int etape ){
	
	temps=0;
	etape=0;
	
}

int ClicSynchronization(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 5;
	
	}
	
		else if (x>=380 && x<=720 && y>=170 && y<=620){
	
		choix = 22;
	
	}

	else if (x>=490 && x<=510 && y>=50 && y<=70){
	
		choix = 33;
	
	}
	
	return choix;
	
}

int ClicVitesseAnalyse(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 6;
	
	}
		else if (x>=815 && x<=1140 && y>=170 && y<=620){
	
		choix = 15;
	
	}
	
	else if (x>=435 && x<=760 && y>=170 && y<=620){
	
		choix = 17;
		
	}
	
		else if (x>=40 && x<=380 && y>=170 && y<=620){
	
		choix = 19;
	
	}
	
	else if (x>=490 && x<=510 && y>=50 && y<=70){
	
		choix = 30;
	
	}
	
	return choix;
	
}


int ClicSpeedAnalysis(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 5;
	
	}
	
	else if (x>=815 && x<=1140 && y>=170 && y<=620){
	
		choix = 16;
	
	}
	
	else if (x>=435 && x<=760 && y>=170 && y<=620){
	
		choix = 18;
		
	}
	
	else if (x>=40 && x<=380 && y>=170 && y<=620){
	
		choix = 20;
	
	}
	
	else if (x>=490 && x<=510 && y>=50 && y<=70){
	
		choix = 31;
	
	}
	
	return choix;
	
}

int ClicMemory(int choix){


	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 5;
	
	}
	
	else if (x>=680 && x<=1020 && y>=170 && y<=620){
	
		choix = 28;
	
	}
	
	else if (x>=180 && x<=520 && y>=170 && y<=620){
	
		choix = 26;
	
	}
	
	else if (x>=490 && x<=510 && y>=50 && y<=70){
	
		choix = 37;
	
	}
	
	
	
	return choix;
	
}

int ClicMemoire(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 6;
	
	}
	
	else if (x>=680 && x<=1020 && y>=170 && y<=620){
	
		choix = 27;
	
	}
	
	else if (x>=180 && x<=520 && y>=170 && y<=620){
	
		choix = 25;
	
	}
	
	else if (x>=490 && x<=510 && y>=50 && y<=70){
	
		choix = 36;
	
	}
	
	return choix;
	
}


int ClicMobility(int choix){


	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 5;
	
	}
	
	else if (x>=515 && x<=840 && y>=170 && y<=620){
	
		choix = 24;
	
	}
	
	else if (x>=490 && x<=510 && y>=50 && y<=70){
	
		choix = 35;
	
	}
	
	return choix;
	
}

int ClicMobilite(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 6;
	
	}
	
	else if (x>=515 && x<=840 && y>=170 && y<=620){
	
		choix = 23;
	
	}
	
	else if (x>=490 && x<=510 && y>=50 && y<=70){
	
		choix = 34;
	
	}
	
	return choix;
	
}

int ClicHelpThePrincess(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 13;
	
	}
	
	return choix;
}

int ClicAideLaPrincesse(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 14;
	
	}
	
	return choix;
}

int ClicSudokunesFR(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 10;
	
	}
	
	return choix;
}


int ClicSudokunesEN(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 9;
	
	}
	
	return choix;
}

int ClicAttrapeMarmotte(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 10;
	
	}
	
	return choix;
}


int ClicCatchGroundhog(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 9;
	
	}
	
	return choix;
}


int ClicCharlie(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 10;
	
	}
	
	return choix;
}


int ClicCharly(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 9;
	
	}
	
	return choix;
}

int ClicCouleur(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 7;
	
	}
	
	return choix;
}


int ClicColor(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 8;
	
	}
	
	return choix;
}

int ClicCartoonFR(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 12;
	
	}
	
	return choix;
}


int ClicCartoonEN(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 11;
	
	}
	
	return choix;
}

int ClicVille(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 12;
	
	}
	
	return choix;
}


int ClicCity(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 11;
	
	}
	
	return choix;
}

int ClicResultatSynchro(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 7;
	
	}
	
	return choix;
}


int ClicResultSynchro(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 8;
	
	}
	
	return choix;
}

int ClicResultatMob(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 14;
	
	}
	
	return choix;
}


int ClicResultMob(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 13;
	
	}
	
	return choix;
}

int ClicResultatMem(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 12;
	
	}
	
	return choix;
}


int ClicResultMem(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 11;
	
	}
	
	return choix;
}

int ClicResultatVitesse(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 10;
	
	}
	
	return choix;
}


int ClicResultSpeed(int choix){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if (x>=1120 && x<=1200 && y>=20 && y<=100){
	
		choix = 9;
	
	}
	
	return choix;
}

void fichierCoordonnees (FILE* fichier, Coordonnees c){
	
	fichier = fopen("coordonnees.txt","w+");
	fprintf(fichier,"%s \n",c.nom);
	fprintf(fichier,"%s \n",c.prenom);
	fprintf(fichier,"%d \n",c.age);
	fclose(fichier);
	
}

void JeuCouleur1(){
	
	couleurCourante(255,0,0);
	rectangle(200, 700, 500, 400);
	couleurCourante(0, 0, 255);
	triangle(350, 690, 210, 410, 490, 410);
	couleurCourante( 0, 0, 0);
	afficheChaine("R O U G E", 20, 280, 480);
	couleurCourante( 0, 0, 0);
	afficheChaine("De quel couleur est", 50, 600, 600);
	afficheChaine("le carre ?", 50, 730 , 500);

 }
 
int GereClicJeuCouleur1(int etape, int clic){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if ((x>=500 && x<=540 && y>=200 && y<=240) && etape == 1 ){
	
		clic = 2;	
	
	}
	
	return clic;
	
}
 
void JeuCouleur2(){	

	couleurCourante( 0, 0, 255);	
	rectangle(100, 700, 500, 400);
	couleurCourante(0,255,0);
	epaisseurDeTrait(200.0);
	point(300, 550);
	epaisseurDeTrait(1.0);
	couleurCourante(255,0,0);
	afficheChaine("B L E U", 20, 250, 540);
	couleurCourante(0,0,0);
	afficheChaine("De quel couleur est", 50, 600, 600);
	afficheChaine("l'ecriture ?", 50, 710 , 500);	
	
}

int GereClicJeuCouleur2(int etape, int clic){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if ((x>=600 && x<=640 && y>=200 && y<=240) && etape == 2 ){
	
		clic = 3;	
	
	}
	
	return clic;
	
}

void JeuCouleur3(){
	
	epaisseurDeTrait(1.0);
	couleurCourante( 255, 0, 0);
	epaisseurDeTrait(800.0);
	point(300, 550);
	couleurCourante(0,255,0);
	epaisseurDeTrait(200.0);
	point(300, 550);
	epaisseurDeTrait(1.0);
	couleurCourante(255,0,0);
	afficheChaine("J A U N E", 20, 230, 540);
	couleurCourante(0,0,0);
	afficheChaine("De quel couleur est", 50, 600, 600);
	afficheChaine("le deuxieme cercle ?", 50, 600 , 500);	
	
	
}

int GereClicJeuCouleur3(int etape, int clic){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if ((x>=700 && x<=740 && y>=200 && y<=240) && etape == 3 ){
	
		clic = 4;	
	
	}
	
	return clic;
	
}

void JeuCouleur4(){
	
	couleurCourante(0,0,255);
	rectangle(100,300,500,700);
	couleurCourante(255,0,0);
	rectangle(110,505,295,690);
	couleurCourante(0,255,0);
	rectangle(305,505,490,690);
	couleurCourante(255,0,0);
	rectangle(110,310,295,495);
	couleurCourante(0,255,0);
	rectangle(305,310,490,495);
	couleurCourante(0,255,0);
	afficheChaine("V E R T", 20, 140, 598);
	couleurCourante(0,0,255);
	afficheChaine("B L E U", 20, 335, 598);
	couleurCourante(0,255,0);
	afficheChaine("B L E U", 20, 140, 400);
	couleurCourante(0,0,255);
	afficheChaine("R O U G E", 20, 335, 400);
	couleurCourante(0,0,0);
	afficheChaine("De quelle couleur est le", 50, 600, 600);
	afficheChaine("carre en bas", 50, 610 , 500);
	afficheChaine("a gauche ?", 50, 620 , 400);                                     
	
}

int GereClicJeuCouleur4(int etape, int clic){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if ((x>=800 && x<=840 && y>=200 && y<=240) && etape == 4 ){
	
		clic = 5;	
	
	}
	
	return clic;
	
}

void JeuCouleur5(){
	
	couleurCourante(0,0,255);
	rectangle(100,300,500,700);
	couleurCourante(255,0,0);
	triangle(200,500,250,650,300,500);
	couleurCourante(0,255,0);
	triangle(350,350,400,500,450,350);
	couleurCourante(0,255,0);
	couleurCourante(0,0,0);
	afficheChaine("De quelle couleur est", 50, 600, 600);
	afficheChaine("le triangle du bas ?", 50, 610 , 500);

}

int GereClicJeuCouleur5(int etape, int clic){
	
	int x=0;
	int y=0;
	
	x=abscisseSouris();
	y=ordonneeSouris();
	
	if ((x>=900 && x<=940 && y>=200 && y<=240) && etape == 5 ){
	
		clic = 6;	
	
	}
	
	return clic;
	
}

