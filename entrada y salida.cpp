/*Recordatorio de estructuras de programacion
de Python-> C*/
#include<stdio.h>
//Programa que te pregunta: ¿Quieres continuar (s/n)?
//Si la respuesta es 's', vuelve a preguntar si quieres continuar
//Si la respuesta es 'n', dice "Hasta luego Lucas"
int main(){
    char respuesta='s';//Definimos las variables
    while(respuesta=='s'){
        printf("Quieres continuar (s/n)?: ");//saca por pantalla un mensaje
        scanf(" %c",&respuesta);//Lee la respuesta
        if(respuesta=='n'){
            printf("Hasta luego Lucas");
        }    
    }
    return 0;
   
   
   
   
}
