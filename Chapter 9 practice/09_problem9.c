#include <stdio.h>

typedef struct Date
{
    int day;
    int month;
    int year;
} D; // samicolon is necessary

int compare(D d1, D d2)
{
    // if d1 is in future, return 1
    if ((d1.year == d2.year) && (d1.month == d2.month) && (d1.day == d2.day))
    {
        return 0;
    }
    if (d1.year > d2.year)
    {
        return 1;
    }
    else if (d1.year < d2.year)
    {
        return -1;
    }
    else if(d1.month > d2.month)
    {
        return 1;
    }
    else if(d1.month < d2.month)
    {
        return -1;
    }
    else if(d1.day > d2.day)
    {
        return 1;
    }
        else if(d1.day < d2.day)
    {
        return -1;
    }

}
int main()
{
    D d1 = {12, 07, 2044};
    D d2 = {02, 10, 2025};
    printf("%d\n", compare(d1, d2));

    return 0;
}