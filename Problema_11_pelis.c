#include<stdio.h>
#include<stdlib.h>
int main(){
    //Bloque de declaracion de variables
    int i;
    float precio=1, suma=0, sumap, max;
    //Bloque de instrucciones
    printf("Contamos con la promocion de 2*3, \nlleve tres peliculas por el precio de las dos mas baratas!!!");
    while(precio>0){
        printf("\nIngrese el precio de la pelicula o presione 0 para ver su factura: ");
        scanf("%f",&precio);
        i++;
        suma=suma+precio;
        if(i==1){
            max=precio;
        }
        if(precio>max){
            max=precio;
        }
        if(i%3==0){
            //Aqui ocurre la promocion
            suma=suma-max;
        }
    }
    i-=1;
    if(i%3==0){
        printf("\nUsted recibe la promocion");
    }
    printf("\nEl precio a pagar es de: %.2f", suma);
    return 0;
}
