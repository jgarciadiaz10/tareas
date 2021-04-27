#include<stdio.h>
#include<stdlib.h>

int ohm(int i, int r){
 return(i*r); 
}

int wat(int i, int r){
 return((i*i)*r);
}


int main(){
  printf("2 amp por 3 ohmios es %d voltios\r\n",ohm(2,3));
  printf("potencia del circuito %d watts\r\n",wat(2,3);
  return(0);  
}


