#include <stdio.h>

int main()
{
    /*
    Quick Quiz: Write a program to find grade of a student given his mark based on below:
        90 - 100 => A
        80 - 89 => B
        70 - 79 => C
        60 - 69 => D
        50 - 59 => E
        <50 => F
    */
    char grade;
    int marks = 65;

    if (marks >= 90 && marks <= 100)
        grade = 'A';
    else if (marks >= 80)
        grade = 'B';
    else if (marks >= 70)
        grade = 'C';
    else if (marks >= 60)
        grade = 'D';
    else if (marks >= 50)
        grade = 'E';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);
    return 0;
}