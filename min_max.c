#include <stdio.h>
#include "mystructs.h"
#include "parse_csv.c"
#ifndef minmax
#define minmax
int min_max()
{
    /*mini > index for the min age */
    /*minp > char string with the min age person's name*/
    /*maxi > index for the max age*/
    /*maxp > char string with the max age person's name*/
    int i, num, sum;
    int min, mini, max, maxi;
    double avg;
    char minp[24], maxp[24];

    i = sizeof(personal_data)/sizeof(personal_data[0]);
    max = personal_data[0].age;
    min = max;
    sum = max;
    for (int n = 1; n < i; n++)
    {
        sum += personal_data[n].age;
        if (personal_data[n].age > max)
        {
            max = personal_data[n].age;
            maxi = n+1;
        }
        else if   (personal_data[n].age < min)
        {
            min = personal_data[n].age;
            mini = n+1;
        }
    }
    avg = (double)sum / i;

    printf("The lowest  age is: %s (#%d), who is %d years old.\n", personal_data[mini].name, mini, min);
    printf("The highest age is: %s (#%d), who is %d years old.\n", personal_data[maxi].name, maxi, max);
    printf("The average age is: %.2f\n", avg);
    return 0;
}
#endif