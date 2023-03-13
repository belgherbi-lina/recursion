#include<stdio.h>
int sumoffirtofoddnumberexo17(int n) {
	if(n==1) return 1 ;
	else {
		if(n%2==1) return n+sumoffirtofoddnumberexo17(n-2);
		else return sumoffirtofoddnumberexo17(n-1);
	}
}
main () {
	int number;
	printf ("enter number");
	scanf ("%d",&number);
	printf ("the sum of the firts odd number :%d",sumoffirtofoddnumberexo17(number));
	
}