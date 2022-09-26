#include <stdio.h>

extern people personal[100];

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

    i = sizeof(personal)/sizeof(personal[0]);
    max = personal[0].age;
    min = max;
    sum = max;
    for (int n = 1; n < i; n++)
    {
        sum += personal[n].age;
        if (personal[n].age > max)
        {
            max = personal[n].age;
            maxi = n+1;
        }
        else if   (personal[n].age < min)
        {
            min = personal[n].age;
            mini = n+1;
        }
    }
    avg = (double)sum / i;

    printf("The lowest  age is: %s (#%d), who is %d years old.\n", personal[mini].name, mini, min);
    printf("The highest age is: %s (#%d), who is %d years old.\n", personal[maxi].name, maxi, max);
    printf("The average age is: %.2f\n", avg);
    return 0;
}
