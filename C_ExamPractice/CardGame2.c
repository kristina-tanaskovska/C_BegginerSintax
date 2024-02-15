#include<stdio.h>
#include<stdlib.h>

struct Student {
    int rollNo, batch;
    char name[30], branch[50];
};

   

int main() {
    struct Student s[5];
    struct Student *ptr[5];
    for (int i = 0; i < 5; i++) {  //Assigning addresses of each student to the pointers
        ptr[i]=&s[i];
    }
   
    for (int i = 0; i < 5; i++) {
        printf("Enter Roll No for student %d: ", i + 1);
        scanf("%d",&s[i].rollNo);
        printf("Enter Name for Student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter Branch for Student %d: ", i + 1);
        scanf("%s", s[i].branch);
        printf("Enter Batch for Student %d: ", i + 1);
        scanf("%d", &s[i].batch);
        printf("\n");
    }
    for (int i = 0; i < 4; i++) {
    printf("Student %d:\n",i+1);    
    printf("%d\n", ptr[i]->rollNo);
    printf("%s\n", ptr[i]->name);
    printf("%s\n", ptr[i]->branch);
    printf("%d\n", ptr[i]->batch);
    }
    return 0;
}