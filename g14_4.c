#include <stdio.h>
#include <stdlib.h>
void main()
{ float c[3][12], imp, recaudacionLinea[3], recaudacionCoche[12], recaudacionGeneral = 0;
  int i, x, linea, continuar, coche;
  for (i = 0;i<3;i++) {
    recaudacionLinea[i] = 0;
    for (x = 0;x<12;x++){
        c[i][x] = 0;
        recaudacionCoche[x] = 0;
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
            recaudacionLinea[i] += c[i][x];
            recaudacionCoche[x] += c[i][x];
            recaudacionGeneral += c[i][x];
        }
    }

    printf("Recuadacion total: %.2f\n", recaudacionGeneral);
    printf("Recuadacion Linea 1: %.2f\n", recaudacionLinea[0]);
    printf("Recuadacion Linea 2: %.2f\n", recaudacionLinea[1]);
    printf("Recuadacion Linea 3: %.2f\n\n", recaudacionLinea[2]);
    for (x = 0;x<12;x++){
        printf("Recuadacion Coche %d: %.2f\n", x+1, recaudacionCoche[x]);
    }

    system("pause");
}
