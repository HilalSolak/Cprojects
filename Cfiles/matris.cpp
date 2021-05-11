#include<stdio.h>
void matrisyap(int n[100][100],int a){
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			printf("%d. satirin %d. sutununu giriniz:",i+1,j+1);
			scanf("%d",&n[i][j]);
		}
	} for (int i=0;i<a;i++){
   	for(int j=0;j<a;j++){
   		printf("%d ",n[i][j]);
		   	   }printf("\n");
   }
}
void matristopla(int n1[100][100],int n2[100][100],int n3[100][100],int a){
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
		n3[i][j]=n1[i][j]+n2[i][j];	
}}}
void matrisizi(int d[100][100],int a){
	int iz=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(i==j){
				iz=iz+d[i][j];
			}
		}
	}printf("%d",iz);
}
int main() {
	int m1[100][100],m2[100][100],m3[100][100],x;
	printf("kaclik N X N'lik matris istersiniz:");
	scanf("%d",&x);
	matrisyap(m1,x);
	matrisyap(m2,x);
	printf("\n----------------\n");
	matristopla(m1,m2,m3,x);
	for (int i=0;i<x;i++){
   	 for(int j=0;j<x;j++){
   		printf("%d ",m3[i][j]);
		   	   
}printf("\n");
}printf("\n----------------\n");
matrisizi(m1,x);
printf("\n----------------\n");
matrisizi(m2,x);printf("\n----------------\n");
matrisizi(m3,x);
 return 0;

}
