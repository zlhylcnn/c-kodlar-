#include<stdio.h>

int main () {
	
//kullan�c�dan al�nan say�n�n  tek mi �ift mi oldu�unu bulan program

 int sayi ;
 
 printf ("bir sayi giriniz : ") ;
 scanf ("%d" , &sayi) ;
 
 if(sayi%2 ==0 ) //girilen sayinin 2 ile modu 0'a e�itse �ifttir
 printf ("%d sayisi cifttir ." , sayi) ;
 
 else
 
 printf ("%d sayisi tektir." , sayi) ;
 
 return 0 ;
	
}
