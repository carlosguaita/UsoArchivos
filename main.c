#include <stdio.h>

int main (int argc, char *argv[]) {
    char nombre[40];
    printf("Ingrese un texto: ");
    fgets(nombre,40,stdin);
    FILE *f = fopen("C:/Users/laboratorio/Documents/archivo3.txt","w");
    if (f==NULL)
    {
        printf("No existe el archivo");
    }
    fprintf(f,"%s",nombre);
    fclose(f);

    
    
    return 0;
}