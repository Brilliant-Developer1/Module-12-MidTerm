#include <stdio.h>

int main()
{
    int M1, M2, D;
    scanf("%d %d %d", &M1, &M2, &D);

    double t2 = (double)D * (double)M1 / (double)M2;

    printf("%d\n", (int)t2);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int M1, M2, D;
//     scanf("%d %d %d", &M1, &M2, &D);

//     printf("%d", (M1 * M2) / D);
//     return 0;
// }

// double t2 = (double)D * (double)M1 / (double)(M1 - (M1 - M2));
