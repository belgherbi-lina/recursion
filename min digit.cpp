#include<stdio.h>
int mindigit(int n , int d){
	if (n<10) {
		if(n<d) return n;
		else return d ;
	}
	else {
		if((n%10)<d) return  mindigit(n/10,n%10);
		else return mindigit(n/10,d);
	}
}
int main () {
	int number;
	printf("enter number:");
	scanf("%d",&number);
	printf("the min digit in this number is:%d",mindigit(number,number%10));
}