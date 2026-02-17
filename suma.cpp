/*Escribe un programa que lea números enteros y devuelva el mayor y el menor */

#include<stdio.h>

int main(){
int n[3];//esto es un vector de tres posiciones
int mayor;
int cont;
int suma=0;
//Pido al usuario que introduzca esos números
//cont++ es equivalente cont=cont+1
for(cont=0;cont<3;cont++){
    printf("\nIntroduce el numero %i: ",cont);
    scanf(" %i",&n[cont]);
}
//Mostrar los números almacenados en el vector
printf("\nLos numeros almacenados: ");
for(cont=0;cont<3;cont++){
    printf("\n n[%i]=%i",cont,n[cont]);
    suma=suma+n[cont];// suma=+n[cont]
}
printf("\nLa suma vale= %i",suma);




/*
mayor=n1;
//printf("\nHas introducido los numeros %i, %i y %i",n1,n2,n3);
if(n1>n2){
    mayor=n1;    
}
else{
    mayor=n2;
}
if(n3>mayor){
    mayor=n3;
}
printf("El mayor es el %i",mayor);*/
return 0;

}
