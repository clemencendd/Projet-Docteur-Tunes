#include <stdlib.h> // Pour pouvoir utiliser exit()
#include <stdio.h> // Pour pouvoir utiliser printf()
#include <math.h> // Pour pouvoir utiliser sin() et cos()
#include "../LibraryISEN/GfxLib.h" // Seul cet include est necessaire pour faire du graphique
#include "../LibraryISEN/BmpLib.h"
#include <time.h>
#include <string.h>
#define LargeurFenetre 1200
#define HauteurFenetre 800

#include "mots.h"

#define LIGNE 78

  
    
    
    
mots tabMots(mots m){
		FILE *fichier = NULL; 
		fichier = fopen("list.txt", "r+"); 
		
		static int i=0;
		char chaine2[15]={0};
	
		while (fgets(chaine2, 15, fichier)!=NULL){
		strcpy(m.mot[i],chaine2);
		i++;
		printf("%s", m.mot[i]);	
				
		
		}
		fclose(fichier); 
	return m;
	}
	

	


void affichageMots(mots m, int temps){
	int I=0;
	epaisseurDeTrait(2);
	afficheChaine("Habitants de Tunes city",25,400,750);
	couleurCourante(255, 255, 255);
	rectangle(200, 100, 1000, 700);
	
	for(I=0;I<5;I++){
		epaisseurDeTrait(2);
		couleurCourante(0, 0,0 );
		afficheChaine(m.mot[I], 25,250+(I*150), 500);}
	for(I=0;I<5;I++){
		epaisseurDeTrait(2);
		couleurCourante(0, 0,0 );
		afficheChaine(m.mot[I+5], 25,250+(I*150), 300);}}
	

	
	
	





void affichageMotRepons(){
	couleurCourante(255,255,255);
	rectangle(200,100,1000,700);
	couleurCourante(255,174,201);
	ligne(200, 100, 200,  700);
	ligne(360, 100,360,  700);
	ligne(520, 100, 520,  700);
	ligne(680, 100, 680,  700);
	ligne(840, 100, 840,  700);
	ligne(1000, 100, 1000,  700);
	
	ligne(200, 100, 1000,  100);
	ligne(200, 300, 1000,  300);
	ligne(200, 500, 1000,  500);
	ligne(200, 700, 1000,  700);
	
	couleurCourante(0,0,0);
	epaisseurDeTrait(2);
	afficheChaine("Retrouve les habitants de Tunes city",20,400,750);
	
	afficheChaine("chef",15,260,600);
	afficheChaine("hans",15,420,600);
	afficheChaine("dory",15,580,600);
	afficheChaine("nemo",15,740,600);
	afficheChaine("many",15,900,600);
	
	afficheChaine("olly",15,260,400);
	afficheChaine("anna",15,420,400);
	afficheChaine("cendrillon",15,580,400);
	afficheChaine("carl",15,740,400);
	afficheChaine("mickey",15,900,400);
	
	afficheChaine("elsa",15,260,200);
	afficheChaine("belle",15,420,200);
	afficheChaine("fred",15,580,200);
	afficheChaine("aurore",15,740,200);
	afficheChaine("buck",15,900,200);
	
	
	
}

mots gereClic(mots m){
	int x=0,y=0;
	y=ordonneeSouris();
	x=abscisseSouris();
	
	if(x>=200 &&x<=360 && y>=100 && y<=300){
		m.answer++;
		m.elsa=1;
	}
	if(x>=200 &&x<=360 && y>=300 && y<=500){
		m.answer++;
		m.pass++;
		m.olly=1;
	}
	if(x>=200 &&x<=360 && y>=500 && y<=700){
		m.answer++;
		m.pass++;
		m.chef=1;
	}
	if(x>=360 &&x<=520 && y>=500 && y<=700){
		m.answer++;
		m.pass++;
		m.hans=1;
	}
	if(x>=360 &&x<=520 && y>=300 && y<=500){
		m.answer++;
		m.pass++;
		m.anna=1;
	}
	if(x>=520 &&x<=680 && y>=500 && y<=700){
		m.answer++;
		m.pass++;
		m.dory=1;
	}
	if(x>=520 &&x<=680 && y>=100 && y<=300){
		m.answer++;
		m.pass++;
		m.fred=1;
	}
	if(x>=680 &&x<=840 && y>=300 && y<=500){
		m.answer++;
		m.pass++;
		m.carl=1;
	}
	if(x>=840 &&x<=1000 && y>=100 && y<=300){
		m.answer++;
		m.pass++;
		m.buck=1;
	}
	if(x>=840 &&x<=1000 && y>=500 && y<=700){
		m.answer++;
		m.pass++;
		m.many=1;
	}
	if(x>=360 &&x<=520 && y>=100 && y<=300){
		m.answer--;
		m.belle=1;
	}
	if(x>=520 &&x<=680 && y>=300 && y<=500){
		m.answer--;
		m.cendrillon=1;
	}
	if(x>=680 &&x<=840 && y>=500 && y<=700){
		m.answer--;
		m.nemo=1;
	}
	if(x>=680 &&x<=840 && y>=100 && y<=300){
		m.answer--;
		m.aurore=1;
	}
	if(x>=840 &&x<=1000 && y>=300 && y<=500){
		m.answer--;
		m.mickey=1;
	}
	

return m;		
}


