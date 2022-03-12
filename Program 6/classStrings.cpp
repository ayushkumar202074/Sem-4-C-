// Write a class string that can be used to store strings ,add strings ,equate strings,output strings.
#include <iostream>
#include <stdlib.h>
using namespace std;

// class string is created to access varoius string functions.
class String
{
    // Data members
    string str1; // Datamember of type string.. -used to store a string or operate on it;
    string str2;

public:
    string store_string(string);       // A member function to store the Passed string as an argument..
    string add_string(string, string); // A member function to add two passed strings .
    int equate_string(string, string); // A member function to equate or compare 2 passed strings.
    void print_string(string);         // A member function to print the passed string on output screen.
};

string String::store_string(string st)
{
    str1 = st; // copies the passed string to one of the datamember 'str1' and returns it.
    return (str1);
}
string String::add_string(string st1, string st2)
{
    return (st1 + st2); // Adds or concatenate 2 passed strings and returns the result;
}
int String::equate_string(string st1, string st2)
{
    if (st1 == st2) // Equates 2 passed strings and returns 1 if true else 0
    {
        return 1;
    }
    return 0;
}
void String::print_string(string st)
{
    cout << st; // Simply prints the passed string in output string;
}

// Driver function
int main(void)
{
    String st;
    st.store_string("Hello World");              // store the string..
    st.print_string("You only live once, but if you do it right, once is enough."); // Print the passed string..
    if (st.equate_string("Hello", "Hell"))      // equate 2 strings or match 2 strings.
    {
        cout << "\nBoth strings matched !\n";
    }
    else
    {
        cout << "\nStrings not matched !\n";
    }

    cout << st.add_string("My name is", " Yash Raj"); // Addition of 2 strings.

    return 0;
}