/*PokeDex.c
*/
#include<stdio.h>
#include<stdlib.h>

struct Pokedex{
	char cName[30], cType;
	int dHP, dAttack, dDeffence,dLevel;
	float fRPE;

};

//prototyping functions
void AddPokemon(struct Pokedex *p_pokemons);
void DisplayPokemons(struct Pokedex *p_pokemons, struct Pokedex pokemons[]);

int main(){
 struct Pokedex pokemons[100];
 struct Pokedex *p_pokemons = &pokemons[100];
AddPokemon(p_pokemons);
DisplayPokemons(p_pokemons, pokemons);

//p_pokemons= NULL;
//free(p_pokemons);
	return 0;
}//end main


void AddPokemon(struct Pokedex *p_pokemons){
printf("\n Enter Name: ");
//scanf(" %s", p_pokemons->cName[0]);
printf("\n Enter Type: ");
//scanf(" %s", p_pokemons->cType[0]);

printf("\n Enter HP: ");
scanf("%d", &p_pokemons->dHP);
printf("\n Enter Attack: ");
scanf("%d", &p_pokemons->dAttack);
printf("\n Enter Defence: ");
scanf("%d", &p_pokemons->dDeffence);
printf("\n Enter Level: ");
scanf("%d", &p_pokemons->dLevel);
printf("%d", p_pokemons->dLevel);

++(p_pokemons);
printf("Succesfully added pokemon\n");
}//end add pokemon

void DisplayPokemons(struct Pokedex *p_pokemons, struct Pokedex pokemons[]){
p_pokemons = &pokemons[100];
for(int i=0; i<10; i++){
(p_pokemons)++;
printf("\n  Name: ");
//scanf(" %s", p_pokemons->cName[0]);
printf("\n  Type: ");
//scanf(" %s", p_pokemons->cType[0]);

//printf("\n  HP: %d ", *pokemons[i].dHP);
printf("\n  Attack: %d ", p_pokemons->dAttack);
printf("\n  Defence: %d ",p_pokemons->dDeffence);
printf("\n  Level: %d", p_pokemons->dLevel);

}//end for 

}//end display