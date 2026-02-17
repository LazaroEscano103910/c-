/*Escribe las 10 tablas de multiplicar (1-10) */

#include<stdio.h>

int main(){
    //numero=input("Dime un numero del 1 al 10: ")
    int numero;
    int cont;//variable contadora
    for(numero=1;numero<=10;numero++){
        printf("\nTABLA DEL %i",numero);
        printf("\n______________________");
        for(cont=1;cont<11;cont++){
            printf("\n%i x %i = %i",numero,cont,numero*cont);//5 x 1 = 5                                              // 5 x 2 = 10
   
    }    
       
       
       
       
    }
   
    return 0;

}
