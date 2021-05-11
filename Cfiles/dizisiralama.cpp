#include<stdio.h>
#include<conio.h>
int diziolusturma(int a[],int sol,int sag){
	int i=sol,j=sag,temp,pivot=a[(sol+sag)/2];
	while(i<=j){
		while(a[i]<pivot) i++;
		while(a[j]>pivot) j--;
		if(i<=j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j--;
		}
	}if(sol<j)
	  return diziolusturma(a,sol,j);
	if(i<sag)
	  	 return diziolusturma(a,i,sag);
}

int main(){
	int n,dizi[100];
	printf("dizinin boyutunu giriniz:");
	scanf("%d",&n);
	printf("****Lutfen dizinin %d elemanini da asagida giriniz***\n",n);
	for(int i=0;i<n;i++){
		printf("eleman giriniz:");
		scanf("%d",&dizi[i]);
	}printf("algoritma calismadan once dizi= ");
	for(int j=0;j<n;j++){
	  printf("%d ",dizi[j]);	
	}
	diziolusturma(dizi,0,n-1);
	printf("\nalgoritma calistiktan sonra dizi= ");
	for(int j=0;j<n;j++){
	  printf("%d ",dizi[j]);	
	}return 0;
}
