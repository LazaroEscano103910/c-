#include<stdio.h>

int main(){
    char letras[4];
    int cont;
    //Leemos las cuatro letras
    for(cont=3;cont>=0;cont--){
        printf("\nletras[%i]= ",cont);
        scanf(" %c",&letras[cont]);
    }
    //Las mostramos por pantalla
    for(cont=0;cont<4;cont++){    
        printf(" %c ",letras[cont]);
    }
   
   
    return(0);    
}
