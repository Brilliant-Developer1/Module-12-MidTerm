#include <stdio.h>
int main()
{
    int input, even = 0, odd = 0;
    scanf("%d", &input);

    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }

    // printf("%d\n", input);
    for (int i = 0; i < input; i++)
    {
        // printf("%d ", array[i]);
        if (array[i] % 2 == 0)
        {
            even++;
            // printf("even - %d\n", even);
        }
        else
        {
            odd++;
            // printf("odd - %d\n", odd);
        }
    }
    printf("%d %d", even, odd);

    return 0;
}