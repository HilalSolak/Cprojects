#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int rastgelezar(){
	
	return 1+rand()%6;
}
int main(){
	int rastgele;
	srand(time(0)); 
	int sayac1=0,sayac2=0,sayac3=0,sayac4=0,sayac5=0,sayac6=0;
	for(int i=0;i<10;i++){
	 int rastgele=rastgelezar();
	 switch(rastgele){
	 	case 1: sayac1++; break;
	 	case 2: sayac2++; break;
	 	case 3: sayac3++;break;
	 	case 4: sayac4++; break;
	 	case 5: sayac5++;break;
	 	case 6: sayac6++;break;
	 }
}
	printf("\n %d kere 1 atildi",sayac1);
	printf("\n %d kere 2 atildi",sayac2);
	printf("\n %d kere 3 atildi",sayac3);
	printf("\n %d kere 4 atildi",sayac4);
	printf("\n %d kere 5 atildi",sayac5);
	printf("\n %d kere 6 atildi",sayac6);
	return 0;
}
