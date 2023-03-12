#include<stdio.h>
int factex01(int n ){
	if(n==0 || n==1)return 1;
	else return n*factex01(n-1);
}
main () 
{ 
	int number ;
	do {
	printf ("enter number");
	scanf ("%d",&number);
	}while(number<0);
	printf ("the factoriel of this number is :%d",factex01(number));
}
