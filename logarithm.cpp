#include<stdio.h>
float logarithm(int n,int b)
{
	if (n==1) return 0 ;
	else return 1+logarithm(n/b,b);
}

int main () {
	int number ,base;
	printf("enter number :");
	scanf("%d",&number);
	printf("enter base :");
	scanf("%d",&base);
	printf("log%d(%d)=%.2f",base,number,logarithm(number,base));	
}