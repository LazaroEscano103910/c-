/*Dime un número y escribiré la tabla de multiplicar
de dicho número para tí */

#include<stdio.h>

int main(){
    //numero=input("Dime un numero del 1 al 10: ")
    int numero;
    int cont;//variable contadora
    printf("Dime un numero del 1 al 10: ");
    scanf(" %i",&numero);
    //for cont in range(1,11):
    for(cont=1;cont<11;cont++){
        printf("\n%i x %i = %i",numero,cont,numero*cont);//5 x 1 = 5
                                                      // 5 x 2 = 10
   
    }    
    return 0;

}

