#include<stdio.h>
int sumofdigitex08(int n){
	if (n<10) return n;
	else return n%10 + sumofdigitex08(n/10);
}

main () 
{
	int number ;
	printf ("enter number");
	scanf("%d",&number);
	printf ("sum of digits of this number is :%d",sumofdigitex08(number));
	
}
