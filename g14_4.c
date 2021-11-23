#include<stdio.h>
int main()
{ int c[3][12], tc=0, tl=0;
  for(int f=0;f<3;f++){
  for(int x=0;x<12;x++){
  printf("Ingrese lo recaudado del coche %i en la linea %i: ",x+1,f+1);
  scanf("%i", &c[f][x]);}
  }
  printf("---------------------------------------------------------------\n");
  for(int f=0;f<3;f++){
  for(int x=0;x<12;x++){
  tc+=c[f][x];
  tl+=c[f][x];
  printf("La recaudacion total del coche %i en la linea %i es: %i\n",x+1,f+1,c[f][x]);
  }
     printf("La recaudacion total de la linea %i es: %i\n",f+1,tl);
  }
  printf("La recaudacion total general es: %i\n", tc+tl);
  return 0;
}
