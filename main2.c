#include <stdio.h>

int main (int argc, char *argv[]) {

    char text[40];
    FILE *f = fopen("C:/Users/laboratorio/Documents/archivo3.txt","r");
    if (f==NULL)
    {
        printf("No existe el archivo");
    }
    fgets(text,40,f);
    fclose(f);

    printf("%s",text);


    return 0;
}