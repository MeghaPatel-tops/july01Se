#include<stdio.h>
main(){
	int x,y;
	printf("\n Enter the value of x and y");
	scanf("%d %d",&x,&y);
	
	if(x>0 && y>0){
		printf("\nFirst");
	}
	else if(x<0 && y>0){
		printf("\nSec");
	}
	else if(x<0 && y<0){
		printf("\n Third");
	}
	else if(x>0 && y<0){
		printf("\n Forth");
	}
	else{
		printf("\n center line");
	}
	
}
