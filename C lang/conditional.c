#include<stdio.h>
main(){
	int num;
	printf("\n enter the value of num");
	scanf("%d",&num);
	//(condition)?(true):(flase);
	(num > 0)?printf("\n positive"):printf("\n negative");
	
	(num%2==0)?printf("\n even"):printf("\n Odd");
	
}
