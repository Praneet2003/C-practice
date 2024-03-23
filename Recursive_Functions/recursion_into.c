//A process in which a function call itshelf directly or inderctly
//Direct Recursion:-
void fun(){
    for(int i =1; i<=3; i++){
        func();//function is calling itshelf
    }
}
//Indirect Recursion:-
void A(){
    B();
}
void B(){
    c();
}
//one function calls other function
//NOTE:-
//1:) When a function is called its local variable return address etc are pushed to Stack..............
//2:) Whern a function returns the output, its details are popped out of stack..................