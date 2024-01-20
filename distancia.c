#include<stdio.h>
#include<math.h>

//função que calcula a distancia 
float calculaDistancia (int x1, int y1, int x2, int y2) {
   return sqrt( pow (x2-x1,2) + pow (y2-y1, 2));
}
//main
int main(){
 //definiçao das variaveis
 int X1,y1,x2,y2;
 float distancia;

//leitura das coordenadas dos pontos
 printf("informe as coordenadas para o primeiro ponto: ");
 scanf("%i %i", &x1, &y1)

 printf("informe as coordenadas para o sengundo ponto: ");
 scanf("%i %i", &x2, &y2)

 //calculo da distancia entre pontos
 distancia = calculaDistancia(x1,y1,x2,y2);

 //mostrar o resultado
 printf("Distancia:  %f" ,distancia);

 //nao sei o que devo fazer






}