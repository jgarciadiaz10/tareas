#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b){  //creo la funcion
      return(a+b);// retorna la suma
}

int main (){
 printf("la suma de 2 y 3 es %d\r\n",sum(2,3));// llamo la funciòn
  return 0;
}