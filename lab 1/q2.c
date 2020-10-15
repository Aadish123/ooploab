#include<stdio.h>

struct student

{
    char name[15];
    char address[15];
    int roll;
    float marks;
}
;

int main()
{
    int n;
    printf("Enter the number of students");
    scanf("%d",&n);
    struct student s[n];
    int j=0;

    for(j=0;j<n;j++)
    {
        printf("Enter the name,address,roll no and marks of student:\n");
        scanf("%s %s %d %f",s[j].name,s[j].address,&s[j].roll,&s[j].marks);
    }
    printf("\n Name \t Address \t Roll \t Marks\n");
    for(j=0;j<n;j++)
    {
        printf("%s \t %s \t %d \t %f \n",s[j].name,s[j].address,s[j].roll,s[j].marks);
    }
    return 0;
}
