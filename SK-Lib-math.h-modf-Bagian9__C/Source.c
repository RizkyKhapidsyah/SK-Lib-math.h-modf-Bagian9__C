// crt_modf.c

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*  Source by Microsoft
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

int main(void) {
    double x, y, n;

    x = -14.87654321;      /* Divide x into its fractional */
    y = modf(x, &n);     /* and integer parts            */

    printf("For %f, the fraction is %f and the integer is %.f\n", x, y, n);

    _getch();
    return 0;
}