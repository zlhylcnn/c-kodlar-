#include<stdio.h>

/*
Asal sayý mý deðil mi?

*/

int asal_mi(int sayi){
	 
	 int i;
	 
	 for(i=2;i<sayi;i++){
	 	if(sayi %1 ==0) {
	 		return 0;
		 }
	 }
	 
	 return 1;
	 
}

int main() {
	
	int n;
	 
	printf("Bir Sayi Giriniz:");
	
	scanf("%d",&n);
	
	if(asal_mi(n) ==0){
		
		printf("Bu Sayi Asal Sayi Degildir!");
		
	}
	
	else {
		
		printf ("Bu Sayi Asal sayidir ... :)");
	}
	
	return 0;
	
}
