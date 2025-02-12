#include <stdio.h>
 
int main() 
{
    char name[50];
    int i;
    FILE *fptr;
 
    fptr = fopen("output.txt", "w");
    for (i = 0; i < 10; i++) 
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name);
        fprintf(fptr, "%s\n", name);
    }
    fclose(fptr);
 
    fptr = fopen("output.txt", "r");
    i = 0;
    while (fscanf(fptr, "%s", name) != EOF) 
    {
        printf("%s\n", name);
        i++;
    }
    fclose(fptr);
 
    return 0;
}
