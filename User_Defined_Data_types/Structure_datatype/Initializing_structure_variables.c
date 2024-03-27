//there are 3 methord for initialization of structure variables
//M1:-
struct Employee
{
    /* data */
    int Employee_id;
    float salary;
};
int main(){
    struct Employee E1;
    E1.Employee_id =10;
    E1.salary = 300000.00;
    //here dot operator is used to acess members for initialization
}
//M2:-
struct Employee
{
    /* data */
    int Employee_id;
    float salary;
};
int main(){
    struct Employee 
    E2 = {68758,300000.00}; 
}
//in this type of initialization order matters
//
//M3:-
// Called as Designated Initialization
struct Employee
{
    /* data */
    int Employee_id;
    float salary;
};
int main(){
    struct Employee
    E1= {.salary = 100000.00, .Employee_id = 7};
}
//in this type of initialization order need not to be followed.

