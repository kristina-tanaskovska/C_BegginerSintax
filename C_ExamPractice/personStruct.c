#include<stdio.h>

struct Person
{
	char sName[64];
	int dAge;
};
int main(int argc, char* argv[]){
	struct Person people[100];
	struct Person *pPerson = &people[100];
	for (int i = 0; i < 100; ++i)
	{
		pPerson->age=0;
		pPerson+=1;
	}
return 0;	
}