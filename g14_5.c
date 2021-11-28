#include<stdio.h>
const int c=4;
int main()
{ int v[3][c];
  for(int f=0;f<3;f++){
  for(int x=0;x<c;x++){
  printf("Ingrese la nota del alumno %i en el trimestre %i: \n",x+1,f+1);
  scanf("%i", &v[f][x]); }
  }
  int r;
  printf("Desea corregir una nota? [si = 1|no = 0] \n"); scanf("%i", &r);
  while(r==1){
      int l, t, n;
      printf("Ingrese el legajo y el trimestre a modificar: \n");
      scanf("%i %i", &l, &t);
      printf("Ingrese la nueva nota: "); scanf("%i", &n);
      v[t-1][l-1]=n; printf("Esta seguro/a que desea cambiar la nota %i por %i? [si = 1|no = 0]", v[3][c], n);
      int d; scanf("%i", &d); if(d==1){
      imprimir(3,c,v);} else {
      printf("Desea continuar? [si = 1|no = 0] \n");
      int ch; scanf("%i", &ch); if(ch=1)continue;
      else {break;}
      }
return 0;
   }
}
void imprimir(int a, int b, int x[3][c])
{ printf("\tPrimer \tSegundo \tTercer\n");
  int p=0;
  for(int f=0;f<a;f++){
     printf("%i\t",f+1);
  for(int z=0;z<b;z++){
    printf("%i\t",x[f][z-1]);
    p+=x[f][z];
    }
    printf("%i", p/3);
    printf("\n");
    }
  }
