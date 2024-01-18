/*
	A C program that we use records  to store Champion atributes
	01 Define a Struct record of this
	02 Have a variable instance of it that is local to main
	03 Allow the user to enter inputs, using another function
	04 Print atributes by using another function
	05 Use pass by VALUE to print the atributes oof the champion
	06 Change the values as if there was a patch update
	07 Us epass by REFERENCE to print the atributes of champions

	Data we need: name, passive, attributes, ulti, role, difficulty

*/
#include<stdio.h>
#include<stdlib.h>

//To be recognied as global 
struct Champion{
	char sName[25];
	char sPassive[20], sUti[20];
	int dSTR, dAGI, dINT;
	char cRole; //M, T, F
};
