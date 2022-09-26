#include <stdio.h>
#include <string.h>
#include "mystructs.h"
#include "parse_csv.c"
#include "min_max.c"

extern int parse_csv(char *buffer);
extern int min_max();

people personal[100];

int main()
{
    FILE* data;
    char  buffer[128];

    data = fopen("Data.csv", "r");
    /* the loop will continue reading until it reaches the end of the file */
    fgets(buffer, sizeof(buffer), data);
    fgets(buffer, sizeof(buffer), data);
    while (!feof(data))
    {
        parse_csv(buffer);
        fgets(buffer, sizeof(buffer), data);
    }
    fclose(data);
    min_max();

    

    return 0;
}
