#include<stdio.h>
int maxdigit(int n , int d){
	if (n<10) {
		if(n>d) return n;
		else return d ;
	}
	else {
		if((n%10)>d) return  maxdigit(n/10,n%10);
		else return maxdigit(n/10,d);
	}
}
int main () {
	int number;
	printf("enter digit:");
	scanf("%d",&number);
	printf("the max digit in this number is:%d",maxdigit(number,number%10));
}