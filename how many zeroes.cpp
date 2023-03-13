#include<stdio.h>
int factex01(int a ){
	if (a==1) return 1 ;
	else return a*factex01(a-1);
}
int howmanyzeroesexo20(int n ){
	if(n<10){
		if(n==0) return 1 ;
		else return 0;
	}
	else {
		if((n%10)==0) return 1+howmanyzeroesexo20(n/10);
		else return 0 ;
	}
}
main () {
	int number ;
	printf("enter number:");
	scanf("%d",&number);
	printf ("number of zeroes in this number %d is : %d",number,howmanyzeroesexo20(factex01(number)));
	
}