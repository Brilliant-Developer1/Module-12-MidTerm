#include <stdio.h>
int main()
{
    int input, x, result = 0;
    // Take Input
    scanf("%d", &input);
    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &x);

    // Find the x how many times in array
    for (int i = 0; i < input; i++)
    {

        if (array[i] == x)
        {
            result++;
        }
    }

    printf("%d", result);

    return 0;
}

/* input
6
4 3 5 3 3 5
3
*/