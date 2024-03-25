//Function Pointers:-
///Function pointers has a capability to point a function
//Declaration of function pointers
int func(int a, int b){
    return a+b;
}
int main(){
    int(*ptr)(int , int);
    //Here ptr can hold the address of a function 
    //whoose return type is int and which accepts two integer values as parameter.
    //
    //Initialization of Function pointers
    int(*ptr)(int,int) = &func;//here &func gives the address of func()
    return 0;
}