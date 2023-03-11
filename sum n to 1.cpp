#include<stdio.h>
int sumex02(int n ){
	if (n==1)return 1 ;
	else return n+sumex02(n-1);
}
main () 
{ 
	int number ;
	do {
	printf ("enter number");
	scanf ("%d",&number);
	}while(number<=0);
	printf ("the sum of digits in this number is :%d",sumex02(number));
}