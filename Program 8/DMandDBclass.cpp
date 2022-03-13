/*Create 2 classes DM and DB .DM stores the distance in meters and centimeters
and DB stores the distance in feet and inches. Write a program to add the object of
DM with the object of DB classes.*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class DB;
class DM;

// class DM to recieve distance in meters and centimetres;
class DM
{
    // Datamembers -to store distances in metres and centimetres respectively;
    float metres;
    float centimetres;
    friend void add(DM, DB); // A friend function to add the object of DM with object of DB classes;
public:
    // A get function to take input in metres and centimetres ;
    void get_DM(void)
    {
        cout << "Enter Distance in metres and centimetres >> \n";
        cin >> metres >> centimetres;
    }
    // A show function to display distance in metres and centimetres;
    void show_DM(void)
    {
        cout<<endl;
        cout << "Metres = " << metres << endl;
        cout << "Centimetres = " << centimetres << endl;
    }
};

// class DB to recieve distance in feet and inches;
class DB
{
    // Datamembers -to store distances in feet and inches respectively;
    float feet;
    float inches;
    friend void add(DM, DB);

public:
    // A get function to take input in feet and inches ;
    void get_DB(void)
    {
        cout << "Enter Distance in feet and inches >> \n";
        cin >> feet >> inches;
    }
    // A show function to display distance in Feet and inches;
    void show_DB(void)
    {
        cout<<endl;
        cout << "Feet = " << feet << endl;
        cout << "inchs = " << inches << endl;
    }
};

// Defination of add function;
void add(DM a, DB b) // a function recieves 2 arguments i.e. object of 'DM' class and object of 'DB' class;
{
    DM d; // a temporary object 'd' is created;

    int cm = (a.centimetres + a.metres * 100 + b.feet * 30.48 + b.inches * 2.54); /*This statement converts
    every distance which is taken by the user (in metres,cm,ft,inch) to cm and adds them.  */

    if (cm >= 100)  //A logic to compensate cm overflow and adds it to metres;
    {
        d.metres = cm / 100;
        d.centimetres = cm % 100;
    }
    else
    {
        d.metres = 0;
        d.centimetres = cm;
    }
    d.show_DM();  //show function is called to show the added result in metres and centimetres;
}
// Driver function..
int main(void)
{
    DM d1;
    d1.get_DM();
    DB d2;
    d2.get_DB();
    add(d1, d2); // add function is called;

    return 0;
}