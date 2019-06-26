#include <stdlib.h> 
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "../../Documents/GfxLib/GfxLib.h"
#include "../../Documents/GfxLib/BmpLib.h"

#include "ZoneDeDessin.h"
#include "sudoku.h"

#define LargeurFenetre 1200
#define HauteurFenetre 800

void gestionEvenement(EvenementGfx evenement);

int main(int argc, char **argv)
{
	initialiseGfx(argc, argv);
	
	prepareFenetreGraphique("GfxLib", LargeurFenetre, HauteurFenetre);
	
	/* Lance la boucle qui aiguille les evenements sur la fonction gestionEvenement ci-apres,
		qui elle-meme utilise fonctionAffichage ci-dessous */
	lanceBoucleEvenements();
	
	return 0;
}



void gestionEvenement(EvenementGfx evenement)
{
	static bool pleinEcran = false; // Pour savoir si on est en mode plein ecran ou pas
	
	static DonneesImageRGB *anglais = NULL; // L'image a afficher au centre de l'ecran
	static DonneesImageRGB *fond = NULL;
	static DonneesImageRGB *francais = NULL;
	static DonneesImageRGB *porte = NULL;
	static DonneesImageRGB *nom = NULL;
	static DonneesImageRGB *prenom = NULL;
	static DonneesImageRGB *age = NULL;
	static DonneesImageRGB *memoire = NULL;
	static DonneesImageRGB *synchronisation = NULL;
	static DonneesImageRGB *mobilite = NULL;
	static DonneesImageRGB *rapidite = NULL;
	static DonneesImageRGB *pitch = NULL;
	static DonneesImageRGB *sudoku = NULL;
	static DonneesImageRGB *marmotte = NULL;
	static DonneesImageRGB *memory = NULL;
	static DonneesImageRGB *charly = NULL;
	static DonneesImageRGB *mot = NULL;
	static DonneesImageRGB *horloge = NULL;
	static int choix=0;
	static int etape=0;
	static int clic=0;
	static int bloqueCoordonnees = 0;
	static char txt[20];
	static Coordonnees c;
	static FILE* fichier;
	static char time[20];
	static int delay;
	static int temps;

	static DonneesImageRGB *sudoku1 = NULL; 
	static DonneesImageRGB *sudoku2 = NULL; 
	static DonneesImageRGB *sudoku3 = NULL; 
	static DonneesImageRGB *neutron = NULL; 
	static DonneesImageRGB *phineas = NULL; 
	static DonneesImageRGB *dexter = NULL; 
	static DonneesImageRGB *chrono = NULL; 
	static DonneesImageRGB *bande = NULL; 
	static sudo s;
	FILE* result = NULL;

	switch (evenement)
	{
		case Initialisation:
		
			demandeTemporisation(20);
			
			anglais = lisBMPRGB("./anglais.bmp");
			fond = lisBMPRGB("./fond.bmp");
			francais = lisBMPRGB("./francais.bmp");
			porte = lisBMPRGB("./porte.bmp");
			nom = lisBMPRGB("./nom.bmp");
			prenom = lisBMPRGB("./prenom.bmp");
			age = lisBMPRGB("./age.bmp");
			memoire = lisBMPRGB("./memoire.bmp");
			synchronisation = lisBMPRGB("./synchronisation.bmp");
			mobilite = lisBMPRGB("./mobilite.bmp");
			rapidite = lisBMPRGB("./rapidite.bmp");
			pitch = lisBMPRGB("./pitch.bmp");
			sudoku = lisBMPRGB("./sudoku.bmp");
			marmotte = lisBMPRGB("./marmotte.bmp");
			memory = lisBMPRGB("./memory.bmp");
			charly = lisBMPRGB("./charly.bmp");
			mot = lisBMPRGB("./mot.bmp");
			horloge = lisBMPRGB("./horloge.bmp");
			c = initialiseCoordonnees(c);
			
			sudoku1 = lisBMPRGB("./sudoku1.bmp");
			sudoku2 = lisBMPRGB("./sudoku2.bmp");
			sudoku3 = lisBMPRGB("./sudoku3.bmp");
			neutron = lisBMPRGB("./neutron.bmp");
			phineas = lisBMPRGB("./phineas.bmp");
			dexter = lisBMPRGB("./dexter.bmp");
			chrono = lisBMPRGB("./chrono.bmp");
			bande = lisBMPRGB("./bande.bmp");
			
			break;
		
		case Temporisation:
		
			rafraichisFenetre();
			
			// strlen : renvoie la taille d'une chaîne de caractères
			if(bloqueCoordonnees == 1 && (strlen(c.nom) == 0 || strlen(c.prenom) == 0 || c.age <= 0)) {
				switch(choix){
					
					case 3:
						
						printf("What is your name? \n");
						scanf("%s",c.nom);
						printf("What is your firstname? \n");
						scanf("%s",c.prenom);
						printf("How old are you? \n");
						scanf("%d",&c.age);
						fichierCoordonnees (fichier, c);
					
					break;
					
					
					case 4:
						
						printf("Quel est votre nom? \n");
						scanf("%s",c.nom);
						printf("Quel est votre prenom? \n");
						scanf("%s",c.prenom);
						printf("Quel est votre age? \n");
						scanf("%d",&c.age);
						fichierCoordonnees (fichier, c);
			
					break;
					
				}
				
				bloqueCoordonnees = 0;
			}
			
			
				delay++;
			
			if (delay==45){
				
				temps++;
				delay=0;
			}
		
			break;
			
		case Affichage:
			
			// On part d'un fond d'ecran blanc
			effaceFenetre (255, 255, 255);
			
			switch(choix){
			
				case 0:
					temps=0;
					effaceFenetre( 240, 255, 255);
					couleurCourante( 15, 5, 107);
					epaisseurDeTrait(2);
					afficheChaine("C H O I S I R  L A  L A N G U E", 40, 150, 490);
					afficheChaine("C H O O S E  T H E  L A N G U A G E", 40, 50, 600);
					ecrisImage(350, 300 , anglais->largeurImage, anglais->hauteurImage, anglais->donneesRGB);
					ecrisImage(750, 300, francais->largeurImage, francais->hauteurImage, francais->donneesRGB);
						
					break;
					
				case 1:
					temps=0;
					couleurCourante(250,240,230);
					rectangle(460, 300, 1150, 600);
					couleurCourante(223, 105, 20);
					afficheChaine("W E L C O M E  T O", 35, 550, 550);
					afficheChaine("T H E", 35, 750, 450);
					afficheChaine("D O C T O R  T U N E S", 35, 480, 350);
					afficheChaine("N e x t", 20, 1070, 750);
					ecrisImage(10, 230, fond->largeurImage, fond->hauteurImage, fond->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
					
					break;

				case 2:
					temps=0;
					couleurCourante(250,240,230);
					rectangle(460, 300, 1150, 600);
					couleurCourante(223, 105, 20);
					afficheChaine("B I E N V E N U E", 35, 590, 550);
					afficheChaine("C H E Z  L E", 35, 650, 450);
					afficheChaine("D O C T E U R  T U N E S", 35, 480, 350);
					afficheChaine("S u i v a n t", 20, 970, 750);
					ecrisImage(10, 230, fond->largeurImage, fond->hauteurImage, fond->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
						
					break;
					
				case 3:
				    temps=0;
					couleurCourante( 239, 239, 239);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("C O N T A C T  I N F O R M A T I O N :", 40, 50, 600);
					couleurCourante(132, 132, 132);
					afficheChaine("N A M E :", 40, 150, 400);
					afficheChaine(c.nom, 30,  500, 400);
					afficheChaine("F I R S T N A M E :", 40, 150, 300);
					afficheChaine(c.prenom, 30,  800, 300);
					afficheChaine("A G E :", 40, 150, 200);
					sprintf(txt, "%d", c.age);
					afficheChaine(txt,30,400,200);
					afficheChaine("N e x t", 20, 1070, 750);
					ecrisImage(50, 380 , nom->largeurImage, nom->hauteurImage, nom->donneesRGB);
					ecrisImage(50, 280, prenom->largeurImage, prenom->hauteurImage, prenom->donneesRGB);
					ecrisImage(50, 180, age->largeurImage, age->hauteurImage, age->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
			
					bloqueCoordonnees = 1;
					
					break;
						
				case 4 :
					temps=0;
					couleurCourante( 239, 239, 239);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("C O O R D O N N E E S :", 40, 250, 600);
					couleurCourante(132, 132, 132);
					afficheChaine("N O M :", 40, 150, 400);
					afficheChaine(c.nom, 30,  400, 400);
					afficheChaine("P R E N O M :", 40, 150, 300);
					afficheChaine(c.prenom, 30,  600, 300);
					afficheChaine("A G E :", 40, 150, 200);
					sprintf(txt, "%d", c.age);
					afficheChaine(txt,30,400,200);
					afficheChaine("S u i v a n t", 20, 970, 750);
					ecrisImage(50, 380 , nom->largeurImage, nom->hauteurImage, nom->donneesRGB);
					ecrisImage(50, 280, prenom->largeurImage, prenom->hauteurImage, prenom->donneesRGB);
					ecrisImage(50, 180, age->largeurImage, age->hauteurImage, age->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
			
					bloqueCoordonnees = 1;
			
					break;
					
				case 5 :
					temps=0;
					effaceFenetre( 255, 255, 255);
					couleurCourante(116,208,241);
					rectangle(0, 280, 1200, 330);
					couleurCourante( 116, 208, 241);
					afficheChaine("C H O O S E  A N  A P T I T U D E", 40, 80, 650);
					couleurCourante(255,255,255);
					ecrisImage(120, 390, memoire->largeurImage, memoire->hauteurImage, memoire->donneesRGB);
					afficheChaine("M e m o r y", 15, 100, 300);
					ecrisImage(420, 390, synchronisation->largeurImage, synchronisation->hauteurImage, synchronisation->donneesRGB);
					afficheChaine("S y n c h r o n i z a t i o n", 15, 310, 300);
					ecrisImage(710, 390, mobilite->largeurImage, mobilite->hauteurImage, mobilite->donneesRGB);
					afficheChaine("M o b i l i t y", 15, 660, 300);
					ecrisImage(970, 390, rapidite->largeurImage, rapidite->hauteurImage, rapidite->donneesRGB);
					afficheChaine("S p e e d  a n a l y s i s", 15, 860, 300);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
					
					break;
					
				case 6 :
					temps=0;
					effaceFenetre( 255, 255, 255);
					couleurCourante(116,208,241);
					rectangle(0, 280, 1200, 330);
					couleurCourante( 116, 208, 241);
					afficheChaine("C H O I S I R  U N E  A P T I T U D E", 40, 50, 650);
					couleurCourante(255,255,255);
					ecrisImage(120, 390, memoire->largeurImage, memoire->hauteurImage, memoire->donneesRGB);
					afficheChaine("M e m o i r e", 15, 100, 300);
					ecrisImage(420, 390, synchronisation->largeurImage, synchronisation->hauteurImage, synchronisation->donneesRGB);
					afficheChaine("S y n c h r o n i s a t i o n", 15, 310, 300);
					ecrisImage(710, 390, mobilite->largeurImage, mobilite->hauteurImage, mobilite->donneesRGB);
					afficheChaine("M o b i l i t e", 15, 660, 300);
					ecrisImage(970, 390, rapidite->largeurImage, rapidite->hauteurImage, rapidite->donneesRGB);
					afficheChaine("V i t e s s e  d ' a n a l y s e", 15, 860, 300);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
					
				break;
					
				case 7 :
					temps=0;
					epaisseurDeTrait(1.0);
					couleurCourante(116,208,241);
					rectangle(400, 600, 700, 300);
					couleurCourante(253, 108, 158);
					triangle(550, 590, 410, 310, 690, 310);
					couleurCourante( 129, 20, 88);
					afficheChaine("J A U N E", 20, 480, 380);
					afficheChaine("J E U D E  S Y N C H R O N I S A T I O N", 30, 120, 700);
					afficheChaine("Appuyer sur le bouton pour voir les resultats :", 15, 50, 50);
					epaisseurDeTrait(50.0);
					point(500, 60);
					epaisseurDeTrait(1.0);
					couleurCourante( 169, 234, 254);
					rectangle(400, 190, 700, 280);
					ligne( 380, 170, 720, 170);
					ligne( 380, 170, 380, 620);
					ligne( 720, 170, 720, 620);
					ligne( 380 , 620, 720, 620);
					couleurCourante( 15, 5, 107);
					afficheChaine("T R O U V E  L A", 20, 430, 250);
					afficheChaine("C O U L E U R ", 20, 450, 200);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
			
				break;
				
				case 8:
					temps=0;
					epaisseurDeTrait(1.0);
					couleurCourante(116,208,241);
					rectangle(400, 600, 700, 300);
					couleurCourante(253, 108, 158);
					triangle(550, 590, 410, 310, 690, 310);
					couleurCourante( 129, 20, 88);
					afficheChaine("Y E L L O W", 20, 470, 380);
					afficheChaine("S Y N C H R O N I Z A T I O N  G A M E", 30, 120, 700);
					afficheChaine("Press the buttom to see the results :", 15, 50, 50);
					epaisseurDeTrait(50.0);
					point(450, 60);
					epaisseurDeTrait(1.0);
					couleurCourante( 169, 234, 254);
					rectangle(400, 190, 700, 280);
					ligne( 380, 170, 720, 170);
					ligne( 380, 170, 380, 620);
					ligne( 720, 170, 720, 620);
					ligne( 380 , 620, 720, 620);
					couleurCourante( 15, 5, 107);
					afficheChaine("F I N D  T H E", 20, 440, 250);
					afficheChaine("C O L O R", 20, 470, 200);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
			
				break;
				
				case 9:
					temps=0;
					epaisseurDeTrait(1.0);
					couleurCourante( 173, 79, 9);
					afficheChaine("A N A L Y S I S  S P E E D  G A M E S", 30, 200, 700);
					afficheChaine("Press the buttom to see the results :", 15, 50, 50);
					epaisseurDeTrait(50.0);
					point(450, 60);
					epaisseurDeTrait(1.0);
					couleurCourante( 167, 103, 38);
					rectangle(60, 190, 360, 280);
					ligne( 40, 170, 380, 170);
					ligne( 40, 170, 40, 620);
					ligne( 380, 170, 380, 620);
					ligne( 40 , 620, 380, 620);
					couleurCourante( 136, 66, 29);
					afficheChaine("C A T C H  T H E", 20, 90, 250);
					afficheChaine("G R O U N H O G", 20, 100, 210);
					ecrisImage( 110, 350, marmotte->largeurImage, marmotte->hauteurImage, marmotte->donneesRGB);
					couleurCourante( 186, 186, 186);
					rectangle(835, 190 , 1120, 280);
					ligne( 815, 170, 1140, 170);
					ligne( 1140, 170, 1140, 620);
					ligne( 815, 620, 1140, 620);
					ligne( 815 , 620, 815, 170);
					couleurCourante( 96, 96, 96);
					afficheChaine("S U D O K '", 20, 890, 250);
					afficheChaine("U N E S", 20, 900, 210);
					ecrisImage(870, 350, sudoku->largeurImage, sudoku->hauteurImage, sudoku->donneesRGB);
					couleurCourante( 255, 228, 196);
					rectangle(455, 190 , 740, 280);
					ligne( 435, 170, 760, 170);
					ligne( 760, 170, 760, 620);
					ligne( 435, 620, 760, 620);
					ligne( 435 , 620, 435, 170);
					couleurCourante( 220, 20, 60);
					afficheChaine("W H E R E  I S", 20, 490, 250);
					afficheChaine("C H A R L Y ?", 20, 500, 210);
					ecrisImage(510, 350, charly->largeurImage, charly->hauteurImage, charly->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 10:
					temps=0;
					epaisseurDeTrait(1.0);
					couleurCourante( 173, 79, 9);
					afficheChaine("J E U X  D E  V I T E S S E  D ' A N A L Y S E", 30, 100, 700);
					afficheChaine("Appuyer sur le bouton pour voir les resultats :", 15, 50, 50);
					epaisseurDeTrait(50.0);
					point(500, 60);
					epaisseurDeTrait(1.0);
					couleurCourante( 167, 103, 38);
					rectangle(60, 190, 360, 280);
					ligne( 40, 170, 380, 170);
					ligne( 40, 170, 40, 620);
					ligne( 380, 170, 380, 620);
					ligne( 40 , 620, 380, 620);
					couleurCourante( 136, 66, 29);
					afficheChaine("A T T R A P E  L A", 20, 75, 250);
					afficheChaine("M A R M O T T E", 20, 100, 210);
					ecrisImage( 110, 350, marmotte->largeurImage, marmotte->hauteurImage, marmotte->donneesRGB);
					couleurCourante( 186, 186, 186);
					rectangle(835, 190 , 1120, 280);
					ligne( 815, 170, 1140, 170);
					ligne( 1140, 170, 1140, 620);
					ligne( 815, 620, 1140, 620);
					ligne( 815 , 620, 815, 170);
					couleurCourante( 96, 96, 96);
					afficheChaine("S U D O K '", 20, 890, 250);
					afficheChaine("U N E S", 20, 900, 210);
					ecrisImage(870, 350, sudoku->largeurImage, sudoku->hauteurImage, sudoku->donneesRGB);
					couleurCourante( 255, 228, 196);
					rectangle(455, 190 , 740, 280);
					ligne( 435, 170, 760, 170);
					ligne( 760, 170, 760, 620);
					ligne( 435, 620, 760, 620);
					ligne( 435 , 620, 435, 170);
					couleurCourante( 220, 20, 60);
					afficheChaine("O U  E S T", 20, 520, 250);
					afficheChaine("C H A R L I E ?", 20, 500, 210);
					ecrisImage(510, 350, charly->largeurImage, charly->hauteurImage, charly->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 11 : 
					temps=0;
					epaisseurDeTrait(1.0);
					couleurCourante( 9, 106, 9);
					afficheChaine("M E M O R Y  G A M E S", 30, 330, 700);
					afficheChaine("Press the buttom to see the results :", 15, 50, 50);
					epaisseurDeTrait(50.0);
					point(450, 60);
					epaisseurDeTrait(1.0);
					couleurCourante( 130, 196, 108);
					rectangle(200, 190, 500, 280);
					ligne( 180, 170, 520, 170);
					ligne( 180, 170, 180, 620);
					ligne( 520, 170, 520, 620);
					ligne( 180 , 620, 520, 620);
					couleurCourante( 9, 106, 9);
					afficheChaine(" C A R T O O N", 20, 240, 250);
					afficheChaine("M E M O R Y", 20, 260, 210);
					ecrisImage(250, 350, memory->largeurImage, memory->hauteurImage, memory->donneesRGB);
					couleurCourante( 250, 240, 197);
					rectangle(700, 190, 1000, 280);
					ligne( 680, 170, 1020, 170);
					ligne( 680, 170, 680, 620);
					ligne( 1020, 170, 1020, 620);
					ligne( 680 , 620, 1020, 620);
					couleurCourante( 204, 85, 0);
					afficheChaine("T U N E S", 20, 790, 250);
					afficheChaine("C I T Y", 20, 810, 210);
					ecrisImage(750, 350, mot->largeurImage, mot->hauteurImage, mot->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 12:
					temps=0;
					epaisseurDeTrait(1.0);
					couleurCourante( 9, 106, 9);
					afficheChaine("J E U X  D E  M E M O I R E", 30, 330, 700);
					afficheChaine("Appuyer sur le bouton pour voir les resultats :", 15, 50, 50);
					epaisseurDeTrait(50.0);
					point(500, 60);
					epaisseurDeTrait(1.0);
					couleurCourante( 130, 196, 108);
					rectangle(200, 190, 500, 280);
					ligne( 180, 170, 520, 170);
					ligne( 180, 170, 180, 620);
					ligne( 520, 170, 520, 620);
					ligne( 180 , 620, 520, 620);
					couleurCourante( 9, 106, 9);
					afficheChaine(" C A R T O O N", 20, 230, 250);
					afficheChaine("M E M O R Y", 20, 260, 210);
					ecrisImage(250, 350, memory->largeurImage, memory->hauteurImage, memory->donneesRGB);
					couleurCourante( 250, 240, 197);
					rectangle(700, 190, 1000, 280);
					ligne( 680, 170, 1020, 170);
					ligne( 680, 170, 680, 620);
					ligne( 1020, 170, 1020, 620);
					ligne( 680 , 620, 1020, 620);
					couleurCourante( 204, 85, 0);
					afficheChaine("V I L L E  D E S", 20, 740, 250);
					afficheChaine("T U N E S", 20, 790, 210);
					ecrisImage(750, 350, mot->largeurImage, mot->hauteurImage, mot->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				
				break;
				
				case 13:
					temps=0;
					epaisseurDeTrait(1.0);
					couleurCourante( 217, 1, 21);
					afficheChaine("M O B I L I T Y  G A M E", 30, 330, 700);
					afficheChaine("Press the buttom to see the results :", 15, 50, 50);
					epaisseurDeTrait(50.0);
					point(450, 60);
					epaisseurDeTrait(1.0);
					couleurCourante( 254, 231, 240);
					rectangle(535, 190 , 820, 280);
					ligne( 515, 170, 840, 170);
					ligne( 840, 170, 840, 620);
					ligne( 515, 620, 840, 620);
					ligne( 515 , 620, 515, 170);
					couleurCourante( 187, 11, 11);
					afficheChaine("H E L P  T H E", 20, 590, 250);
					afficheChaine("P R I N C E S S", 20,570, 200);
					ecrisImage(590, 300, pitch->largeurImage, pitch->hauteurImage, pitch->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				
				break;
				
				case 14:
				
					temps=0;
					epaisseurDeTrait(1.0);
					couleurCourante( 217, 1, 21);
					afficheChaine("J E U  D E  M O B I L I T E", 30, 330, 700);
					afficheChaine("Appuyer sur le bouton pour voir les resultats :", 15, 50, 50);
					epaisseurDeTrait(50.0);
					point(500, 60);
					epaisseurDeTrait(1.0);
					couleurCourante( 254, 231, 240);
					rectangle(535, 190 , 820, 280);
					ligne( 515, 170, 840, 170);
					ligne( 840, 170, 840, 620);
					ligne( 515, 620, 840, 620);
					ligne( 515 , 620, 515, 170);
					couleurCourante( 187, 11, 11);
					afficheChaine("A I D E  L A", 20, 590, 250);
					afficheChaine("P R I N C E S S E", 20,550, 200);
					ecrisImage(590, 300, pitch->largeurImage, pitch->hauteurImage, pitch->donneesRGB);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 15:
				
					effaceFenetre (255, 255, 255);
					affichage(time, temps, chrono);
					fichierScore(fichier,s);
					s=lancer(sudoku1,sudoku2,sudoku3, neutron, phineas, dexter, chrono, bande, s, temps ,result);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 16:
				
					effaceFenetre (255, 255, 255);
					affichage(time, temps, chrono);
					fichierScore(fichier,s);
					s=step(sudoku1,sudoku2,sudoku3, neutron, phineas, dexter, chrono, bande, s, temps ,result);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 17:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 18:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 19:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 20:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 21:
					
					if( etape==0){
						
						couleurCourante(0,0,0);
						afficheChaine("A T T E N T I O N",40,400,600);
						afficheChaine("L E  J E U",40,450,500);
						afficheChaine("C O M M E N C E ",40,410,400);
						
						if( temps == 5 || clic == 1 ){
							
							etape = 1;
							
						}
					}
					
					if(etape ==1 ){
						
					
						couleurCourante(0,0,0);
						sprintf(time,"%d",temps);
						afficheChaine(time,40,180,80);
						couleurCourante(0,0,0);
						afficheChaine("R E P O N S E :", 30, 100, 210);
						couleurCourante(255,0,0);
						rectangle(500,200, 540,240);
						couleurCourante(255,255,0);
						rectangle(600,200,640,240);
						couleurCourante(0,255,0);
						rectangle(700, 200, 740, 240);
						couleurCourante(0,0,255);
						rectangle(800, 200, 840, 240);
						couleurCourante(0,0,0);
						rectangle(900, 200, 940, 240);
						JeuCouleur1();
						
						if (temps == 11 || clic == 2) {
							
							etape = 2;
							
						}
						
						
					}
					
					if ( etape == 2) {
						
						couleurCourante(0,0,0);
						sprintf(time,"%d",temps);
						afficheChaine(time,40,180,80);
						couleurCourante(0,0,0);
						afficheChaine("R E P O N S E :", 30, 100, 210);
						couleurCourante(255,0,0);
						rectangle(500,200, 540,240);
						couleurCourante(255,255,0);
						rectangle(600,200,640,240);
						couleurCourante(0,255,0);
						rectangle(700, 200, 740, 240);
						couleurCourante(0,0,255);
						rectangle(800, 200, 840, 240);
						couleurCourante(0,0,0);
						rectangle(900, 200, 940, 240);
						JeuCouleur2();
						
						if (temps == 17 || clic == 3){
							
							etape = 3;
							
						}
						
					}
					
					if (etape == 3) {
						
						couleurCourante(0,0,0);
						sprintf(time,"%d",temps);
						afficheChaine(time,40,180,80);
						couleurCourante(0,0,0);
						afficheChaine("R E P O N S E :", 30, 100, 210);
						couleurCourante(255,0,0);
						rectangle(500,200, 540,240);
						couleurCourante(255,255,0);
						rectangle(600,200,640,240);
						couleurCourante(0,255,0);
						rectangle(700, 200, 740, 240);
						couleurCourante(0,0,255);
						rectangle(800, 200, 840, 240);
						couleurCourante(0,0,0);
						rectangle(900, 200, 940, 240);
						JeuCouleur3();
						
						if(temps == 22 || clic == 4){
							
							etape = 4;
							
						}
						
						
						
					}
					
					if (etape == 4) {
						
						couleurCourante(0,0,0);
						sprintf(time,"%d",temps);
						afficheChaine(time,40,180,80);
						couleurCourante(0,0,0);
						afficheChaine("R E P O N S E :", 30, 100, 210);
						couleurCourante(255,0,0);
						rectangle(500,200, 540,240);
						couleurCourante(255,255,0);
						rectangle(600,200,640,240);
						couleurCourante(0,255,0);
						rectangle(700, 200, 740, 240);
						couleurCourante(0,0,255);
						rectangle(800, 200, 840, 240);
						couleurCourante(0,0,0);
						rectangle(900, 200, 940, 240);
						JeuCouleur4();
						
						if (temps == 27 || clic == 5 ){
							
							etape = 5;
						
					}}
					
					if (etape == 5) {
						
						couleurCourante(0,0,0);
						sprintf(time,"%d",temps);
						afficheChaine(time,40,180,80);
						couleurCourante(0,0,0);
						afficheChaine("R E P O N S E :", 30, 100, 210);
						couleurCourante(255,0,0);
						rectangle(500,200, 540,240);
						couleurCourante(255,255,0);
						rectangle(600,200,640,240);
						couleurCourante(0,255,0);
						rectangle(700, 200, 740, 240);
						couleurCourante(0,0,255);
						rectangle(800, 200, 840, 240);
						couleurCourante(0,0,0);
						rectangle(900, 200, 940, 240);
						JeuCouleur5();
						
						if ( temps == 32 || clic == 6){
							
							etape = 6;
						
					}}
					
						if (etape == 6){
						
						etape = 0;
							
						}
											
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
					ecrisImage(50, 50, horloge->largeurImage, horloge->hauteurImage, horloge->donneesRGB);
				
				break;
				
				case 22:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 23:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 24:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 25:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 26:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 27:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 28:
				
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 30:
				
					couleurCourante( 131, 166, 151);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("R E S U L T A T S :", 40, 250, 600);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 31:
					
					couleurCourante( 131, 166, 151);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("R E S U L T S :", 40, 240, 600);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 32:
				
					couleurCourante( 131, 166, 151);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("R E S U L T A T S :", 40, 250, 600);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 33:
				
					couleurCourante( 131, 166, 151);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("R E S U L T S :", 40, 240, 600);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 34:
				
					couleurCourante( 131, 166, 151);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("R E S U L T A T S :", 40, 250, 600);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
					
				case 35:
				
					couleurCourante( 131, 166, 151);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("R E S U L T S :", 40, 240, 600);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 36:
				
					couleurCourante( 131, 166, 151);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("R E S U L T A T S :", 40, 250, 600);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
				
				case 37:
				
					couleurCourante( 131, 166, 151);
					rectangle(0, 650, 1200, 580);
					rectangle(0, 670, 1200, 660);
					rectangle(0, 570, 1200, 560);
					couleurCourante( 96, 96, 96);
					afficheChaine("R E S U L T S :", 40, 240, 600);
					ecrisImage(1120, 20, porte->largeurImage, porte->hauteurImage, porte->donneesRGB);
				
				break;
			
			}	
					

			break;
			
		case Clavier:
		
			switch(choix){
				
				case 15:
					
					s = gereClavierReponse(s);
				
				break;
				
				case 16:
				
					s = gereClavierReponse(s);
					
				break;
				
			}
		
			printf("%c : ASCII %d\n", caractereClavier(), caractereClavier());

			switch (caractereClavier())
			{
				case 'Q': /* Pour sortir quelque peu proprement du programme */
				case 'q':
					libereDonneesImageRGB(&anglais); /* On libere la structure image,
					c'est plus propre, meme si on va sortir du programme juste apres */
					libereDonneesImageRGB(&fond);
					libereDonneesImageRGB(&francais);
					libereDonneesImageRGB(&porte);
					libereDonneesImageRGB(&nom);
					libereDonneesImageRGB(&prenom);
					libereDonneesImageRGB(&age);
					libereDonneesImageRGB(&memoire);
					libereDonneesImageRGB(&synchronisation);
					libereDonneesImageRGB(&mobilite);
					libereDonneesImageRGB(&rapidite);
					libereDonneesImageRGB(&pitch);
					libereDonneesImageRGB(&marmotte);
					libereDonneesImageRGB(&sudoku);
					libereDonneesImageRGB(&memory);
					libereDonneesImageRGB(&charly);
					libereDonneesImageRGB(&mot);
					libereDonneesImageRGB(&horloge);
					termineBoucleEvenements();
					break;

				case 'F':
				case 'f':
					pleinEcran = !pleinEcran; // Changement de mode plein ecran
					if (pleinEcran)
						modePleinEcran();
					else
						redimensionneFenetre(LargeurFenetre, HauteurFenetre);
					break;

				case 'R':
				case 'r':
					// Configure le systeme pour generer un message Temporisation
					// toutes les 20 millisecondes (rapide)
					demandeTemporisation(20);
					break;

				case 'L':
				case 'l':
					// Configure le systeme pour generer un message Temporisation
					// toutes les 100 millisecondes (lent)
					demandeTemporisation(100);
					break;

				case 'S':
				case 's':
					// Configure le systeme pour ne plus generer de message Temporisation
					demandeTemporisation(-1);
					break;
			}
			break;
			
		case ClavierSpecial:
			printf("ASCII %d\n", toucheClavier());
			break;

		case BoutonSouris:
			if (etatBoutonSouris() == GaucheAppuye)
			{
				printf("Bouton gauche appuye en : (%d, %d)\n", abscisseSouris(), ordonneeSouris());
				// Si le bouton gauche de la souris est appuye, faire repartir
				
				if(choix == 0){
					
					choix = ClicDrapeaux(choix);
					
				}
				
				else if(choix == 1){
					
					choix = ClicWelcome(choix);
					
				}
				
				else if(choix == 2){
					
					choix = ClicBienvenue(choix);
					
				}
				
				else if(choix == 3){
					
					choix = ClicContactInformation(choix);
					
				}
				
				else if(choix == 4){
				
					choix = ClicCoordonnees(choix);
					
				}
				
				else if(choix == 5){
				 
					choix = ClicMenuAnglais(choix);
					
				}
				
				else if(choix == 6){
				 
					choix = ClicMenuFrancais(choix);
					
				}
				
				else if (choix == 7){
				
					choix = ClicSynchronisation(choix);
				
				}
				
				else if (choix == 8) {
					
					choix = ClicSynchronization(choix);
					
				}
				
				else if (choix == 9){
				
					choix = ClicSpeedAnalysis(choix);
					
				}
				
				else if (choix == 10){
					
					choix = ClicVitesseAnalyse(choix);
					
				}
				
				else if (choix == 11){
				
					choix = ClicMemory(choix);
					
				}
				
				else if (choix == 12){
				
				choix = ClicMemoire(choix);
					
				}
				
				else if (choix == 13){
					
				choix = ClicMobility(choix);
					
				}
				
				else if (choix == 14){
				
				choix = ClicMobilite(choix);
					
				}
				
				else if (choix == 24){
					
				choix = ClicHelpThePrincess(choix);
					
				}
				
				else if (choix == 23){
				
				choix = ClicAideLaPrincesse(choix);
					
				}
				
				else if (choix == 15){
					
				choix = ClicSudokunesFR(choix);
					
				}
				
				else if (choix == 16){
					
				choix = ClicSudokunesEN(choix);
				
				}
					
				else if (choix == 17){
					
				choix = ClicAttrapeMarmotte(choix);
				
				}
				
				else if (choix == 18){
					
				choix = ClicCatchGroundhog(choix);
				
				}
				
				else if (choix == 19){
					
					choix = ClicCharlie(choix);
					
				}
				
				else if (choix == 20){
					
				choix = ClicCharly(choix);
					
				}
				
				else if (choix == 21){
					
				choix = ClicCouleur(choix);
				
				}
				
				else if (choix == 22){
					
				choix = ClicColor(choix);
				
				}
				
				else if (choix == 25){
					
					choix = ClicCartoonFR(choix);
					
				}
				
				else if (choix == 26){
					
				choix = ClicCartoonEN(choix);
					
				}
				
				else if (choix == 27){
					
					choix = ClicCity(choix);
					
				}
				
				else if (choix == 28){
					
				choix = ClicVille(choix);
					
				}
				
				else if ( choix == 30){
				
				choix = ClicResultatVitesse(choix);
					
				}
				
				else if ( choix == 31){
				
				choix = ClicResultSpeed(choix);
					
				}
				
				else if ( choix == 32){
				
				choix = ClicResultatSynchro(choix);
					
				}
				
				else if ( choix == 33){
				
				choix = ClicResultSynchro(choix);
					
				}
				
				else if ( choix == 34){
				
				choix = ClicResultatMob(choix);
					
				}
				
				else if ( choix == 35){
				
				choix = ClicResultMob(choix);
					
				}
				
				else if ( choix == 36){
				
				choix = ClicResultatMem(choix);
					
				}
				
				else if ( choix == 37){
				
				choix = ClicResultMem(choix);
					
				}
				
				else if ( etape == 1){
				
				clic = GereClicJeuCouleur1(etape, clic);
					
				}
				
				else if ( etape == 2) {
					
				clic = GereClicJeuCouleur2(etape, clic);
				
				}
		
				else if ( etape == 3) {
					
				clic = GereClicJeuCouleur3(etape, clic);
				
				}
				
				else if ( etape == 4) {
					
				clic = GereClicJeuCouleur4(etape, clic);
				
				} 
				
				else if ( etape  == 5) {
					
				clic = GereClicJeuCouleur5(etape, clic);
				
				}
		
			}
			else if (etatBoutonSouris() == GaucheRelache)
			{
				printf("Bouton gauche relache en : (%d, %d)\n", abscisseSouris(), ordonneeSouris());
			}
				
				printf("choix = %d \n",choix);
				printf("etape = %d \n", etape);
				printf("clic = %d \n",clic);
				
			break;
		
		case Souris: // Si la souris est deplacee
			break;
		
		case Inactivite: // Quand aucun message n'est disponible
			break;
		
		case Redimensionnement: // La taille de la fenetre a ete modifie ou on est passe en plein ecran
		
			break;
	}
}
