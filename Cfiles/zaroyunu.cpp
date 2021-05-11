#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int rastgelezartoplam(){
	srand(time(0));
	int zar1=1+rand()%6;
	int zar2=1+rand()%6;
	return zar1+zar2;
}
int main(){
	 int tur=2;
	srand(time(0));
	int puan=0;
	int toplam=rastgelezartoplam();
	printf("%d",toplam);
	if(toplam==7||toplam==11){
		printf("\nKazandiniz toplam=%d",toplam);
	}else if(toplam==2||toplam==3||toplam==12){
		printf("\nKaybettiniz toplam=%d",toplam);
	}else{
		puan=toplam;
	}
	do{
		toplam=rastgelezartoplam();
		puan=puan+toplam;
		tur++;
		if(toplam==7){
			printf("\n %d tur Kaybettiniz puan=%d",tur,puan);break;
		}if(toplam==puan){
			printf("\n %d tur Kazandiniz puan=%d",tur,puan);break;
		}
	}while(toplam!=puan);
	return 0;
}
