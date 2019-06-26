#include <stdlib.h> 
#include <stdio.h>
#include <math.h> 
#include <string.h>
#include "../../Documents/GfxLib/GfxLib.h"
#include "../../Documents/GfxLib/BmpLib.h"

#define LargeurFenetre 1200
#define HauteurFenetre 800
#include "sudoku.h"

void regle(){

couleurCourante(0,0,0);
afficheChaine("Le but du jeu est de remplir ces cases avec des chiffres allant de 1 à 9 en veillant ",50,200,600);
afficheChaine("toujours à ce qu'un même chiffre ne figure qu'une seule fois par colonne, une seule " ,50,200,500);
afficheChaine("fois par ligne, et une seule fois par carré de neuf cases",50,200,400);

}

void affichage (char time[2],int temps, DonneesImageRGB *chrono){
	
	epaisseurDeTrait(3);
	couleurCourante(51,134,59);
	afficheChaine("Sudok'unes", 40, 500,700);
	epaisseurDeTrait(3);
	couleurCourante(153,217,159);
	ligne(30, 150, 200, 150);
	ligne(30, 30, 200, 30);
	ligne(30, 30, 30, 150);
	ligne(200, 30, 200, 150);
	ecrisImage(50,50, chrono->largeurImage, chrono->hauteurImage, chrono->donneesRGB);
	sprintf(time,"%d",temps);
	afficheChaine(time,15,150,80);
	epaisseurDeTrait(3);
	couleurCourante(255,0, 0);
}


void fichierScore (FILE* fichier, sudo s){
	
	fichier = fopen("score.txt","w+");
	fprintf(fichier,"%d",s.answer);
	fclose(fichier);
}



sudo lancer(DonneesImageRGB *sudoku1, DonneesImageRGB *sudoku2, DonneesImageRGB *sudoku3, DonneesImageRGB *neutron, DonneesImageRGB *phineas, DonneesImageRGB *dexter, DonneesImageRGB *chrono ,
 DonneesImageRGB *bande, sudo s, int temps,FILE* result){
	

	
			if (s.etape==0){
								
				
					ecrisImage(200,200, sudoku1->largeurImage, sudoku1->hauteurImage, sudoku1->donneesRGB);
					ecrisImage(1000,600, neutron->largeurImage, neutron->hauteurImage, neutron->donneesRGB);
					epaisseurDeTrait(4);
					couleurCourante(255,0, 0);
					afficheChaine("?", 40, 385,378);
					epaisseurDeTrait(1);
					couleurCourante(153,200,159);
					afficheChaine("Tape sur entree pour valider ta reponse", 20, 600,485);
					couleurCourante(153,200,159);
					afficheChaine("Quel chiffre se cache derriere     =", 20, 600,370);
					couleurCourante(255,0,0);
					afficheChaine("?", 20, 970,378);
					sprintf(s.chaine,"%c",caractereClavier());
					afficheChaine(s.chaine,20,1100,378);
					if(temps==13)
						s.etape=1;
				}
			
			
						
			if (s.etape==1){
				
				ecrisImage(200,250, sudoku2->largeurImage, sudoku2->hauteurImage, sudoku2->donneesRGB);
				ecrisImage(650,0, phineas->largeurImage, phineas->hauteurImage, phineas->donneesRGB);
				epaisseurDeTrait(4);
				couleurCourante(255,0, 0);
				afficheChaine("?", 35, 399,520);
				epaisseurDeTrait(1);
				couleurCourante(153,200,159);
				afficheChaine("Tape sur entree pour valider ta reponse", 20, 600,485);
				couleurCourante(153,200,159);
				afficheChaine("Quel chiffre se cache derriere      =", 20, 600,370);
				couleurCourante(255,0,0);
				afficheChaine("?", 20, 970,378);
				sprintf(s.chaine,"%c",caractereClavier());
				afficheChaine(s.chaine,20,1100,378);
				if(temps==26)
					s.etape=2;
			}
			
			if (s.etape==2){
				
				ecrisImage(200,200, sudoku3->largeurImage, sudoku3->hauteurImage, sudoku3->donneesRGB);
				ecrisImage(200,590, dexter->largeurImage, dexter->hauteurImage, dexter->donneesRGB);
				epaisseurDeTrait(4);
				couleurCourante(255,0, 0);
				afficheChaine("?", 35, 555,210);
				epaisseurDeTrait(1);
				couleurCourante(153,200,159);
				afficheChaine("Tape sur entree pour valider ta reponse", 20, 600,485);
				couleurCourante(153,200,159);
				afficheChaine("Quel chiffre se cache derriere      =", 20, 600,370);
				couleurCourante(255,0,0);
				afficheChaine("?", 20, 970,378);
				sprintf(s.chaine,"%c",caractereClavier());
				afficheChaine(s.chaine,20,1100,378);
				if (temps==39 )
					s.etape =3;
					
				
							
			}
			if (s.etape==3){
				
				epaisseurDeTrait(3);
				couleurCourante(153,200,159);
				ecrisImage(400,100, bande->largeurImage, bande->hauteurImage, bande->donneesRGB);
				afficheChaine("BRAVO ! Tu as termine le test !", 40, 200,500);
				afficheChaine("RESULTAT :", 40, 400,400);
				result=fopen("score.txt","r+");
				fscanf(result,"%d",&s.r);
				sprintf(s.chaine,"%d/3",s.r);
				afficheChaine(s.chaine, 40, 700,400);
				fclose(result);
				
				
				}
	return s;
}

