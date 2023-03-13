#include<stdio.h>
#include<math.h>
int sumoffirtsqrtnumex24(int n){
	if(n==1 || n==0) return n ;
	else return  pow(n,2)+sumoffirtsqrtnumex24(n-1);
}
main (){
	int number;
	printf ("enter number:");
	scanf("%d",&number);
	printf ("the sum of the first %d squart is :%d",number,sumoffirtsqrtnumex24(number));
}