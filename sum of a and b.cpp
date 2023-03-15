#include<stdio.h>
int sumofaandb(int a , int b){
	if(a==1) return b+1;
	else return sumofaandb(a-1,b+1);
}
int main () {
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	printf("the sum is: %d",sumofaandb(a,b));
}