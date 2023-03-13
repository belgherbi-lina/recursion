#include<stdio.h>
bool containsdexo14(int n,int d){
	if(n<10){
		if(n==d)return true ;
		else return false;
	}
	else {
		if((n%10)==d) return true ;
		else return containsdexo14(n/10,d);
	}
}
main () 
{
	int number,digit;
	printf ("enter number :");
	scanf ("%d",&number);
	printf ("enter digit: ");
	scanf ("%d",&digit);
	if(containsdexo14(number,digit)==true)printf ("digit %d contains in number %d",digit,number);
	else printf ("this digit %d doesn't contain in this number %d",digit,number);
}