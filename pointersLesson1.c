//pointer types

#include<stdio.h>

int main(){
	int a =1025;
	int *p;
	p= &a;
	printf("\n The size of integer %d in bytes", sizeof(int));
	printf("Adress %d, value %d", p, *p);


	char *p0;
	p0 =(char*)p; //put same adress of p into p0 TYPECASTING
	//1025 = 000000000 00000000 0000000100 0000000001 

	printf("\n The size of char %d in bytes", sizeof(char));
	printf("Adress %d, value %d", p, *p); //still its %d

	void *p1;
	p1 = p; //can only print adress but doesnt need typecasting

	return 0;
}