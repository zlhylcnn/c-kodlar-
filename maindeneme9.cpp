#include<stdio.h>
#define PI 3.14
//k�renin yaricapini kullan�c�dan isteyip hacmimi bulan program
85
int main () {
	
	
	int yaricap ;
	float hacim ;
	
	printf("kurenin yaricapini giriniz :") ;
	scanf("%d" , &yaricap) ;
	
	hacim = (4/3.0) *PI*(yaricap*yaricap*yaricap) ;
	printf("kurenin hacmi %f 'dir " , hacim ) ;
	
	return 0 ;
	
}
