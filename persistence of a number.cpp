#include<stdio.h>
int productofdigitex08(int n){
	if (n<10) return n;
	else return n%10 * productofdigitex08(n/10);
}
int persistencenumexo26(int n){
	if (n<10) return 0;
	else return 1 + persistencenumexo26(productofdigitex08(n));
}
int main() {
	int number ; 
	printf("enter number :");
	scanf("%d",&number);
	printf("%d",persistencenumexo26(number));
}