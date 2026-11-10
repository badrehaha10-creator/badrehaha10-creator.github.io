#include <stdio.h>
#include <windows.h>
#include <math.h> 

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double g = 9.81;
    double h1, h2, h3, ma;


    printf("Ingrese la masa (kg: 80-20000): ");
    scanf("%lf", &ma);

    printf("Ingrese la altura 1 (m: 0-100): ");
    scanf("%lf", &h1);

    printf("Ingrese la altura 2 (m: 0-100): ");
    scanf("%lf", &h2);

    printf("Ingrese la altura 3 (m: 0-100): ");
    scanf("%lf", &h3);

  
    printf("\nPrimer s'ha de calcular la energia potencial de cada posicio:\n");
    double ep1 = ma * g * h1;
    double ep2 = ma * g * h2;
    double ep3 = ma * g * h3;

    printf("la energia potencial es EP1: %.2f J\n", ep1);
    printf("la energia potencial es EP2: %.2f J\n", ep2);
    printf("la energia potencial es EP3: %.2f J\n", ep3);

  
    printf("\nAhora s'ha de calcular la velocitat de cada posicio:\n");
    double v1 = sqrt(2 * g * h1);
    double v2 = sqrt(2 * g * h2);
    double v3 = sqrt(2 * g * h3);

    printf("la velocitat es v1: %.2f m/s\n", v1);
    printf("la velocitat es v2: %.2f m/s\n", v2);
    printf("la velocitat es v3: %.2f m/s\n", v3);

    printf("\nAra s'ha de calcular la energia cinetica de cada posicio:\n");
    double ec1 = 0.5 * ma * v1 * v1;
    double ec2 = 0.5 * ma * v2 * v2;
    double ec3 = 0.5 * ma * v3 * v3;

    printf("la energia cinetica es EC1: %.2f J\n", ec1);
    printf("la energia cinetica es EC2: %.2f J\n", ec2);
    printf("la energia cinetica es EC3: %.2f J\n", ec3);


    printf("\nY per acabar s'ha de calcular la energia mecanica de cada posicio:\n");
    double em1 = ep1 + ec1;
    double em2 = ep2 + ec2; 
    double em3 = ep3 + ec3;

    printf("la energia mecanica es EM1: %.2f J\n", em1);
    printf("la energia mecanica es EM2: %.2f J\n", em2);
    printf("la energia mecanica es EM3: %.2f J\n", em3);

    return 0;
}