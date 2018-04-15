#include "apue.h"

int
main(void)
{
    char *ptr;
    size_t size;

    if (chdir("/Users/Jiao/xuejiao") < 0)
        printf("chdir failed\n");

    ptr = path_alloc(&size);

    if (getcwd(ptr, size) == NULL)
        printf("getcwd failed\n");

    printf("cwd = %s\n", ptr);
    exit(0);
}
