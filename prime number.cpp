#include<stdio.h>
int primenumexo21(int n,int a){
	if(n==1 || n==2) return 1 ;
	else {
		if(n%a==0)return 0;
		else return 1+primenumexo21(n,a-1);
	}
}
main () {
	int number;
	printf("enter number:");
	scanf("%d",&number);
	if(primenumexo21(number,number/2)>=1) printf (" %d is prime",number);
	else printf(" %d not prime",number);
}