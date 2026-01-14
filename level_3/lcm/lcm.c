int gcd(int i, int j)
{
    if (j == 0)
        return (i);
    return (gcd(j, i % j));
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    return ((a * b) / gcd(a, b));
}