void score(FILE* fichier,mots m){
	
	fichier = fopen("mots.txt","w+");
	fprintf(fichier,"%d ",m.answer);
	fclose(fichier);
}

void resultat(FILE* result, int r, char chain[3]){
	couleurCourante(255,255,255);
	rectangle(150,100,1100,200);
	couleurCourante(0,0,0);
	epaisseurDeTrait(3);
	afficheChaine("Bravo, votre score est :",50,200,130);
	result=fopen("mots.txt","r+");
	fscanf(result,"%d",&r);
	sprintf(chain,"%d/10",r);
	afficheChaine(chain, 50, 900,130);
	fclose(result);
}
				
mots init(mots m){
	m.chef=0;
	m.elsa=0;
	m.buck=0;
	m.anna=0;
	m.many=0;
	m.dory=0;
	m.fred=0;
	m.olly=0;
	m.hans=0;
	m.carl=0;
	m.mickey=0;
	m.belle=0;
	m.cendrillon=0;
	m.aurore=0;
	m.nemo=0;
	m.answer=0;
	m.pass=0;
	
	return m;
}




mots jeu(mots m,DonneesImageRGB *city, int temps, char chaine[2],int r, char chain[3], FILE* result){
ecrisImage(0, 0, city->largeurImage, city->hauteurImage, city->donneesRGB);
			
			
			
			
			if (m.step==0 && temps<=10){
			sprintf(chaine,"%d",temps);
			couleurCourante(0,0,0);
			epaisseurDeTrait(3);
			afficheChaine(chaine,20,100,100);
			affichageMots(m,temps);
			
			if (temps>=10)
				m.step=1;
				}
			if(m.pass==10)
				m.step=1;
			
			if (m.step==1){
			sprintf(chaine,"%d",temps);
			couleurCourante(0,0,0);
			epaisseurDeTrait(3);
			afficheChaine(chaine,20,100,100);
			
			affichageMotRepons();
			if(m.chef==1){
				couleurCourante(109,206,89);
				rectangle(200,700,360,500);
				couleurCourante(0,0,0);
				afficheChaine("chef",15,260,600);
			
			}
			if(m.olly==1){
				couleurCourante(109,206,89);
				rectangle(200,500,360,300);
				couleurCourante(0,0,0);
				afficheChaine("olly",15,260,400);
			}
			if(m.elsa==1){
				couleurCourante(109,206,89);
				rectangle(200,300,360,100);
				couleurCourante(0,0,0);
				afficheChaine("elsa",15,260,200);
			}
			if(m.hans==1){
				couleurCourante(109,206,89);
				rectangle(520,700,360,500);
				couleurCourante(0,0,0);
				afficheChaine("hans",15,420,600);
			}
			if(m.anna==1){
				couleurCourante(109,206,89);
				rectangle(520,500,360,300);
				couleurCourante(0,0,0);
				afficheChaine("anna",15,420,400);
			}
			if(m.dory==1){
				couleurCourante(109,206,89);
				rectangle(520,700,680,500);
				couleurCourante(0,0,0);
				afficheChaine("dory",15,580,600);
			}
			if(m.fred==1){
				couleurCourante(109,206,89);
				rectangle(520,100,680,300);
				couleurCourante(0,0,0);
				afficheChaine("fred",15,580,200);
			}
			if(m.carl==1){
				couleurCourante(109,206,89);
				rectangle(680,500,840,300);
				couleurCourante(0,0,0);
				afficheChaine("carl",15,740,400);
			}
			if(m.many==1){
				couleurCourante(109,206,89);
				rectangle(840,700,1000,500);
				couleurCourante(0,0,0);
				afficheChaine("many",15,900,600);
			}
			if(m.buck==1){
				couleurCourante(109,206,89);
				rectangle(840,300,1000,100);
				couleurCourante(0,0,0);
				afficheChaine("buck",15,900,200);
			}
			if(m.belle==1){
				couleurCourante(255,77,77);
				rectangle(360,300,520,100);
				couleurCourante(0,0,0);
				afficheChaine("belle",15,420,200);
			}
			if(m.cendrillon==1){
				couleurCourante(255,77,77);
				rectangle(520,500,680,300);
				couleurCourante(0,0,0);
				afficheChaine("cendrillon",15,580,400);
			}
			if(m.nemo==1){
				couleurCourante(255,77,77);
				rectangle(680,700,840,500);
				couleurCourante(0,0,0);
				afficheChaine("nemo",15,740,600);
			}
			if(m.aurore==1){
				couleurCourante(255,77,77);
				rectangle(680,300,840,100);
				couleurCourante(0,0,0);
				afficheChaine("aurore",15,740,200);
			}
			if(m.mickey==1){
				couleurCourante(255,77,77);
				rectangle(840,500,1000,300);
				couleurCourante(0,0,0);
				afficheChaine("mickey",15,900,400);
			}
			
			
			if(temps==20 )
				m.step=2;
			
			
		}
		if (m.step==2)
			resultat(result, r,chain);
			
	return mots;

}

	
