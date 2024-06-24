#include <stdio.h>

int main (int argc, char *argv[]) {

    char productos[10][3][40];

    FILE *f = fopen("C:/Users/laboratorio/Documents/archivo3.txt","r");
    if (f==NULL)
    {
        printf("No existe el archivo");
    }


    for (int i = 0; i < 10; i++)
    {
        fscanf(f,"%s %s %s",productos[i][0],productos[i][1],productos[i][2]);
    }
    fclose(f);

    
    for (int i = 0; i < 10; i++)
    {
        printf("%s %s %s\n",productos[i][0],productos[i][1],productos[i][2]);
    }

    return 0;
}