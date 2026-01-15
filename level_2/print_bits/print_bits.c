#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 7;

    while (i >= 0)
    {
        write (1, &"01"[octet>>i & 1], 1);
        i--;
    }
}