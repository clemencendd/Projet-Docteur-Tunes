#include "memory.h"

#define LargeurFenetre 1200
#define HauteurFenetre 800

void afficheFond1(DonneesImageRGB *garfield1){
	//int i,j;
	
//HORLOGE
ecrisImage(50, 50, garfield1->largeurImage, garfield1->hauteurImage, garfield1->donneesRGB);
//FOND		
couleurCourante(255, 165, 0);
rectangle(295, 95, 905, 705);
couleurCourante(0, 0, 0);
//1ERE COLONNE
rectangle(295,95,415,215);
rectangle(295, 217, 415, 337);
rectangle(295, 339, 415, 459);
rectangle(295, 461, 415, 581);
rectangle(295, 583, 415, 703);
//2 eme COLONNE
rectangle(417,95,537,215);
rectangle(417, 217, 537, 337);
rectangle(417, 339, 537, 459);
rectangle(417, 461, 537, 581);
rectangle(417, 583, 537, 703);
//3 eme COLONNE
rectangle(539,95,659,215);
rectangle(539, 217, 659, 337);
rectangle(539, 339, 659, 459);
rectangle(539, 461, 659, 581);
rectangle(539, 583, 659, 703);
//4 eme COLONNE
rectangle(661,95,781,215);
rectangle(661, 217, 781, 337);
rectangle(661, 339, 781, 459);
rectangle(661, 461, 781, 581);
rectangle(661, 583, 781, 703);
//5 eme COLONNE
rectangle(783,95,903,215);
rectangle(783, 217, 903, 337);
rectangle(783, 339, 903, 459);
rectangle(783, 461, 903, 581);
rectangle(783, 583, 903, 703);
}

void afficheFond2(DonneesImageRGB *mario1){
couleurCourante(0, 255, 0);
rectangle(294, 94, 916, 716);
couleurCourante(0, 0, 0);

//HORLOGE
ecrisImage(50, 50, mario1->largeurImage, mario1->hauteurImage, mario1->donneesRGB);
//1ERE COLONNE
rectangle(294,94,396,196);
rectangle(294, 198, 396, 300);
rectangle(294, 302, 396, 404);
rectangle(294, 406, 396, 508);
rectangle(294, 510, 396, 612);
rectangle(294, 614, 396, 716);
//2 eme COLONNE
rectangle(398,94,500,196);
rectangle(398, 198, 500, 300);
rectangle(398, 302, 500, 404);
rectangle(398, 406, 500, 508);
rectangle(398, 510, 500, 612);
rectangle(398, 614, 500, 716);
//3 eme COLONNE
rectangle(502,94,604,196);
rectangle(502, 198, 604, 300);
rectangle(502, 302, 604, 404);
rectangle(502, 406, 604, 508);
rectangle(502, 510, 604, 612);
rectangle(502, 614, 604, 716);
//4 eme COLONNE
rectangle(606,94,708,196);
rectangle(606, 198, 708, 300);
rectangle(606, 302, 708, 404);
rectangle(606, 406, 708, 508);
rectangle(606, 510, 708, 612);
rectangle(606, 614, 708, 716);
//5 eme COLONNE
rectangle(710,94,812,196);
rectangle(710, 198, 812, 300);
rectangle(710, 302, 812, 404);
rectangle(710, 406, 812, 508);
rectangle(710, 510, 812, 612);
rectangle(710, 614, 812, 716);
//6 eme COLONNE
rectangle(814,94,916,196);
rectangle(814, 198, 916, 300);
rectangle(814, 302, 916, 404);
rectangle(814, 406, 916, 508);
rectangle(814, 510, 916, 612);
rectangle(814, 614, 916, 716);
}

