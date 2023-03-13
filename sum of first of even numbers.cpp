#include<stdio.h>
int sumoffirtofevennumberexo16(int n) {
	if(n==0) return 0 ;
	else {
		if(n%2==0) return n+sumoffirtofevennumberexo16(n-2);
		else return sumoffirtofevennumberexo16(n-1);
	}
}
main () {
	int number;
	printf ("enter number");
	scanf ("%d",&number);
	printf ("the sum of the firts even number :%d",sumoffirtofevennumberexo16(number));
	
}