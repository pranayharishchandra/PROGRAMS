#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, A, B;
    printf("y = ax2 + bx + c \nenter a b c = ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float d = b * b - 4 * a * c;
    A = (-b) / (2 * a);

    if (d == 0)
    {
        d = sqrt(d);
        printf("root1 = root2 = %f\n", A);
    }
    else if (d > 0)
    {
        d = sqrt(d);
        B = d / (2 * a);
        printf("root1 = %f \n", A + B);
        printf("root2 = %f \n", A - B);
    }
    else
    {
        d = sqrt(-d);
        B = d / (2 * a);
        printf("root 1 = %f + (%f)i\n", A, B);
        printf("root 2 = %f - (%f)i\n", A, B);
    }

    return 0;
}
