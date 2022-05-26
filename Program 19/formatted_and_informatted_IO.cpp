// A program to work with formatted and unformatted IO operations
#include <iostream>
#include <iomanip>
using namespace std;
void format_width(int value) // a function to set the width
{
    cout.width(value);
}
void format_fill(char ch) // fill the empty space with any character
{
    cout.fill(ch);
}
void format_precision(int value) // set the precision value
{
    cout.precision(value);
}
int main(void)
{
    // Formatted IO operations

    cout << "Hello";
    format_width(13);
    cout << "World";
    cout << "\nYou are awsome";
    format_width(5);
    format_fill('*');
    cout << 123 << endl;
    format_precision(5);
    cout << "Precision " << 12.32442504 << endl;
    format_fill(' ');
    cout << "Good" << setw(15) << "Bye";

    // Unformatted IO Operations.

    // input and output of data using get() and put()
    char data;
    int count = 0;
    cout << "\nEnter Data : ";
    // Get the data
    cin.get(data);
    while (data != '\n')
    {
        cout.put(data); // Print the data
        count++;
        cin.get(data); // Get the data again
    }

    // input and output of file using getline() and write() function
    char line[100];
    cout << "\nEnter Input : ";
    cin.getline(line, 100); // get the line input
    cout.write(line, 5);    // print the data
    cout << endl;

    cout.write(line, 20);
    cout << endl;
    return 0;
}