void afficheFond3(DonneesImageRGB *titi1){
couleurCourante(255,215,0);
rectangle(294, 94, 929, 729);
couleurCourante(0, 0, 0);
//HORLOGE
ecrisImage(50, 50, titi1->largeurImage, titi1->hauteurImage, titi1->donneesRGB);
//1ERE COLONNE
rectangle(294,94,383,183);
rectangle(294, 185, 383, 274);
rectangle(294, 276, 383, 365);
rectangle(294, 367, 383, 456);
rectangle(294, 458, 383, 547);
rectangle(294, 549, 383, 638);
rectangle(294, 640, 383, 729);
//2 eme COLONNE
rectangle(385,94,474,183);
rectangle(385, 185, 474, 274);
rectangle(385, 276, 474, 365);
rectangle(385, 367, 474, 456);
rectangle(385, 458, 474, 547);
rectangle(385, 549, 474, 638);
rectangle(385, 640, 474, 729);
//3 eme COLONNE
rectangle(476,94,565,183);
rectangle(476, 185, 565, 274);
rectangle(476, 276, 565, 365);
rectangle(476, 367, 565, 456);
rectangle(476, 458, 565, 547);
rectangle(476, 549, 565, 638);
rectangle(476, 640, 565, 729);
//4 eme COLONNE
rectangle(567,94,656,183);
rectangle(567, 185, 656, 274);
rectangle(567, 276, 656, 365);
rectangle(567, 367, 656, 456);
rectangle(567, 458, 656, 547);
rectangle(567, 549, 656, 638);
rectangle(567, 640, 656, 729);
//5 eme COLONNE
rectangle(658,94,747,183);
rectangle(658, 185, 747, 274);
rectangle(658, 276, 747, 365);
rectangle(658, 367, 747, 456);
rectangle(658, 458, 747, 547);
rectangle(658, 549, 747, 638);
rectangle(658, 640, 747, 729);
//6 eme COLONNE
rectangle(749,94,838,183);
rectangle(749, 185, 838, 274);
rectangle(749, 276, 838, 365);
rectangle(749, 367, 838, 456);
rectangle(749, 458, 838, 547);
rectangle(749, 549, 838, 638);
rectangle(749, 640, 838, 729);
//7 eme COLONNE
rectangle(840,94,929,183);
rectangle(840, 185, 929, 274);
rectangle(840, 276, 929, 365);
rectangle(840, 367, 929, 456);
rectangle(840, 458, 929, 547);
rectangle(840, 549, 929, 638);
rectangle(840, 640, 929, 729);
}
var initVar(var l){
	l.value=0;
	l.a0=0;
	l.a1=0;
	l.a2=0;
	l.a3=0;
	l.a4=0;
	l.a5=0;
	l.a6=0;
	l.a7=0;
	l.a8=0;
	l.a9=0;
	
	l.b0=0;
	l.b1=0;
	l.b2=0;
	l.b3=0;
	l.b4=0;
	l.b5=0;
	l.b6=0;
	l.b7=0;
	l.b8=0;
	l.b9=0;
	
	l.c0=0;
	l.c1=0;
	l.c2=0;
	l.c3=0;
	l.c4=0;
	l.c5=0;
	l.c6=0;
	l.c7=0;
	l.c8=0;
	l.c9=0;
	
	l.etape=0;
	l.temps=0;
	return l;}	

//gere clic niv 1
var gereClicNiv1(var l,DonneesImageRGB *garfield, DonneesImageRGB *lasagna){
	
//Colonne 1
	if(abscisseSouris() >=295  && abscisseSouris() <=415 && ordonneeSouris() >= 95 && ordonneeSouris() <= 215 && l.etape==0){
		l.a0=1;
		l.value++;}
	if(abscisseSouris() >=295  && abscisseSouris() <=415 && ordonneeSouris() >= 339 && ordonneeSouris() <=459  && l.etape==0 ){
		l.a1=1;
		l.value++;}
//Colonne 2
	if(abscisseSouris() >=417  && abscisseSouris() <=537 && ordonneeSouris() >= 217 && ordonneeSouris() <= 337  && l.etape==0){
		l.a2=1;
		l.value++;}
	if(abscisseSouris() >=417 && abscisseSouris() <=537 && ordonneeSouris() >= 339 && ordonneeSouris() <= 459  && l.etape==0){
		l.a3=1;
		l.value++;}
	if(abscisseSouris() >=417  && abscisseSouris() <=537 && ordonneeSouris() >= 583 && ordonneeSouris() <= 703  && l.etape==0){
		l.a4=1;
		l.value++;}
//Colonne 3
	if(abscisseSouris() >=539  && abscisseSouris() <=659 && ordonneeSouris() >= 461 && ordonneeSouris() <= 581  && l.etape==0){
		l.a5=1;
		l.value++;}
	if(abscisseSouris() >=539  && abscisseSouris() <=659 && ordonneeSouris() >= 583 && ordonneeSouris() <= 703  && l.etape==0){
		l.a6=1;
		l.value++;}				
//Colonne 4													
	if(abscisseSouris() >=661  && abscisseSouris() <=781 && ordonneeSouris() >= 95 && ordonneeSouris() <= 215  && l.etape==0){
		l.a7=1;
		l.value++;}	
	if(abscisseSouris() >=661  && abscisseSouris() <=781 && ordonneeSouris() >= 461 && ordonneeSouris() <= 581  && l.etape==0){
		l.a8=1;
		l.value++;}				
//Colonne 5																										
	if(abscisseSouris() >=783  && abscisseSouris() <=903 && ordonneeSouris() >= 217 && ordonneeSouris() <= 337  && l.etape==0){
		l.a9=1;
		l.value++;}			
	return l;
}
		
