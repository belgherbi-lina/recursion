#include<stdio.h>
bool odddigitex07(int n ){
	if (n<10){
		if(n%2==1)return true;
		else return false;
	}else {
		if ((n%10)%2==1)return odddigitex07(n/10);
		else  return false;
	}
}
main () 
{ 
	int number ;
	do {
	printf ("enter number");
	scanf ("%d",&number);
	}while(number<=0);
	if (odddigitex07(number)==true)printf ("is an odd number");
	else printf ("doesn't odd number");
}
