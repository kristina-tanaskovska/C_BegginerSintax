#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Card{
   int dAtack;
   char sName[30]; // Array of characters to store the name

};
//prototyping function
void display(struct Card cards[]);
void search(struct Card *pCards, int *pInput);

int main(){
    struct Card cards[4];
    struct Card *pCards = &cards[0]; // Pointing to the first element of the array
    int dInput;
    int* pInput = &dInput;

    //HARDCODING THE VALUES
    pCards->dAtack = 12;
    strcpy(pCards->sName, "Card Name"); // Copying the name to the sName member
    pCards+=1;

    pCards->dAtack = 13;
    strcpy(pCards->sName, "Card Name2"); // Copying the name to the sName member
    pCards+=1;

    pCards->dAtack = 14;
    strcpy(pCards->sName, "Card Name3"); // Copying the name to the sName member

    pCards -=2;//setting the pointer back 

   again:
   printf("\n Enter wanted threshold: ");
   scanf("%d", pInput);
   printf("%d", *pInput);
   


   if(*pInput >=0){
      display(pCards);
      printf("\n\n");
      search(pCards,pInput);

   }
   else{
      printf("\n You can only enter positive numbers");
      goto again;
   }

pCards= NULL;
pInput= NULL;
free(pCards);
free(pInput);



    return 0;
}//end main

void display(struct Card cards[]){

    for (int i = 0; i < 3;++i)
    {
      sprintf(cards[i].sName, "blaBLA%d", i + 1);
         printf("Attack: %d\n", cards[i].dAtack);
         printf("Name: %s\n", cards[i].sName);
   
    }

}//end display

void search(struct Card *pCards, int *pInput){
   for (int i = 0; i < 3; ++i){
       if(*pInput <= pCards->dAtack){
            printf("The attack damage is %d \n", pCards->dAtack);
            printf("The name is: %s\n", pCards->sName );
         }
      else{
         pCards->dAtack *= 2;
         printf("This attack was changed to %d \n", pCards->dAtack);
      }  
         pCards +=1;


   }

}
