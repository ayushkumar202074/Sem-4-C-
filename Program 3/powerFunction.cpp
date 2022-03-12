/*Write a function power() which raises a number m to a power n.
The function takes double value of m and integer value of n and returns the result.
use default value of n = 2 to make the function to calculate squares when the argumnets is omitted.*/
#include <iostream>
using namespace std;

// class power is defined for the power function implementation..
class Power
{
    // Data members -  double value of m and integer value of n and double value for result.
    int n;
    double m;
    double result;

public:
    // Member functions.
    Power() // A default constructor to initialize data members to default value 0;
    {
        m = 0;
        n = 0;
        result = 0;
    }
    void power(double, int); // A function to calculate power and store the result in "result" data member;
    void displayPower();     // A member function to display the result of calculated power.
};

void Power::displayPower()
{ // displayPower just prints the result in output screen..
    cout << result;
}

void Power::power(double x, int y = 2)
{
    m = x; // initialize "m" and "n" values with passed arguments ..
    n = y;
    int temp = 1; // temporary int variable initialized with 1;
    // Logic to remove 0 to the power 0 ambiguity.
    if (m == 0 && n == 0)
    {
        cout << "Undefined ! ";
        exit(0);
    }
    else
    {
        // Logic to compute power..
        for (int i = 0; i < n; i++)
        {
            temp *= m;
        }
        result = temp; // computed value is stored in "result" data member.
    }
    displayPower(); // displayPower function is called to display the result;
}

// Driver Function.
int main(void)
{
    Power p;
    p.power(2); // Single value 2 is passed in power function;
}