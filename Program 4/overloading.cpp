// A program to show that effect of default arguments can be alternatively achieved by overloading..
#include <iostream>
using namespace std;

/*Function overloading..-Here there are 3 functions with the same name 'printbyOverload' 
but different number of arguments.*/ 
void printbyOverload(int a, int b, int c) // Function  to print it's given integer argument(s).. -fun 1
{
    cout << a << " " << b << " " << c;
    cout << endl;
}
void printbyOverload(int a, int b)   //-fun 2
{
    printbyOverload(a, b, 0); // Here fun 1 is called with c as default value which is 0;
}
void printbyOverload(int a)   //-fun 3
{
    printbyOverload(a, 0); // here fun 2 is called with b as default value which is 0; 
}

// A function with default arguments..
// Function  to print it's given integer argument(s)..
void printbyDefault(int a, int b = 0, int c = 0) // here b & c has the default value 0 simultaneously..
{
    cout << a << " " << b << " " << c;
    cout << endl;
}

// Driver function..
int main(void)
{
    printbyOverload(2); // calling the function by overloading..
    printbyDefault(2);  // calling function with default argument..
    //both results are same.

    return 0;
}
