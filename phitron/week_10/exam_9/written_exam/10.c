#include <stdio.h>
#include <string.h>

int main()
{
    for(int i=1; i<101; i++)
    {
        if(i % 2 == 0)
        {
            printf("Goodbye\n");
        }
        else
        {
            printf("I Love Programming!\n");
        }
    }

    return 0;
}