#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */ 

int main()
{

    int lower = 0;      /* lower limit of temperature table */
    int upper = 300;    /* upper limit */
    int step = 20;      /* step size */

    int fahr = lower;

    while (fahr <= upper) {
        int celsius = 5 * (fahr-32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
