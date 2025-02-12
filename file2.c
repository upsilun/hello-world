#include <stdio.h>
 
int main() 
{
    char name[50];
    int i;
    FILE *fptr, *fptr2;
 
    fptr = fopen("output.txt", "w");
    for (i = 0; i < 10; i++) 
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name);
        fprintf(fptr, "%s\n", name);
    }
    fclose(fptr);
 
    fptr = fopen("output.txt", "r");
    fptr2 = fopen("File.txt", "w");
    while (fscanf(fptr, "%s", name) != EOF) 
    {
        fprintf(fptr2, "%s\n", name);
    }
    fclose(fptr);
    fclose(fptr2);
 
    fptr2 = fopen("File.txt", "r");
    while (fscanf(fptr2, "%s", name) != EOF) 
    {
        printf("%s\n", name);
    }
    fclose(fptr2);
 
    return 0;
}
