#include<stdio.h>
int main()
{int v[2][3];
 for(int f=0;f<2;f++){
 for(int x=0;x<3;x++){
 printf("Ingrese el valor de v%i%i: ",f,x); scanf("%i", &v[f][x]);
 }
}
 for(int f=0;f<3;f++){
 v[0][f]*=4;}
 for(int f=0;f<3;f++){
 v[1][f]*=3;}
 for(int f=0;f<2;f++){
 for(int x=0;x<3;x++){
 printf("%i\t ",v[f][x]);
 }printf("\n");
}
return 0;}
