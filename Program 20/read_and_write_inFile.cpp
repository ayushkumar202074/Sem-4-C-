/*Write a program to read the name and rollno of students from keyboard and write them into a file and 
then display it*/
#include <iostream>
#include<fstream>
using namespace std;

int main(void)
{
    ofstream infile;
    infile.open("studentData.txt",ios::out|ios::app);

    int rollno;   //variable to store roll number and name
    char name[20];

    cout<<"Enter Student's Name : ";     //Inputs from the user 
    cin.getline(name,20);
    cout<<"Enter Student's Roll_no : ";
    cin>>rollno;


    //Writing into a file (studentData.txt) 
    infile<<rollno<<" ";
    infile<<name<<"\n";
    cout<<"\nSucessfully written in file !\n";
    infile.close();

    //Reading from a file (studentData.txt) 
    ifstream outfile;
    outfile.open("studentData.txt",ios::in);
    string container;

    cout<<"\nFile content :\n";
    while(outfile.eof()==0)
    {
        getline(outfile,container);  //reads a complete line from a file and stores it in a buffer.
        cout<<container<<endl;
    }
    outfile.close();



    return 0;
}