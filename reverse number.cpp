#include<stdio.h>
#include<math.h>
int reversenumberexo18(int n,int c) {
	if(n<10) return n ;
	else return (n%10)*pow(10,c) +reversenumberexo18 (n/10,c-1);
}
main () {
	int number,count;
	printf ("enter number");
	scanf ("%d",&number);
	int num=number;
		while (num!=0){
		num=num/10;
		count=count+1;
	}
	count--;
	printf ("the reverse number of this number %d is :%d",number,reversenumberexo18(number,count));
	
}