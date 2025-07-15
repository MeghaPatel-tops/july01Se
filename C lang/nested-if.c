#include<stdio.h>
main(){
	int maths,phy,chem,total,subtotal;
	printf("Enter the maths phy chem marks");
	scanf("%d %d %d",&maths,&phy,&chem);
	printf("\n Maths=%d \n phy=%d \nchem=%d",maths,phy,chem);
	if(maths >=65 && phy>=55 && chem>=50){
		total = maths+phy+chem;
		subtotal = maths+phy;
		printf("\n Maths+phy+chem=%d",total);
		printf("\n Maths+phy=%d",subtotal);
		if(total >=190 || subtotal >=145){
			printf("\n Eligible for admision");
		}
		else{
			printf("\n Not eligible total>190 or subtotal>145");
		}
	}
	else{
		printf("\n Not Eligible");
	}
}
