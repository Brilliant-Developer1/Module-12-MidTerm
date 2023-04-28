#include <stdio.h>
#include <string.h>
int main()
{
    char input[1001];
    int vowels = 0;

    scanf("%s", input);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
        {
            vowels++;
        }
    }
    printf("%d", vowels);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     char input[1001];
//     int vowels = 0;

//     scanf("%s", input); // read input string

//     for (int i = 0; input[i] != '\0'; i++)
//     {
//         if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
//         {
//             vowels++;
//         }
//     }

//     printf("%d", vowels); // output number of vowels

//     return 0;
// }
