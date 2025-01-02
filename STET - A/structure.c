#include <stdio.h>
#include <string.h>
typedef struct studentstructure
{
    char name[20];
    char enrollment[30];
    char course[10];
    char semester[10];
} stud;
int main()
{
    stud students[200];
    for (int i = 0; i <= 200; i++)
    {
        printf("....Enter details of %d student....\n", i);
        printf("Enter the name : ");
        scanf("%s", students[i].name);

        printf("Enter the Enrollment : ");
        scanf("%s", students[i].enrollment);

        printf("Enter the course : ");
        scanf("%s", students[i].course);

        printf("Enter the semester : ");
        scanf("%s", students[i].semester);
    }
    printf("\n");
    for (int i = 0; i <= 200; i++)
    {
        printf(".... details of %d student....\n", i);
        printf("Name : %s\n", students[i].name);
        printf("Enrollment : %s\n", students[i].enrollment);
        printf("Course : %s\n", students[i].course);
        printf("Semester : %s\n", students[i].semester);
        printf("\n");
    }

    return 0;
}