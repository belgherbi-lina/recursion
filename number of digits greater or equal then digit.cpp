#include<stdio.h>
int greaterthendexo25(int n,int d){
	if (n<10){
		if(n>=d) return 1;
		else return 0;
	}else{
		if((n%10)>=d) return 1+greaterthendexo25(n/10,d);
		else return greaterthendexo25(n/10,d);
	}
}
main () {
	int number,digit;
	printf ("enter number");
	scanf ("%d",&number);
	printf ("enter digit");
	scanf ("%d",&digit);
	printf ("the number of digit graeter than or equal %d in this number %d is : %d",digit,number,greaterthendexo25(number,digit));
	
}