#include<stdio.h>

int main () {
	
//kullanýcýdan alýnan sayýnýn  tek mi çift mi olduðunu bulan program

 int sayi ;
 
 printf ("bir sayi giriniz : ") ;
 scanf ("%d" , &sayi) ;
 
 if(sayi%2 ==0 ) //girilen sayinin 2 ile modu 0'a eþitse çifttir
 printf ("%d sayisi cifttir ." , sayi) ;
 
 else
 
 printf ("%d sayisi tektir." , sayi) ;
 
 return 0 ;
	
}
