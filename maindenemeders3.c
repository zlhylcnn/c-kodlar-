#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *dosyaoku;
	char karakter[20];
	int vize,final,ortalama;
	
	dosyaoku=fopen("deneme.txt","r" );
	while(fscanf(dosyaoku,"%s %d %d",karakter,&vize,&final,&ortalama)!=EOF) 
    {
    printf("okunan : %s \n",karakter) ;
    printf("okunan vize : %d \n",vize);
    printf("okunan final: %d \n",final);
    ortalama=vize*0.4+final*0.6;
    printf("ortalama %d \n ",ortalama);
    
    
		}
	return 0 ;	
	
}
