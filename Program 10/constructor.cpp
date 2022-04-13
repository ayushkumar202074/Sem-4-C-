/*Program to demonstrate the concept of -
a) Default constructor..
b) Parameterized constructor..
c) copy constructor..
d) constructor overloading..*/
#include <iostream>
using namespace std;

//A class with few datamembers and constructors or member functions 
class Employee
{
    //Data members -to store Employee details such as Employee name,id,age,designation etc;  
    int Eid;     
    string Ename;
    int Eage;
    string Edesignation;
    double Esalary;

public:
    //A default constructor to initialize few data members a default value(s);
    Employee() // Default constructor
    {
        Ename = "John Doe";
        Eid = 1234;
        Edesignation = "Officer";
        Esalary = 45000;
        Eage = 25;
    }
    //A parameterized constructor to initialize few datamembers manually; 
    Employee(string EmpName, int EmpNo, int EmpID, string EmpDesig, double Empsalary, int EmpAge = 25) 
    {   
        // Parameterized constructor and constructor overloading.
        Ename = EmpName;
        Eid = EmpID;
        Edesignation = EmpDesig;
        Esalary = Empsalary;
        Eage = EmpAge;
    }
    // A copy constructor to initialize an object using another object of the same class. 
    Employee(const Employee &obj) // copy constructor..
    {
        Ename = obj.Ename;
        Eid = obj.Eid;
        Eage = obj.Eage;
        Edesignation = obj.Edesignation;
        Esalary = obj.Esalary;
    }
    //An another constructor that recieves only single argument of type double and initializes the datamembers.
    Employee(double EmpSalary)  //constructor overloading.
    {
        Ename="Steve";
        Eid=101;
        Edesignation="HR";
        Eage=45;
        Esalary = EmpSalary * 2;
    }
    //A display function to display all the details of an Employee ..
    void displayData(void)
    {
        cout << "Employee's Name : " << Ename << endl;
        cout << "Employee's ID : " << Eid << endl;
        cout << "Employee's Designation : " << Edesignation << endl;
        cout << "Employee's Salary : " << Esalary << endl;
        cout << "Employee's Age : " << Eage << endl;
        cout<<"_____________________________________\n";
    }
};

//Driver function
int main(void)
{
    Employee e1;
    e1.displayData();  //prints the default values.. -default constructor is called;
    Employee e2("Rohit", 117, 289, "Programmer", 30000);  // parameterized constructor is called;
    e2.displayData();  //prints the passed values..
    Employee e4(e2);  //copy constructor is called   -copies the 'e2' to 'e4' ..
    e4.displayData();  //prints same result as 'e2' ..
    Employee e5(59999.99); //constructor overloading..
    e5.displayData();

    return 0;
}
