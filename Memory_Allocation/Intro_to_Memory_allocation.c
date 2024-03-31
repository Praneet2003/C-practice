//INtroduction to Memory Allocation:
//Ram is divided into four segments.
//1:) Code:- Stores Execution Instructions
//2:) Static/Global:- Stores Global/Static Variables.
//3:) Stack:- Stores Function calls, return address etc
//4:) Heap:- Used to store memory, which is allocated dynamically.
//Eg:-
#include<stdio.h>
int sum =0;                  //Assume that this is Static memory:-
void additon(int x, int y){  //1:) int sum =0;
    sum= x+y;
}
void main(){               //Assume that, This is Stack Memory:-
    int a =10, b =20;      //1:) main()=> a=10, b=20
    addition(a,b);         //2:) addition()=> x=10, y=20
}
//After the Exection is done, the entire memory allocation of stack and Static memory get cleared out.
//
//Features of Stack:-
//1:) fixed Size
//2:) Allocation/Deallocation Done automatically.
//3:) Size of data structures should be specified before process, run-time is not possible.
//4:) Memory sortage is douring  function recursion
//
//Features of stack:-
//1:) flexible size.
//2:) Allocation/Deallocation of memory is done Manuallty by user.
//3:) Size is not specified before compilation process, run-time is possible.
 
