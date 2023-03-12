#include<stdio.h>
int odddigits(int n ){
	if (n<10){
		if(n%2==1)return 1;
		else return 0;
	}
	else {
		if ((n%10)%2==1)return 1+odddigits(n/10);
		else return 0+odddigits(n/10);
	}
}
main () 
{ 
	int number ;
	do {
	printf ("enter number");
	scanf ("%d",&number);
	}while(number<=0);
	printf ("the odd digits in this number is :%d",odddigits(number));
}
