#include <stdio.h>
#include "mystructs.h"
#include "parse_csv.c"
#include "min_max.c"

extern int parse_csv(char *buffer);
extern int min_max();

int main()
{
    FILE* data;
    char  buffer[128];

    data = fopen("Data.csv", "r");
    /* the loop will continue reading until it reaches the end of the file */
    fgets(buffer, sizeof(buffer), data);
    printf("%s", buffer);
    fgets(buffer, sizeof(buffer), data);
    while (!feof(data))
    {
        printf("%s", buffer);
        parse_csv(buffer);
        fgets(buffer, sizeof(buffer), data);
    }
    fclose(data);
    min_max();

    printf("Type anything to terminate.");
    int a;
    scanf("%d", &a);
    return 0;
}