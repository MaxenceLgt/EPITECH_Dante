/*
** EPITECH PROJECT, 2023
** main_call_head
** File description:
** main_call_head
*/

#ifndef MAIN_CALL_HEAD_
    #define MAIN_CALL_HEAD_

    /*
    @brief err_handling is a function that verify if all the arguments
    enter as parameter are valid or not.
    @param ac: number of arguments passed as parameter.
    @param av: name of arguments passed as parameter.
    @returns 84 if there is an erros on the arguments. 0 if not.
    */
    int err_handling(int ac, char **av);

    /*
    @brief generate_maze_line generate a maze with only one line or
    column if 1 is enter as parameter for x or y
    @param x: number of columns.
    @param y: number of lines.
    @return 0 to say that the function is finish.
    */
    int generate_maze_line(int x, int y);

#endif /* !MAIN_CALL_HEAD_ */
