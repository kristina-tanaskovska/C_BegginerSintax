/*CraftingMenu.c
Write a program that will ask the user how many pickaxes, long swords, and rejuvenation beads he
has in his inventory. The program should output the following:
(1) The maximum possible number of Tiamat items that he can craft
(2) The remaining number of items of each type after 
assume that the user’s inventory has unlimited capacity
Refer to the following sample run:

To be able to craft this item, you need to have one (1) pickaxe, one (1) long sword, and two (2)
rejuvenation beads.*/


#include<stdio.h>

struct Inventory{
	int dPixaxes;
	int dLongswords;
	int dBeads;
	int Tiamat;
};
void UserInput(struct Inventory inventory,struct Inventory *pInventory);
void MaxTiamat(struct Inventory inventory,struct Inventory *pInventory);
void LeftInInventory(struct Inventory *pInventory);

int main(){
	struct Inventory inventory;
	struct Inventory *pInventory;
	pInventory = &inventory;

	UserInput(inventory,pInventory);
	MaxTiamat(inventory,pInventory);
	LeftInInventory(pInventory);


	return 0;
}//endmain

void UserInput(struct Inventory inventory,struct Inventory *pInventory){
	//giving user instruction
	printf("\n Enter numbor of pikaxe: ");
	scanf("%d", &pInventory->dPixaxes);
	printf("\n%d", pInventory->dPixaxes);
	printf("\n Enter numbor of longswords: ");
	scanf("%d", &pInventory->dLongswords);
	printf("\n%d", pInventory->dLongswords);
	printf("\n Enter numbor of beads: ");
	scanf("%d", &pInventory->dBeads);
	printf("\n%d", pInventory->dBeads);
}//end user input

void MaxTiamat(struct Inventory,struct Inventory *pInventory){
while (pInventory->dPixaxes >=1 && (pInventory->dLongswords) >0 && (pInventory->dBeads)){
	++(pInventory->Tiamat);
	(pInventory->dPixaxes)--;
	(pInventory->dLongswords)--;
	(pInventory->dBeads) -= 2;
}
printf("\n You can currently createc  %d Tiamats.", pInventory->Tiamat);
}//end max Tialmat

void LeftInInventory(struct Inventory *pInventory){
	printf("\n You have  %d pikaxes left", pInventory->dPixaxes);
	printf("\n You have %d longswords left", pInventory->dLongswords);
	printf("\n You have %d beans left", pInventory->dBeads);
}
