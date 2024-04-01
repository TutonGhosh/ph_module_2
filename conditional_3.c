#include <stdio.h>
int main ()
{
    int tk;
    scanf("%d", &tk);
    if (tk>=5000)
    {
        printf("Cox's Bazar jabo.\n");
        if (tk>=10000)
        {
            printf("Saint Martin o jabo.\n");
        }
        else{
            printf("Saint Martin jabo na, Cox's Bazar thekei ferot chole ashbo.\n");
        }
    }
    else{
        printf("Kothau jabo na.\n");
    }
    
}