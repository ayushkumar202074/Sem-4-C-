// operator overloading
#include <iostream>
using namespace std;

class complex
{
protected:  //Data members
    int re;
    int im;
public:
    complex(int r = 0, int i = 0)  // Parameterized constructor with default arguments ;
    {
        re = r;
        im = i;
    }
    complex operator+(complex c) // operator overloading (binary operator overloading)
    {
        complex temp;  //temporary object of class temp 
        temp.re = re + c.re;   
        temp.im = im + c.im;
        return temp;
    }
    void display(complex c)  //Simple display function
    {
        cout << c.re << "+" << c.im << "i";
        cout<<endl;
    }
};
int main(void) //Driver function
{
    complex c1(2, 3);  
    c1.display(c1);
    complex c2(1, 3);
    c2.display(c2);
    complex c3;
    c3 = c1 + c2;
    c3.display(c3);

    return 0;
}