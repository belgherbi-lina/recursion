#include<stdio.h>
int dectobin(int a ) {
	if (a==0 ||a==1)return a ;
	else return (a%2) + 10*dectobin(a/2);
}
int numofbits1(int a){
	if(a==0) return 0;
	else {
		if((a%10)==1) return 1+numofbits1(a/10);
		else return numofbits1(a/10);
	}
}
int main () {
	int number ;
	printf("enter number :");
	scanf("%d",&number);
	printf("number in binary:%d \n number of bits set to 1:%d",dectobin(number),numofbits1(dectobin(number)));
}