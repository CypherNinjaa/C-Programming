#include <stdio.h>
// fun prototype
float force(float, float);

int main()
{
    float m, g = 9.8;
    printf("Enter the mass = ");
    scanf("%f", &m);
    force(m, g);

    return 0;
}
float force(float m, float g)
{
    float f = m * g;
    printf("Force = %.2f", f);
}