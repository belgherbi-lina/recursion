#include<stdio.h>
#include<math.h>
int bintodec(int a ) {
	if (a==0 ||a==1){
		return a ;
	}
	else {
		return (a%10) + 2*bintodec(a/10);
	}
}

int main () {
	int number ;
	printf ("enter number ");
	scanf("%d",&number);
	printf ("number in decimal is :%d",bintodec(number));
}