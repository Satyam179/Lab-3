#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = calloc(1, sizeof(int));
    if (p == NULL)
        return 1;
    printf("Value = %d\n", *p);
    free(p);
    return 0;
}
