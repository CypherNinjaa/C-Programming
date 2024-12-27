#include <stdio.h>

typedef struct date
{
    int mm;
    int dd;
    int yyyy;
} ddc;
int comapre(ddc d1, ddc d2);
int main()
{
    ddc d1 = {12, 4, 2004};
    ddc d2 = {11, 4, 2012};
    printf("%d", comapre(d1, d2));
    return 0;
}
int comapre(ddc d1, ddc d2)
// if d1 is in the future return 1;
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.mm)
    {
        return 1;
    }
    else if (d1.dd < d2.mm)
    {
        return -1;
    }
}