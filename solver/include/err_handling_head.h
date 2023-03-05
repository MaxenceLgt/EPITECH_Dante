/*
** EPITECH PROJECT, 2023
** err_handling_head
** File description:
** err_handling_head
*/

#ifndef ERR_HANDLING_HEAD_
    #define ERR_HANDLING_HEAD_

    /*
    @brief Verify if a file is openable and readable
    @param file: The file you want to open
    */
    int can_open_and_read(char *file);

    /*
    @brief Verify if a file is empty
    @param file: The file you want to verify
    */
    int file_is_empty(char *file);

    /*
    @brief Verify if all lines of a file contain only * and X
    @param file: The file you want to verify
    */
    int check_line_content(char *file);

    /*
    @brief Verify if the line enter as parameter contain only * and X
    @param line: The line verify
    */
    int good_line_content(char *line);

    /*
    @brief Verify size of all lines from a file
    @param file: The file you want to verify
    */
    int check_line_size(char *file);

#endif /* !ERR_HANDLING_HEAD_ */
