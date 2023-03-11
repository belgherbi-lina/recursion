#include<stdio.h>
int sumofdigitex03(int n ){
	if (n<10)return 1 ;
	else return 1+sumofdigitex03(n/10);
}
main () 
{ 
	int number ;
	do {
	printf ("enter number");
	scanf ("%d",&number);
	}while(number<=0);
	printf ("the sum of digit of this number is :%d",sumofdigitex03(number));
}