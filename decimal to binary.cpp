#include<stdio.h>
#include<math.h>
int dectobin(int a ) {
	if (a==0 ||a==1){
		return a ;
	}
	else {
		return (a%2) + 10*dectobin(a/2);
	}
}

int main () {
	int number ;
	printf ("enter number ");
	scanf("%d",&number);
	printf ("number in binary is :%d",dectobin(number));
}