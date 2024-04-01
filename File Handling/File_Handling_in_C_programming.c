// C provides some functions for file handling, defined under <stdio.h> header file, which are used to :-
// 1:) Open or Create file.
// 2:) Read from a file.
// 3:) Write into a file.
//
//1=> fopen():-
// *Used to create a new file or open existing file.
// Syntax:- 
// FILE *fp;
// fp = fopen("Filename", "mode");
//here mode represents the purpose of opening file.
//
//Various modes txt Files:-
//1:) "r" = * open files in reading mode only.
//          * If file doesn't exists then it returns NULL value
//2:) "w" = * Opens file in writing mode only.
//          * If file doesn't exist, it creates a new file.
//          * If file doesn't open then it returns NULL Value.  
//3:) "a" = * OPens file in appending mode.
//          * If file doesn;t exist then it creates a new file
//          * If file doesn;t open then it return NULL
//4:) "r+"= * Opens file in both reading and writing mode 
//5:) "w+"= * OPens file in both reading and writing mode.
//6:) "a+"= * Opens file in both reading and appending mode.
//
//Various modes in binary file:-
//
//Trick:-
// Just add 'b' After the modes of the txt files
//
//1:) "rb" = * open files in reading mode only.
//          * If file doesn't exists then it returns NULL value
//2:) "wb" = * Opens file in writing mode only.
//          * If file doesn't exist, it creates a new file.
//          * If file doesn't open then it returns NULL Value.  
//3:) "ab" = * OPens file in appending mode.
//          * If file doesn;t exist then it creates a new file
//          * If file doesn;t open then it return NULL
//4:) "rb+"= * Opens file in both reading and writing mode 
//5:) "wb+"= * OPens file in both reading and writing mode.
//6:) "ab+"= * Opens file in both reading and appending mode.
//
