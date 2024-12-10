#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int age;


};

int main(){
        
    struct student student[5];
    
int c,age;
int i =1;
    
    char names[100];
for ( i = 1; i <= 5; i++)
{
    printf("enter the name of the %d st student\n",i);
    scanf("%s",&names);
    printf("enter the age of the student");
    scanf("%d",&age);
    strcpy(student[i].name,names);
    student[i].age = age;
    
}
printf("enter the student's roll number to get details of\n");
scanf("%d", &c);

printf("%s\n",student[c].name);
printf("%d\n",student[c].age);





    



}
