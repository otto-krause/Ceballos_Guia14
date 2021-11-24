#include <stdio.h>
#include <stdlib.h>
void main()
{ float c[3][12], imp, rLinea[3], rCoche[12], rGeneral = 0;
  int l, coc;
  for (int i = 0;i<3;i++) {
    rLinea[i] = 0;
    for (int x = 0;x<12;x++){
        c[i][x] = 0;
        rCoche[x] = 0;
        }
    }   int r=1;
        while(r==1){
        printf("Ingresar linea (1 - 3): "); scanf("%i", &l);
        if(l<1 || l>3){printf("La linea debe ser entre 1 - 3\n"); continue;
        }
        printf("Ingresar coche (1 - 12): "); scanf("%i", &coc);
        if(coc>12){printf("El coche debe estar entre 1 - 12\n");
        continue;}
        printf("Ingresar recaudacion: "); scanf("%f", &imp);
        c[l-1][coc-1]+=imp;
        printf("Desea ingresar mas datos? si = 1|no = 0\n");
        scanf("%i", &r);
        if(r!=1)break; else continue;
      }

    for (int i=0;i<3;i++) {
        for (int x=0;x<12;x++){
            rLinea[i]+=c[i][x];
            rCoche[x]+=c[i][x];
            rGeneral+=c[i][x];
        }
    }
    system("cls");
    printf("La Recuadacion total es : %0.2f\n", rGeneral);
    for(int i=0;i<3;i++){
    printf("Recuadacion Linea %i: %0.2f\n",i+1,rLinea[i]);
    }
    for (int x=0;x<12;x++){
     printf("Recuadacion Coche %i: %0.2f\n", x+1, rCoche[x]);
    }
}
