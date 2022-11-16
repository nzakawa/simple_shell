0x16. C - Simple Shell
Simple Shell 
This is a program that receive commands from user, from keyboard to send them to the explotation system in charge of executing them.
USES of the Script in Shell.

On the Linux systems, a program is called bash (meaning Bourne again Shell) act as shell program. All shell can execute commands located in files. Each file containing commands intended for shell is called a script. A script looks like a file text executable by the machine. but need to be interpreted by the terminal emulator. It's objective is to launch and coordinates the execution of programs without passing by the graphic interface.

Exercises

Write a UNIX command line interpreter



The shell should: • Display a prompt and wait for the user to type a command. A command line always ends with a new line. • The prompt is displayed again each time a command has been executed. • The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features. • The command lines are made only of one word. No arguments will be passed to programs. • If an executable cannot be found, print an error message and display the prompt again. • Handle errors. • You have to handle the “end of file” condition (Ctrl+D)
