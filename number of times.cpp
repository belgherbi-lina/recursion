#include<stdio.h>
int numberoftimesexo19(int n,int d){
	if(n<10){
		if(n==d) return 1;
		else return 0;
	}
	else {
		if((n%10)==d) return 1+numberoftimesexo19(n/10,d);
		else return numberoftimesexo19(n/10,d);
	}
}
main () {
	int number,digit;
	printf ("enter the number:");
	scanf("%d",&number);
	printf ("enter digit:");
	scanf("%d",&digit);
	printf("the number of times is:%d",numberoftimesexo19(number,digit));
}