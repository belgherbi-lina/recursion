#include<stdio.h>
int evendigits(int n ){
	if (n<10){
		if(n%2==0)return 1;
		else return 0;
	}
	else {
		if ((n%10)%2==0)return 1+evendigits(n/10);
		else return 0+evendigits(n/10);
	}
}
main () 
{ 
	int number ;
	do {
	printf ("enter number");
	scanf ("%d",&number);
	}while(number<=0);
	printf ("the even digits in this number is :%d",evendigits(number));
}