// reaffiche image1
void reafficheIm1(var l,DonneesImageRGB *garfield ,DonneesImageRGB *lasagna){
	
	if(l.a0==1 &&  l.etape==0){
		ecrisImage(295, 95, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);}
	if(l.a1==1 &&  l.etape==0){
		ecrisImage(295, 339, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);	}
	if(l.a2==1 &&  l.etape==0){
		ecrisImage(417, 217, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);	}
	if(l.a3==1 &&  l.etape==0){
		ecrisImage(417, 339, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);}
	if(l.a4==1 &&  l.etape==0){
		ecrisImage(417, 583, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);	}
	if (l.a5==1 &&  l.etape==0){
		ecrisImage(539, 461, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);}
	if (l.a6==1 &&  l.etape==0){
		ecrisImage(539, 583, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);}
	if (l.a7==1 &&  l.etape==0){
		ecrisImage(661,95, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);	}
	if(l.a8==1 &&  l.etape==0){
		ecrisImage(661, 461, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);	}
	if(l.a9==1 &&  l.etape==0){
		ecrisImage(783, 217, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);}
		
		
}

//gere clic niv 2
var gereClicNiv2(var l, DonneesImageRGB *luigi, DonneesImageRGB *mario){

	
	//Colonne 1
	if(abscisseSouris() >=294  && abscisseSouris() <=396 && ordonneeSouris() >= 198 && ordonneeSouris() <= 300 && l.etape==1){
		l.b0=1;
		l.value++;}
	if(abscisseSouris() >=294  && abscisseSouris() <=396 && ordonneeSouris() >= 406 && ordonneeSouris() <= 508 && l.etape==1){
		l.b1=1;
		l.value++;}
	if(abscisseSouris() >=294  && abscisseSouris() <=396 && ordonneeSouris() >= 614 && ordonneeSouris() <= 716 && l.etape==1){
		l.b2=1;
		l.value++;}
//Colonne 2
	if(abscisseSouris() >=398  && abscisseSouris() <=500 && ordonneeSouris() >= 94 && ordonneeSouris() <= 196 && l.etape==1){	
		l.b3=1;
		l.value++;}	
	if(abscisseSouris() >=398 && abscisseSouris() <=500 && ordonneeSouris() >= 302 && ordonneeSouris() <= 404 && l.etape==1){
		l.b4=1;
		l.value++;}	
//Colonne 3
	if(abscisseSouris() >=502  && abscisseSouris() <=604 && ordonneeSouris() >= 198 && ordonneeSouris() <= 300 && l.etape==1){
		l.b5=1;
		l.value++;}	
//Colonne 4
	if(abscisseSouris() >=606  && abscisseSouris() <=708 && ordonneeSouris() >= 510 && ordonneeSouris() <= 612 && l.etape==1){
		l.b6=1;
		l.value++;}	
//Colonne 5
	if(abscisseSouris() >=710  && abscisseSouris() <=812 && ordonneeSouris() >= 302 && ordonneeSouris() <= 404 && l.etape==1){
		l.b7=1;
		l.value++;}	
	if(abscisseSouris() >=710  && abscisseSouris() <=812 && ordonneeSouris() >= 614 && ordonneeSouris() <= 716 && l.etape==1){
		l.b8=1;
		l.value++;}	
//Colonne 6
	if(abscisseSouris() >=814  && abscisseSouris() <=916 && ordonneeSouris() >= 406 && ordonneeSouris() <= 508 && l.etape==1){
		l.b9=1;
		l.value++;}							
	
return l;}

