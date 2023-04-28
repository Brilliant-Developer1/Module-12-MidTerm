#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string[1001];
    int capital = 0, small = 0;
    scanf("%s", string);

    for (int i = 0; i < strlen(string); i++)
    {
        if (isupper(string[i]))
        {
            capital++;
        }
        else
        {
            small++;
        }
    }
    printf("%d %d", capital, small);

    return 0;
}