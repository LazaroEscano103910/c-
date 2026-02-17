//Haz un programa que lea 4 letras 'H','O','L','A'
//y las guarde en un vector {'H','-','O','-','L','-','A'}
//es decir la guarde en otro vector intercalando guiones
#include<stdio.h>

int main(){
    //definición de vectores y variables
    char letras[4];
    char letras_[7];
    int cont;
    //Leemos las cuatro letras
    for(cont=0;cont<4;cont++){
        printf("\nletras[%i]= ",cont);
        scanf(" %c",&letras[cont]);
    }
    //Rellenamos el vector letras_[]
    for(cont=0;cont<4;cont++){
        letras_[2*cont]=letras[cont];
   
    }
    //Ponemos los guiones en las posiciones impares
    for(cont=0;cont<7;cont++){
        if(cont%2!=0){//si cont es impar
            letras_[cont]='-';
        }
    }    
    //Las mostramos por pantalla el vector letras_[]
    for(cont=0;cont<7;cont++){    
        printf(" %c ",letras_[cont]);
    }
   
   
    return(0);    
}
