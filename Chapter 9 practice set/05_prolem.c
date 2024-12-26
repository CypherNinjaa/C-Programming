#include <stdio.h>
typedef struct complex
{

    int imaginary;
    int real;
} c;
void display(c c1);
int main()
{
    c crr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part \n");
        scanf("%d", &crr[i].real);

        printf("Enter the imaginary part \n");
        scanf("%d", &crr[i].imaginary);

        display(crr[i]);
    }

    return 0;
}
void display(c c1)
{
    printf("The value of comple number is %d + %di \n", c1.real, c1.imaginary);
}