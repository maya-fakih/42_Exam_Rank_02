void sort_int_tab(int *tab, unsigned int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < (int)size - 1)
    {
        j = i+1;
        while (j < (int)size)
        {
            if (tab[j] < tab[i])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}
