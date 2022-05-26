// A program to show the concept of runtime polymorphism using virtual function;
#include <iostream>
using namespace std;

class Vehicle // Base class
{
public:
    int vehicle_no;
    virtual void display(void) // display function which is virtual
    {
        cout << " Vehicle No. is " << vehicle_no << endl;
    }
};
class Car : public Vehicle // 1st Derived class
{
public:
    int car_no;
    void display(void) // display function is already a virtual function in Vehicle class
    {
        cout << " Vehicle No. is " << vehicle_no << endl;
        cout << " Car No. is  " << car_no << endl;
    }
};

class BMW : public Car // 2nd Derived class
{
public:
    int bmw_no;
    void display(void)
    {
        cout << " Vehicle No. is " << vehicle_no << endl;
        cout << " Car No. is " << car_no << endl;
        cout << " BMW No. is " << bmw_no << endl;
    }
};
int main(void)
{
    Vehicle *veh_ptr; // a pointer to vehicle class is created;
    Car cr;           // object of class car
    cr.car_no = 420;
    veh_ptr = &cr; // reference of object of class Car is assigned to the pointer.
    veh_ptr->vehicle_no = 789;
    veh_ptr->display(); // override the display() of Vehicle class;
    // Runtime polymorphism.
    cout << endl;
    BMW bm;
    bm.bmw_no = 234;
    bm.car_no = 8890;
    veh_ptr = &bm;
    veh_ptr->vehicle_no = 90;
    veh_ptr->display();

    return 9;
}