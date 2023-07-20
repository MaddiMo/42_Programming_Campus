# get_next_line

## Introduction

In this project I had to create a programme that returns one line from a specified fd every time it is called, followed by a newline if the line has one. The size of the df was unknown beforehands. 

This project introduces the idea of static variables, which will be very useful for future 42Cursus projects. It could have been completed using standard C function, however, the goal of the project is using functions that I have completed previously in the libft project, as well as *read, malloc* and *free*. 

The function to implement is called get_next_line, and it has the following prototype:

| char *get_next_line(int fd); |
|------------------------------|

For a better understanding, I have created my own Flow Chart diagraman which explains the sequential steps of the process of my project. 
![Brainstorming (1)](https://github.com/MaddiMo/42_School/assets/114074329/40eb37d9-3142-4ed0-8554-8989d885dc13)


Things to take into account:

| Int Value (fd) |           Name           |
| ---------------| ----------------------   |
|       0        | Standard Input (stdin)   |
|       1        | Standard Output (stdout) |
|       2        | Standard Error (stderr)  |
