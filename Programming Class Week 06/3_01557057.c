
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int gcd(int a, int b)
{
    int r;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main()
{
    int n;
    int k;
    int g;
    int s, t;
    double x;

    printf("n = ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }

    printf("x = 0 PI, sin(x) = %.6f, cos(x) = %.6f\n",
           sin(0), cos(0));

    for (k = 1; k <= 2 * n; k++)
    {
        g = gcd(k, n);

        s = k / g;
        t = n / g;

        x = (double)k * PI / n;

        if (t > 1)
        {
            printf("x = %d/%d PI, sin(x) = %.6f, cos(x) = %.6f\n",
                   s, t, sin(x), cos(x));
        }
        else
        {
            printf("x = %d PI, sin(x) = %.6f, cos(x) = %.6f\n",
                   s, sin(x), cos(x));
        }
    }

    return 0;
}
