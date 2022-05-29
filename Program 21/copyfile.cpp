//Program to copy one file onto the end of another , adding line numbers;
#include <iostream>
#include<fstream>
using namespace std;
//Assuming that there exists 2 files named file1.txt and file2.txt 
// and we have to copy the content of file1 to the end of file2

//Driver code
int main(void)
{
    ifstream readfile1;  //object of class ifstream to read the file (file1.txt)
    readfile1.open("file1.txt");  //file1.txt is opened
    string container;  // a string buffer is created to store the file1.txt content

    ofstream writefile2; //object of class ofstream to write in the file (file2.txt)
    writefile2.open("file2.txt",ios::out|ios::app); //Opening file2.txt to write or (copy) from file1.txt 
    while(readfile1.eof()==0) 
    {
        getline(readfile1,container);  //reading the single line from file1.txt
        writefile2<<container<<endl;   //writing that line into the file2.txt

    }
    cout<<"Copied sucessfully !";  
    readfile1.close();
    writefile2.close();

    return 0;
}