#include<stdio.h>
int div(int a,int b,int d){
	if(b>=a) return 0;
	else return 1+div(a,b*d,d+1);
}
int mod(int a ,int b){
	if(a<=b) return a;
	else return mod(a-b,b);
}
int main () {
	int a,b;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	printf("%d",a%b);
	printf("%d \n %d",div(a,b,1),mod(a,b));
}