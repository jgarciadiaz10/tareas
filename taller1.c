#include<stdlib.h>
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>

//utilizo sock_stream para la respuesta TCP

int main(){
 int conexion = 0;
 int socket_is = 0;
 char peticion []= "GET\r\n"; 
 char buff[100] = {0};
   socket_is = socket(PF_INET,SOCK_STREAM,0);// para respuesta tcs 
   
   struct sockaddr_in servidor;//configurar datos de servidor//
    servidor.sin_family = PF_INET;// protocolode familia
     servidor.sin_addr.s_addr = inet_addr("169.45.202.144"); //ip bancolombia
      servidor.sin_port = htons(80);// conversion del puerto 
  conexion = connect(socket_is,(struct sockaddr*)&servidor, sizeof(servidor)); //funcion para conexion
    if(conexion < 0){
      printf("NO conectado\n\r");
       return(-1);
    }
    printf("En hora buena, conexion realizada\n\r");
     send(socket_is,peticion,sizeof(peticion),0);//envío de petición
     while(recv(socket_is,buff,sizeof(buff),0 > 0)){
         printf("%s",buff);//impresión del html
     }
     close(socket_is);
      return (0);
}