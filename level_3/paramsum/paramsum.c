#include <unistd.h>

void itoa(int i)
{
    int c;

    if(i > 10)
        itoa(i / 10);
    c = (i % 10) + '0';
    write (1, &c, 1);
    return ;
}

int main(int argc, char **argv)
{
    argv[0][0] = argv[0][0]; 
    itoa(argc - 1);
    write (1, "\n", 1);
    return (0);
}