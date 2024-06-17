#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
 int x ;
 int ortalama ;
 int tamsayi [4] ;
 for (int i =0 ; i<5 ; i++ ) {
 	printf ("bir tamsayi giriniz  /n ") ;
 	scanf ("%d" , &x ) ;
 	tamsayi [i] =x ;
 	
 }
ortalama =(tamsayi[0] + tamsayi [1] +tamsayi [2] +tamsayi [3] + tamsayi [4]) /5 ;
printf ("sayilarin ortalamasi = %d " , ortalama ) ;

	
	return 0;
}
