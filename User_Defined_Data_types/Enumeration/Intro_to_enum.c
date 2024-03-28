//Enumeration is also called as enum
//enum is a user defined data type.
//it is used to asign names to the integral constants
//
//Declarations of enum:-
enum bool{false,true};//it assingns the values startung from 0
// i.e false = 0, true = 1;
int main(){
    enum bool var;
    var = true;
    printf("The value of enum Variable var is : %d",var);
    return 0;
}
//Output:-
// The value of enum Variable var is : 1
//
//As we know that by using #define we can asign names to the integral constants, the why do we need this enum datatype:-
//1:) UNlike #define we can declare enum variable in the local variable
//2:) Enum names are automatically initialized by the compiler
// (First one will be assinged as 0, then after 1 is added to the precedding terms)
//Ex:-
int main(){
    enum days{Sun,Mon,Tues,Wed} var;
    // Here sun is assigned as 0, mon as 1, and so on..................
    var = Sun;
    printf("Sunday is the %dst day of the week.",var);
    return 0;
}
//Facts relted to enum:-
//1:) Two or more variables can have same variable.
//Ex- 
int main(){
    enum point{x=0, y=0, z=2};
    printf("%d %d %d",x,y,z);
    return 0;
}
//Output:- 
// 0,0,2
//2:) We can asign value is any order, all unassigned names will get value of previous name +1.........
//Ex:-
int main(){
    enum point{x=0, y,z=5};
    printf("%d,%d,%d",x,y,z);
    return 0;
}
//Output:- 0,1,5
//3:) Only integers value are allowed:-
int main(){
    enum point{x=35,y=/*2.5*/2,z=2};//if we take float as value of y,then it will fetch error
    printf("%d,%d,%d",x,y,z);
    return 0;
}
// Output:-
//35,2,2
//4:) All Enum constants must be unique in this scope:-
//Ex:-
int main(){
    enum point1{x=25, y=7, z=78};
    enum point2{/*x=40*/w=45,t=8,u=10};
    printf("%d %d %d %d %d",w,x,t,u,z);
    return 0;
}