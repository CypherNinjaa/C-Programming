#include <stdio.h>
#include <string.h>
typedef struct student_struct
{
    char name[20];
    char course[10];
    char sec[2];
    char enrollment[30];
} students;

int main()
{
    students stud[200];
    for (int i = 0; i < 200; i++)
    {
        printf("Enter the name of student %d : ", i + 1);
        scanf("%s", stud[i].name);

        printf("Enter the course : ");
        scanf("%s", stud[i].course);

        printf("Enter the Sec : ");
        scanf("%s", stud[i].sec);

        printf("Enter the Enrollment : ");
        scanf("%s", stud[i].enrollment);
    }

    for (int i = 0; i < 200; i++)
    {
        printf("student details of %d student : \n", i + 1);
        printf("Name : %s\n", stud[i].name);
        printf("Course : %s\n", stud[i].course);
        printf("sec : %s\n", stud[i].sec);
        printf("Enrollment : %s\n", stud[i].enrollment);
        printf("\n");
    }
    return 0;
}