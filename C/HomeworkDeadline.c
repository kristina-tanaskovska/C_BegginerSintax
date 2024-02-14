//HomeworkDeadline.c
//To check how much time is left 
//user enters current time
//user enters deadline
//output of left minuts

#include<stdio.h>

int main(){
	//initializing variables
	int dCurrentH, dCurrentM;
	int dDeadlineH, dDeadlineM;
	int dCurrentOnlyMinutes, dDeadlineOnlyMinutes;
	int dLeft;

	printf("\n Wnter the current hour and current minutes");
	scanf("%d%d", &dCurrentH, &dCurrentM);
	dCurrentOnlyMinutes = (dCurrentH*60)+dCurrentM;

	printf("\n Wnter the deadline hour and current minutes");
	scanf("%d%d", &dDeadlineH, &dDeadlineM);
	dDeadlineOnlyMinutes = (dDeadlineH*60)+dDeadlineM;

	dLeft=dDeadlineOnlyMinutes-dCurrentOnlyMinutes;

	printf("\n You have %d minutes left", dLeft);


	return 0;
}//end main