// reaffiche image2				 	
void reafficheIm2(var l,DonneesImageRGB *luigi ,DonneesImageRGB *mario){	
	
	if(l.b0==1 && l.etape==1){
ecrisImage(294, 198, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
}
	if(l.b1==1 && l.etape==1){
ecrisImage(294, 406, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
}
	if(l.b2==1 && l.etape==1){
ecrisImage(294, 614, mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
}
	if(l.b3==1 && l.etape==1){
ecrisImage(398,94, mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
}
	if(l.b4==1 && l.etape==1){
ecrisImage(398, 302, mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
}
	if (l.b5==1 && l.etape==1){
ecrisImage(502, 198, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
}
	if (l.b6==1 && l.etape==1){
ecrisImage(606, 510, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
}
	if (l.b7==1 && l.etape==1){
ecrisImage(710, 302, mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
}
	if(l.b8==1 && l.etape==1){
ecrisImage(710, 614, mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
}
	if(l.b9==1 && l.etape==1){
ecrisImage(814, 406, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
}	
	
}		

//gere clic niv 3
var gereClicNiv3(var l,DonneesImageRGB *bugs, DonneesImageRGB *daffy) {
			
			
			//Colonne 1
	if(abscisseSouris() >=294  && abscisseSouris() <=383 && ordonneeSouris() >= 94 && ordonneeSouris() <= 183 && l.etape==2){
		l.c0=1;
		l.value++;}
	if(abscisseSouris() >=294  && abscisseSouris() <=383 && ordonneeSouris() >= 367 && ordonneeSouris() <= 456 && l.etape==2){
		l.c1=1;
		l.value++;}
//Colonne 2
	if(abscisseSouris() >=385  && abscisseSouris() <=474 && ordonneeSouris() >= 185 && ordonneeSouris() <= 274 && l.etape==2){
		l.c2=1;
		l.value++;}
	if(abscisseSouris() >=385  && abscisseSouris() <=474 && ordonneeSouris() >= 549 && ordonneeSouris() <= 638 && l.etape==2){
		l.c3=1;
		l.value++;}
//Colonne 3
	if(abscisseSouris() >=476  && abscisseSouris() <=565 && ordonneeSouris() >= 276 && ordonneeSouris() <= 365 && l.etape==2){
		l.c4=1;
		l.value++;}
//Colonne 4
	if(abscisseSouris() >=567  && abscisseSouris() <=656 && ordonneeSouris() >= 458 && ordonneeSouris() <= 547 && l.etape==2){
		l.c5=1;
		l.value++;}
//Colonne 5
	if(abscisseSouris() >=658  && abscisseSouris() <=747 && ordonneeSouris() >= 94 && ordonneeSouris() <= 183 && l.etape==2){
		l.c6=1;
		l.value++;}
	if(abscisseSouris() >=658  && abscisseSouris() <=747 && ordonneeSouris() >= 640 && ordonneeSouris() <= 729 && l.etape==2){
		l.c7=1;
		l.value++;}
//Colonne 6
	if(abscisseSouris() >=749  && abscisseSouris() <=838 && ordonneeSouris() >= 458 && ordonneeSouris() <= 547 && l.etape==2){
		l.c8=1;
		l.value++;}
	if(abscisseSouris() >=749  && abscisseSouris() <=838 && ordonneeSouris() >= 640 && ordonneeSouris() <= 729 && l.etape==2){
		l.c9=1;
		l.value++;}
		
		return l;}
		
// reaffiche image2				 	
void reafficheIm3(var l,DonneesImageRGB *bugs ,DonneesImageRGB *daffy){	
	
	if(l.c0==1 && l.etape==2){
ecrisImage(294,94, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);}
	if(l.c1==1 && l.etape==2){
ecrisImage(294, 367, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);}
	if(l.c2==1 && l.etape==2){
ecrisImage(385, 185, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);}
	if(l.c3==1 && l.etape==2){
ecrisImage(385, 549, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);}
	if(l.c4==1 && l.etape==2){
ecrisImage(476, 276, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);}
	if(l.c5==1 && l.etape==2){
ecrisImage(567, 458, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);}
	if(l.c6==1 && l.etape==2){
	ecrisImage(658,94, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);}
	if(l.c7==1 && l.etape==2){
ecrisImage(658, 640, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);}
	if(l.c8==1 && l.etape==2){
ecrisImage(749, 458, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);}
	if(l.c9==1 && l.etape==2){
ecrisImage(749, 640, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);}	
	
}		


var general(DonneesImageRGB *lasagna,DonneesImageRGB *garfield,var l,char time[100],DonneesImageRGB *odie,DonneesImageRGB *peach,DonneesImageRGB *mario1,DonneesImageRGB *garfield1,DonneesImageRGB *mario,DonneesImageRGB *luigi,DonneesImageRGB *bugs,DonneesImageRGB *titi1,DonneesImageRGB *lola,DonneesImageRGB *bugs1,DonneesImageRGB *daffy,int r, char chaine[4],FILE* result){
			
			
			if (l.etape ==0){
				sprintf(time,"%d",l.temps);
				afficheChaine(time,35,200,75);
				afficheFond1(garfield1);
				couleurCourante(0,0,0);	
				afficheChaine("Aide Odie a retrouver garfield et ses lasagnes", 20,970,600);
				ecrisImage(1000, 200, odie->largeurImage, odie->hauteurImage, odie->donneesRGB);

				if(l.temps<=10){
				ecrisImage(295, 95, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);
				ecrisImage(295, 339, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);
				ecrisImage(417, 217, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);
				ecrisImage(417, 339, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);
				ecrisImage(417, 583, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);
				ecrisImage(539, 461, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);
				ecrisImage(539, 583, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);
				ecrisImage(661,95, garfield->largeurImage, garfield->hauteurImage, garfield->donneesRGB);
				ecrisImage(661, 461, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);
				ecrisImage(783, 217, lasagna->largeurImage, lasagna->hauteurImage, lasagna->donneesRGB);
				}
				// supprimer images au bout de 15 secondes puis reafficher quadrillage
				if(l.temps>10){		
				reafficheIm1(l,garfield ,lasagna);
				if (l.value==10 || l.temps>=40){
				
					l.etape=1;
					l.temps=0;}
					
				}	
			}
				
				
			if(l.etape==1){
				sprintf(time,"%d",l.temps);
				afficheChaine(time,35,200,75);
				afficheFond2(mario1);
				couleurCourante(0,0,0);	
				afficheChaine("Aide Peach et Daisy à retrouver Mario et Luigi", 20,970,600);
				ecrisImage(1000, 200, peach->largeurImage, peach->hauteurImage, peach->donneesRGB);

				if(l.temps<=10){
				ecrisImage(294, 198, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
				ecrisImage(294, 406, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
				ecrisImage(294, 614, mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
				ecrisImage(398,94  , mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
				ecrisImage(398, 302, mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
				ecrisImage(502, 198, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
				ecrisImage(606, 510, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
				ecrisImage(710, 302, mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
				ecrisImage(710, 614, mario->largeurImage, mario->hauteurImage, mario->donneesRGB);
				ecrisImage(814, 406, luigi->largeurImage, luigi->hauteurImage, luigi->donneesRGB);
				}
				// supprimer images au bout de 15 secondes puis reafficher quadrillage	
			
				if(l.temps>10){		
					reafficheIm2(l,luigi,mario);
				}
				if(l.value==20 || l.temps==40){
					l.etape=2;
					l.temps=0;}
		}
			
			if(l.etape==2){
				sprintf(time,"%d",l.temps);
				afficheChaine(time,35,200,75);
				afficheFond3(titi1);
				couleurCourante(0,0,0);	
				afficheChaine("Aide Lola et bugs a retrouver leurs amis", 20,970,600);
				ecrisImage(950, 200, lola->largeurImage, lola->hauteurImage, lola->donneesRGB);
				ecrisImage(1100, 200, bugs1->largeurImage, bugs1->hauteurImage, bugs1->donneesRGB);
				if(l.temps<=10){
				ecrisImage(294,94, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);
				ecrisImage(294, 367, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);
				ecrisImage(385, 185, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);
				ecrisImage(385, 549, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);
				ecrisImage(476, 276, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);
				ecrisImage(567, 458, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);
				ecrisImage(658,94, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);
				ecrisImage(658, 640, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);
				ecrisImage(749, 458, bugs->largeurImage, bugs->hauteurImage, bugs->donneesRGB);
				ecrisImage(749, 640, daffy->largeurImage, daffy->hauteurImage, daffy->donneesRGB);}
				// supprimer images au bout de 15 secondes puis reafficher quadrillage
				if(l.temps>10)
					reafficheIm3(l,bugs,daffy);
				if(l.value==30 || l.temps==40){
					l.etape=3;}
				}
			else if (l.etape==3){
				
				couleurCourante(255,128,0);
				afficheChaine("BRAVO ! Tu as termine le test !", 40, 600,500);
				afficheChaine("RESULTAT :", 40, 700,400);
				result=fopen("memory.txt","r+");
				fscanf(result,"%d",&r);
				sprintf(chaine,"%d/30",r);
				afficheChaine(chaine, 40, 1000,400);
				fclose(result);

			}
			return l;
}


void file(FILE* fichier,var l){
	fichier = fopen("memory.txt","w+");
	fprintf(fichier,"%d ",l.value);
	fclose(fichier);
}

var clicT(var l,DonneesImageRGB *garfield,DonneesImageRGB *lasagna,DonneesImageRGB *luigi,DonneesImageRGB *mario,DonneesImageRGB *bugs,DonneesImageRGB *daffy){
	if(l.etape==0)
		l=gereClicNiv1(l,garfield,lasagna );	
				
	else if(l.etape==1)
		l=gereClicNiv2(l,luigi, mario);	
	else if(l.etape==2)
		l=gereClicNiv3(l, bugs, daffy);
return l;
}
