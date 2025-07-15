#include<stdio.h>
main(){
	//datatype varible = value
	//datatype varioble
	//const datatype constname =value;
	char ch='m';//1 byte  formate=>%c
	int a=10;//4 byte formate=>%d
	float pi =3.14;//4 byte formate=>%f
	const int x=20;
	printf("\n ch=%c",ch);
	printf("\n a=%d",a);
	printf("\n pi=%f",pi);
	printf("\n x=%d",x);
	a=20;
	printf("\n a=%d",a);
}
