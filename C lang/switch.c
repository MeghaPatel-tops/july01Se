#include<stdio.h>
main(){
	char choice;
	int a,b;
	printf("\n Enter + for add");
	printf("\n Enter - for sub");
	printf("\n Enter * for mul");
	printf("\n Enter / for div");
	
	printf("\n enter your choice");
	scanf("%c",&choice);
	
	printf("\n enter the value of a and b");
	scanf("%d %d",&a,&b);
	
	
	switch(choice){
		case '+':
			printf("\n addition =%d",a+b);
		break;	
		case '-':
			printf("\n sub=%d",a-b);
		break;
		case '*':
			printf("\n mul=%d",a*b);
		break;
		case '/':
			printf("\n div=%d",a/b);
		break;
		default:
			printf("Wrong choice");
		break;				
	}
	
}
