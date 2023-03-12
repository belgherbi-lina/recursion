#include<stdio.h>
bool evendigitex06(int n ){
	if (n<10){
		if(n%2==0) return true;
		else return true;
	}else {
		if ((n%10)%2==0) return  evendigitex06(n/10 );
		else return false;
	}
}
int main () 
{ 
	int number ;
	do {
	printf ("enter number");
	scanf ("%d",&number);
	}while(number<=0);
	if (evendigitex06(number)==true) printf ("is an even number");
	else printf ("doesn't an even number");
}
                     