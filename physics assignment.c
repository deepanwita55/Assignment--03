#include<stdio.h>
#include<math.h>
int main()
{
    double w1, slit1, slit2, slit3;
    int m;
    double th1, th2, th3;
    printf("Enter wavelength (nm): ");
    scanf("%lf", &w1);
    if(w1 < 380 || w1 > 750)
    {
        printf("Invalid wavelength.\n");
        return 0;
    }
    w1 *= 1e-9;
    printf("Enter order: ");
    scanf("%d", &m);
    printf("Enter slit 1 width (um): ");
    scanf("%lf", &slit1);
    printf("Enter slit 2 width (um): ");
    scanf("%lf", &slit2);
    printf("Enter slit 3 width (um): ");
    scanf("%lf", &slit3);
    slit1 *= 1e-6;
    slit2 *= 1e-6;
    slit3 *= 1e-6;
    th1 = asin((m * w1)/ slit1) * 180 / M_PI;
    th2 = asin((m  *w1)/ slit2) * 180 / M_PI;
    th3 = asin((m  *w1)/ slit3) * 180 / M_PI;
    printf("Theta 1: %.lf deg\n", th1);
    printf("Theta 2: %.lf deg\n", th2);
    printf("Theta 3: %.lf deg\n", th3);
    if(th1 > th2 && th1 > th3)
        printf("Slit 1 bends light most.\n");
    else if(th2 > th3)
        printf("Slit 2 bends light most.\n");
    else
        printf("Slit 3 bends light most.\n");
    return 0;
}






