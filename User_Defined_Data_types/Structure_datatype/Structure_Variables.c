//Declaration of structure variable:
//there are two methors of declairing structure variable:-
//
//M1:- Delairing the variable globally in defining part of structure
struct Employee{
    char Employee_name[50];
    int Employee_id;
    int Employee_age;
    float Employee_Salary;
}E1,E2;
//Here this E1,E2 are the globally declared structure variables
//
//M2:- Declairing the variable within the main() function locally.
struct Employee{
    char Employee_name[50];
    int Employee_id;
    int Employee_age;
    float Employee_Salary;
};
int main(){
    struct Employee E3,E4;
}
//Here E3,E4 are locally declared structure variables.