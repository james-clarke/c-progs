#include <stdio.h>

int main()
{
    int upper, lower, step;

    lower = 0;
    upper = 300;
    step = 20;

    for (int fahr = lower; fahr <= upper; fahr += step)
    {
        int celcius = 5 * (fahr - 32) / 9;
        printf("%3d\t %6d\n", fahr, celcius);
    }

    return 0;
}
