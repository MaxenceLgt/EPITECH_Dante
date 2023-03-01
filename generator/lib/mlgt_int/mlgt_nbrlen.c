/*
** EPITECH PROJECT, 2023
** mlgt_nbrlen
** File description:
** mlgt_nbrlen
*/

int mlgt_nbrlen(int nbr)
{
    int count = 0;

    if (nbr < 0)
        return (mlgt_nbrlen(-nbr) + 1);
    if (nbr == 0)
        return (1);
    while (nbr != 0){
        count++;
        nbr /= 10;
    }
    return (count);
}
