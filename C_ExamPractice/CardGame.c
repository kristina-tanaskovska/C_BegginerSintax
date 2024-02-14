/*
search function done
Checks for negative values
prints some variables from structs
*/
#include<stdio.h>
struct Card{
//initializing attributes/varaibles
int dID, dLevel, dATK, dDEF;
char sName[30], sAttribute, sType;
};
//prototyping functions
void Search(int* pInput, int* pCards);
void Display(int* pInput, int* pCards);

int main(){
//initializing variables
int dInput;
int *pInput = &dInput; //assigning pointer
struct Card cards[100]; // assuming that there are 100 cards
int pCards[100];


for (int i = 0; i < 100; ++i)
{
   cards[i].dATK = i;
   //cards[i].sName[0] = 'Name '+i
   //cards[i].sType = 'Name';
   
pCards[i] = cards[i].dATK; //assigning a pointer to each element of the array
}//end for

printf("\n Enter the attack damage you want filtered: "); //gives user instructions
scanf("%d", pInput); //takes in user input

//   Search(int pInput, int *pCards);//calling search function

if(dInput >=0){ //checks if correct input
Search(pInput, pCards);//calling search function
} //end if
else{
printf("\n Wrong input, positive numbers only"); //gives further input instructuions
}//end else

   Display(pInput, pCards); //calling Display function

 return 0;
}//end main

void Search(int* pInput, int* pCards){
//initializing counter
int dCounter= 0;
for (int i = 0; i<100; i++){ //i assume that there are 100 yugio cards to be searched in the database
if(*pInput <= pCards[i] ){ //checs for higher atack then the inputed attack
   //printf("\n %d", pCards[i]); // prints out how many found
    dCounter++; //incriment found matches
}//end if
}//end for
printf("\nYour search yealded: %d results", dCounter); // prints out how many found
printf("\n");
}// end search function

void Display(int* pInput, int* pCards){
for (int i = 0; i<100; i++){ //i assume that there are 100 yugio cards to be searched in the database
if(*pInput <= (pCards[i])){ //checs for higher atack then the inputed attack
printf("%d, ", pCards[i]); //prints by value with the dot
//printf(" \n %s ",pCards[i].sName ); // uses s because we use complex tipe string with characters
//to display every variable the code would add more printed
}//end if
}//end for

}//end display function