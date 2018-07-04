#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll_no;
    char name[20];

}*obj;
void main()
{
    //using malloc function
    obj=(struct student*)malloc(sizeof(struct student)*3);
    //using for loop to take input from user
    for(int i=0; i<3; i++)
    {
        printf("enter student roll no and name");
        scanf("%d %s",&obj[i].roll_no,obj[i].name);

    }
    //using for loop to display data on screen
    for(int j=0; j<3; j++)
    {

        printf("rollno :%d\n name :%s\n",obj[j].roll_no,obj[j].name);
    }
}
