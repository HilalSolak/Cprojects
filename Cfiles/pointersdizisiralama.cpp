#include<stdio.h>
void degis(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void sort(int *aptr){
	 int i,j;
	 for(i=0;i<6;i++){
	 	for(j=0;j<6;j++){
	 		if(aptr[j]>aptr[j+1]){
	 			degis(&aptr[j],&aptr[j+1]);
			 }
		 }
	 }
}
int main(){
	int d[7]={5,2,7,20,10,1,30};
	int i;
	sort(d);
	for(i=0;i<7;i++){
	 printf("%d, ",d[i]);
	}return 0;
}
