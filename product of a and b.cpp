#include<stdio.h>
int productofaandb(int a , int b,int d){
	if(a==1) return b;
	else return productofaandb(a-1,b+d,d);
}
int main () {
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("the product is: %d",productofaandb(a,b,b));       
}