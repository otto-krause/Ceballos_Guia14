#include <stdio.h>
#include <stdlib.h>
void main()
{ float c[3][12], imp, rLinea[3], rCoche[12], rGeneral = 0;
  int i, x, linea, continuar, coche;
  for (i = 0;i<3;i++) {
    rLinea[i] = 0;
    for (x = 0;x<12;x++){
        c[i][x] = 0;
        rCoche[x] = 0;
        }
    }
        for(int i=0;i<3;i++){
        printf("Ingresar linea ( 1 - 3): "); scanf("%d", &linea);
        for(int x=0;x<12;x++){
        printf("Ingresar coche ( 1 - 12): "); scanf("%d", &coche);
        printf("Ingresar recaudacion: "); scanf("%f", &imp);
        c[linea-1][coche-1] += imp;
        }
      }

    for (i = 0;i<3;i++) {
        for (x = 0;x<12;x++){
            rLinea[i] += c[i][x];
            rCoche[x] += c[i][x];
            rGeneral += c[i][x];
        }
    }
    system("cls");
    printf("Recuadacion total: %.2f\n", rGeneral);
    printf("Recuadacion Linea 1: %.2f\n", rLinea[0]);
    printf("Recuadacion Linea 2: %.2f\n", rLinea[1]);
    printf("Recuadacion Linea 3: %.2f\n\n", rLinea[2]);
    for (x = 0;x<12;x++){
     printf("Recuadacion Coche %d: %.2f\n", x+1, rCoche[x]);
    }

    system("pause");
}
