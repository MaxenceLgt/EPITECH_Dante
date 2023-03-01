/*
** EPITECH PROJECT, 2022
** mlgt_sort_int_array
** File description:
** mlgt_sort_int_array
*/

static int find_the_lowest(int *tab, int size)
{
    int value = tab[0];
    int pos = 0;

    for (int i = 0; i < size; i++){
        if (tab[i] < value) {
            value = tab[i];
            pos = i;
        }
    }
    return (pos);
}

void mlgt_sort_int_array(int **tab, int size)
{
    int pos = 0;
    int temp = 0;

    for (int i = 0; i < size; i++){
        pos = find_the_lowest(&(*tab)[i], size - i);
        if (i != pos + i){
            temp = (*tab)[pos + i];
            (*tab)[pos + i] = (*tab)[i];
            (*tab)[i] = temp;
        }
    }
}
