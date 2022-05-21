// Unary operator overloading..
#include <iostream>
using namespace std;

class myType  //Abstract class;
{
    int a, b, c;

public:
    myType(int x = 0, int y = 0, int z = 0)
    {
        a = x;
        b = y;
        c = z;
    }
    void operator-() //Unary operator defination
    {
        a = -a;   
        b = -b;
        c = -c;
    }
    void display(void);  // A simple display function ;
};

void myType::display(void) //Display function
{
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
    cout << "Value of c is " << c << endl;
}
int main(void) //driver function
{
    myType m(2, -4, -5);
    m.display();
    -m;   //unary operator 
    m.display();

    return 0;
}