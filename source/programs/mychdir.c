#include <stdio.h>

main()
{
    system("pwd");
    chdir("/");
    system("pwd");
    chdir("/home/riri");
    system("pwd");
}
