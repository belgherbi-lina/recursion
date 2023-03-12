#include<stdio.h>
int productofdigitex08(int n){
	if (n<10) return n;
	else return n%10 * productofdigitex08(n/10);
}

main () 
{
	int number ;
	printf ("enter number");
	scanf("%d",&number);
	printf ("product of digits of this number is :%d",productofdigitex08(number));
	
}
