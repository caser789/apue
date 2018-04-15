#include "apue.h"

int
main(void)
{
    if (chdir("/tmp") < 0)
        printf("chdir failed\n");

    printf("chdir to /tmp succeeded\n");
    exit(0);
}
