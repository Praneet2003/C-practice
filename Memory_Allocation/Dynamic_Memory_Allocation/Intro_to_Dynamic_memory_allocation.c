//Dynamic Memory Allocation:-
//The size of aaray can be changed,
//For example:-
//1:) if an array of length is 5, and we want ot store only 2 elements in it then all of the rest indices are just wastage of memory.
//2:) if an array is of length 5, and we want to add 3 more elements to the array then we need to change the size of array from 5 to 8.
//
//Features of Dynamic Memory Allocation:-
//1:) Memory is allocated during run-time.
//2:) Size of data Structure can be changed.
//3:) C language provides us some functions to accheive these task, defined under <stdlib.h> Header file 
//Those Four Functions are:-
//1:) malloc()           2:) calloc()            3:) free()                 4:) realloc()
//
//1:) malloc():_ (Memory Allocation Function)
// *it allocates a single block of memory with specified size.
// *Returns void pointers, which can be typecasted to any other data type.
//
//Syntax:-             ptr = (caste_type*)malloc(byte_size) 
//
//here prt hold the address of first byte
//caste_type represents datatype to be typecasted in it.
// byte_size represents here the size of memory block
//Ex:-
//Assume : sizeof(int) =2 and we have to make a block opf size 200 bytes
// #include<stdlib.h>
// int *ptr = (int *)malloc(100*sizeof(int));
//
//
//2:) Calloc():_ (Continous allocation function)
// * Dynamically allocates Specified number of blocks of memory of specified datatype.
// * By defalut they Initialize each block with a defalut value '0'
// *It also return void pointers, which can be typecasted to any datatype.
//
//Syntax:-       (caste_type*)calloc(n,element_size);
//
//here n is number of memory elements
// here element_size represents the size of memory elements
//Ex:-
//Assume : sizeof(float) = 2 , 10 elements each of size 2 bytes
//float *ptr = (float*)calloc(10,sizeof(float));
//
//3:) free():_
// * Dynamically deallocates the memory.
// * Memory allocated by malloc() or calloc() can't be deallocated automatically, so we need to use free()
// * Reduces Wastage of memory.
//
//Syntax:-        free(ptr);      //Takes pointer as parameter
// here ptr represents the first byte of memory allocated by malloc() or calloc()
//Ex:-
//float*ptr = (float*)calloc(10,sizeof(float));
// free(ptr);//It returns the memory space pointed by ptr to the heap
//
//4:) ralloc():_
// *Dynamically modify the size of previously allocated memory.
//NOTE:- in reaaloc() , value of pointer changes here.
// Syntax:-
// ptr = realloc(ptr, newsize);
//Ex:-
// Assume sizeof(int) = 2
// int *ptr = (ptr*)malloc(2*sizeof(int));              here 2*sizeof(int) + 3*sizeof(int) = 5*sizeof(int);
//ptr = realloc(ptr, 5*sizeof(int));