#include "apue.h"

#define buffsize 4096

int
main(void)
{
    int n;
    char buf[buffsize];

    while ((n = read(STDIN_FILENO, buf, buffsize)) > 0)
        if ((write(STDOUT_FILENO, buf, n)) != n)
            printf("write error\n");
    if (n < 0)
        printf("read error\n");
    exit(0);
}
