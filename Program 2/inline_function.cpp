// A program to make the use of inline function..
#include <iostream>
#include <stdlib.h>
using namespace std;

/*A simple inline function to calculate the sum of two passed arguments and return the result*/
inline int sum(int a, int b)
{
    int c = a + b;
    return c;
}

/* A inline function to take input from the user and call the sum()*/
inline int getSum(void) 
{
    int x, y;
    cout << "Enter X ";
    cin >> x;
    cout << "\nEnter Y ";
    cin >> y;
    return (sum(x, y));
}

//Driver function.
int main(void)
{
    cout << "Sum = " << getSum();   

    return 0;
}