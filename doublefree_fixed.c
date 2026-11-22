#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof(int));
    if (p == NULL)
        return 1;
    *p = 10;
    free(p);
    p = NULL;
    return 0;
}
