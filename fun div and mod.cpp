#include<stdio.h>
int div(int a,int b){
	if(a<b) return 0;
	else return 1+div(a-b,b);
}
int mod(int a ,int b){
	if(a<b) return a;
	else return mod(a-b,b);
}
int main () {
	int a,b;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	printf("%d / %d = %d\n",a,b,div(a,b));
	printf("%d mod %d=%d",a,b,mod(a,b));
}