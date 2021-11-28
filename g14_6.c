#include<stdio.h>
void main()
{ int p[20][6], h=0; float pp[20];
  printf("Ingrese cuantos habitantes hay por departamento: \n");
  printf("Min = 1 habitantes por piso.\nMax = 4 habitantes por piso.\n");
  for(int f=0;f<20;f++){ printf("Piso: %i\n", f+1);
  for(int x=0;x<6;x++){
  printf("Departamento %i\n",x+1);
  scanf("%i", &p[f][x]); h+=p[f][x];
  } pp[f]=(float)h/6;
  }
  printf("La cantidad de habitantes total es: %i\n",h);
  printf("El promedio de habitantes por piso es: \n");
  for(int f=0;f<20;f++){
  printf("Piso %i promedio: %0.2f\n",f+1,pp[f]);
  }
}
