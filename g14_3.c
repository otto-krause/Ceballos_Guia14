#include<stdio.h>
int main()
{int v[2][3], m, t=0;
 for(int f=0;f<2;f++){
 for(int x=0;x<3;x++){
 printf("Ingrese el valor de v%i%i: ",f,x); scanf("%i", &v[f][x]);
 }
}
 m=v[0][0];
 for(int f=0;f<2;f++){
 for(int x=0;x<3;x++){
 if(v[f][x]<m){m=v[f][x];}
 t+=v[f][x];
 }
}
printf("El menor elemento de la matriz es: %i\nLa suma de todos los elementos de la matriz es: %i\n",m,t);
 for(int f=0;f<3;f++){
 v[0][f]*=4;}
 for(int f=0;f<2;f++){
 v[f][2]*=3;}
 printf("La matriz modificada queda: \n");
 for(int f=0;f<2;f++){
 for(int x=0;x<3;x++){
 printf("%i\t ",v[f][x]);
 } printf("\n");
}
return 0;
}

