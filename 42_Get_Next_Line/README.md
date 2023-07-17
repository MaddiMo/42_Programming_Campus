# get_next_line

## Introduction

In this project I had to create a programme that returns one line from a specified fd every time it is called, followed by a newline if the line has one. The size of the df was unknown beforehands. 

This project introduces the idea of static variables, which will be very useful for future 42Cursus projects. It could have been completed using standard C function, however, the goal of the project is using functions that I have completed previously in the libft project, as well as *read, malloc* and *free*. 

The function to implement is called get_next_line, and it has the following prototype:

| char *get_next_line(int fd); |
|------------------------------|

![Brainstorming (3)](https://github.com/MaddiMo/get_next_line/assets/114074329/337cc204-0717-4f9c-a435-52a37b29f7dd)


Things to take into account:

| Int Value (fd) |           Name           |
| ---------------| ----------------------   |
|       0        | Standard Input (stdin)   |
|       1        | Standard Output (stdout) |
|       2        | Standard Error (stderr)  |
