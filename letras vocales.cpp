#include<stdio.h>

int main(){
    char letras[4];
    char vocales[5];
    vocales[0]='A';
    vocales[1]='E';
    vocales[2]='I';
    vocales[3]='O';
    vocales[4]='U';
    int cont;
    int cont2;
    int nvocales=0;
    //Leemos las cuatro letras
    for(cont=3;cont>=0;cont--){
        printf("\nletras[%i]= ",cont);
        scanf(" %c",&letras[cont]);
    }
    //Las mostramos por pantalla
    for(cont=0;cont<4;cont++){    
        printf(" %c ",letras[cont]);
        //Comparamos la letra con las vocales
        for(cont2=0;cont2<5;cont2++){
            if(letras[cont]==vocales[cont2]){
                nvocales++;        
            }                        
        }
    }
    printf("\n Tiene %i vocales",nvocales);
   
    return(0);    
}