sudo gereClavierReponse (sudo s){
	if(	caractereClavier()=='1' || caractereClavier()=='2' || caractereClavier()=='3' || caractereClavier()=='4' || caractereClavier()=='5' || caractereClavier()=='6' ||
	 caractereClavier()=='7' ||caractereClavier()=='8' || caractereClavier()=='9' ){
						s.o=1;
						if(caractereClavier()=='4'&& s.etape==0)
							s.answer++;
						if(caractereClavier()=='1'&& s.etape==1)
							s.answer++;
						if(caractereClavier()=='2'&& s.etape==2)
							s.answer++;
							
					}
	if (caractereClavier()==13 && s.o==1)
		s.etape++;
					
	return s;
}


sudo step(DonneesImageRGB *sudoku1, DonneesImageRGB *sudoku2, DonneesImageRGB *sudoku3, DonneesImageRGB *neutron, DonneesImageRGB *phineas, DonneesImageRGB *dexter, DonneesImageRGB *chrono ,
 DonneesImageRGB *bande, sudo s, int temps,FILE* result){
	

	
			if (s.etape==0){
								
				
					ecrisImage(200,200, sudoku1->largeurImage, sudoku1->hauteurImage, sudoku1->donneesRGB);
					ecrisImage(1000,600, neutron->largeurImage, neutron->hauteurImage, neutron->donneesRGB);
					epaisseurDeTrait(4);
					couleurCourante(255,0, 0);
					afficheChaine("?", 40, 385,378);
					epaisseurDeTrait(1);
					couleurCourante(153,200,159);
					afficheChaine("Press enter to confirm your answer ", 20, 600,485);
					couleurCourante(153,200,159);
					afficheChaine("What number is hiding behind     =", 20, 600,370);
					couleurCourante(255,0,0);
					afficheChaine("?", 20, 970,378);
					sprintf(s.chaine,"%c",caractereClavier());
					afficheChaine(s.chaine,20,1100,378);
					if(temps==13)
						s.etape=1;
				}
			
			
						
			if (s.etape==1){
				
				ecrisImage(200,250, sudoku2->largeurImage, sudoku2->hauteurImage, sudoku2->donneesRGB);
				ecrisImage(650,0, phineas->largeurImage, phineas->hauteurImage, phineas->donneesRGB);
				epaisseurDeTrait(4);
				couleurCourante(255,0, 0);
				afficheChaine("?", 35, 399,520);
				epaisseurDeTrait(1);
				couleurCourante(153,200,159);
				afficheChaine("Press enter to confirm your answer", 20, 600,485);
				couleurCourante(153,200,159);
				afficheChaine("What number is hidind behind     =", 20, 600,370);
				couleurCourante(255,0,0);
				afficheChaine("?", 20, 970,378);
				sprintf(s.chaine,"%c",caractereClavier());
				afficheChaine(s.chaine,20,1100,378);
				if(temps==26)
					s.etape=2;
			}
			
			if (s.etape==2){
				
				ecrisImage(200,200, sudoku3->largeurImage, sudoku3->hauteurImage, sudoku3->donneesRGB);
				ecrisImage(200,590, dexter->largeurImage, dexter->hauteurImage, dexter->donneesRGB);
				epaisseurDeTrait(4);
				couleurCourante(255,0, 0);
				afficheChaine("?", 35, 555,210);
				epaisseurDeTrait(1);
				couleurCourante(153,200,159);
				afficheChaine("Press enter to confirm your answer", 20, 600,485);
				couleurCourante(153,200,159);
				afficheChaine("What number is hiding behind      =", 20, 600,370);
				couleurCourante(255,0,0);
				afficheChaine("?", 20, 970,378);
				sprintf(s.chaine,"%c",caractereClavier());
				afficheChaine(s.chaine,20,1100,378);
				if (temps==39 )
					s.etape =3;
					
				
							
			}
			if (s.etape==3){
				
				epaisseurDeTrait(3);
				couleurCourante(153,200,159);
				ecrisImage(400,100, bande->largeurImage, bande->hauteurImage, bande->donneesRGB);
				afficheChaine("Congrats ! You finish the test !", 40, 200,500);
				afficheChaine("RESULT:", 40, 400,400);
				result=fopen("score.txt","r+");
				fscanf(result,"%d",&s.r);
				sprintf(s.chaine,"%d/3",s.r);
				afficheChaine(s.chaine, 40, 700,400);
				fclose(result);
				
				if(temps==49)
				termineBoucleEvenements();
				}
	return s;
}	
	




