#include<stdio.h>
/*
if(condition){
	//block
}
else{
}
*/
main(){
	float cp,sp;
	printf("\n Enter the value of cp and sp");
	scanf("%f %f",&cp,&sp);
	if(sp>cp){
		printf("\n Profit and profit amount=%f",sp-cp);
	}
	else{
		printf("\n loss and loss amount =%f",cp-sp);
	}
}
