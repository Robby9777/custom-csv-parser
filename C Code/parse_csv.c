#include <stdio.h>
#include <string.h>
#include "mystructs.h"
#ifndef parsecsv
#define parsecsv
people personal_data[100];

int parse_csv(char *buffer)
{
    char *token;
    int i;
    /* Parsing the buffer string */
    token = strtok(buffer, ",");
    sscanf(token, "%hd", &i); i--;
    personal_data[i].id = i+1;
    /* i refers to the array index, which is offset -1 to ID numbers */
    token = strtok(NULL, ",");
    strncpy(personal_data[i].name, token, sizeof(personal_data[i].name));

    token = strtok(NULL, ",");
    sscanf(token, "%hd", &personal_data[i].age);

    token = strtok(NULL, ",");
    sscanf(token, "%hd", &personal_data[i].weight);
    return 0;
}
#endif
