#include <stdio.h>
#include <string.h>

extern people personal[100];

int parse_csv(char *buffer)
{
    char *token;
    int i;
    /* Parsing the buffer string */
    token = strtok(buffer, ",");
    sscanf(token, "%d", &i); i--;
    personal[i].id = i+1;
    /* i refers to the array index, which is offset -1 to ID numbers */
    token = strtok(NULL, ",");
    strncpy(personal[i].name, token, sizeof(personal[i].name));

    token = strtok(NULL, ",");
    sscanf(token, "%d", &personal[i].age);

    token = strtok(NULL, ",");
    sscanf(token, "%d", &personal[i].weight);

    printf("ID: %-3d Name: %-20s Age: %-3d Weight: %-3d\n", personal[i].id, personal[i].name, personal[i].age, personal[i].weight);
    return 0;
}
