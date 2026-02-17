//Haz un programa que lea 8 letras
//y las guarde en un vector
//y luego sustituya las vocales por asteriscos
//es decir lee {'H','O','l','A'}
//y lo transforma en el vector en
//{'H','*','L','*'}
#include<stdio.h>

int main(){
    //definición de vectores y variables
    char letras[4];

    int cont;
    //Leemos las cuatro letras
    for(cont=0;cont<4;cont++){
        printf("\nletras[%i]= ",cont);
        scanf(" %c",&letras[cont]);
    }
     //Cambiamos las vocales por asteriscos
     for(cont=0;cont<4;cont++){
        if(letras[cont]=='A') letras[cont]='*';
        if(letras[cont]=='E') letras[cont]='*';    
        if(letras[cont]=='I') letras[cont]='*';
        if(letras[cont]=='O') letras[cont]='*';
        if(letras[cont]=='U') letras[cont]='*';
    }
    //Mostramos por pantalla las letras
    for(cont=0;cont<4;cont++)
        printf("%c ",letras[cont]);
       
   
   
   
    return(0);    
}
