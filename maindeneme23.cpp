#include<stdio.h>

//fonk. larda fakt. hesaplama

int faktoriyel(int sayi){
	
	int fact =1;
	
	for(;sayi>0;sayi--){

       fact *=sayi;		 
	}
	
	
	return fact;
	 
}
 
 int main () {
 	 
 	 int n;
 	 
 	 printf("Faktoriyelini istediginiz sayiyi giriniz:");
 	 
 	 
 	 scanf("%d",&n);
 	 
 	 printf("faktoriyel :%d",faktoriyel(n));
 	 
 }
