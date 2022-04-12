/* write a class ACCOUNT that represents your bank account and then use it.
The class should allow you to deposit money ,withdraw money, calculate interest ,
and send you message if you have insufficient balance.*/
#include <iostream>
#include <string.h>
using namespace std;

class Account
{
    // Data members.
    int Ano;
    char Name[100], ifsc[10];
    double Amount, si, pr;
    float rate;
    int time;

public:
    // Member functions.
    Account() // A default constructor to initialize some default values to
              //few data members.
    {
        Amount = 0.99;
        rate = 7;
        Ano = 0000000;
        strcpy(Name, "John Doe");
        strcpy(ifsc, "MT0034");
    }
    Account(int AcNumber, char name[], char Ifsc[]) /*A parameterized constructor
                        t     o initialize some values manually to few data members*/
    {
        Ano = AcNumber;
        Amount = 0.93;
        strcpy(Name, name);
        strcpy(ifsc, Ifsc);
    }
    void inputbankDetails(void); // A member function to take all necessary details from the user..
    void showbankDetails(void);  // A member function to Display all the details taken from the user..
    void balancEnq(int);         // A function to acess the balance at anytime provided the account 
                                 //   number as the argument.
    void deposit(void);          // A function to deposit money in bank account.
    void withdraw(void);         // A function to withdraw money from bank account.
    float interestCal(void);     // A function to calculate intrest(simple) and displays
                                 // on output screen;
};

void br(void) // A simple function to insert a horizontal rule or a thematic break.
{
    cout << "____________________________________________\n";
}
void Account::inputbankDetails(void)
{
    cout << "Enter your Name :";
    gets(Name);
    cout << "Enter Account Number :";
    cin >> Ano;
    cout << "Bank details updated sucessfully !\n";
    br();
}
void Account::showbankDetails(void)
{
    br();
    cout << "\nBank Details :\n";
    cout << "Name : ";
    puts(Name);
    cout << "Account Number : " << Ano << "\n";
    cout << "IFSC code : ";
    puts(ifsc);
    br();
}
void Account::deposit(void)
{
    cout << "Deposit Money in your bank account :";
    int Amt;
    cout << "\nEnter Account number : ";
    cin >> Ano;
    getchar();
    cout << "Enter IFSC code : ";
    gets(ifsc);
    cout << "Enter Amount : ";
    cin >> Amt;
    Amount += Amt; // Deposited amount 'Amt' is added to the original Amount;
    cout << " Money Deposited !!\n";
    br();
}
void Account::withdraw(void)
{
    cout << "Withdraw money from your bank account:";
    int amt;
    cout << "\nEnter the amount to be withdrawn : ";
    cin >> amt;
    if (amt <= Amount) // Total amount to be withdrawn 'amt' must be 
                       // less than equal to the original Amount;
    {
        Amount = Amount - amt;
        cout << "You withdrew " << amt;
        cout << "\nAvailable account balance : " << Amount << endl;
    }
    else // else transaction cannot be sucessfull due to insufficient balance;
    {
        cout << "Sorry transaction cannot be successfull due to insufficient balance! ";
        cout << "\nYour Account balance is " << Amount;
        cout << endl;
    }
}
void Account::balancEnq(int Ac)
{
    // Works only if passed Account number is equal to original entered Account number;
    if (Ac == Ano)
    {
        cout << "\nYour Account Balance is " << Amount << endl;
    }
    else
    {
        cout << "Invalid Account number \n";
    }
}
float Account::interestCal(void)
{ 
                  /*This Function takes all necessary inputs and returns the 
                    calculated intrest(simple) value;*/
    br();
    cout << "\nEnter Principal amount :";
    cin >> pr;
    cout << "Enter rate of interest :";
    cin >> rate;
    cout << "Enter Duration (in yrs) :";
    cin >> time;
    return ((pr * rate * time) / 100);
}

// Driver function
int main(void)
{
    Account yash(12345678, "Yash", "IF5600BC"); // Parameterized constructor ;
    yash.showbankDetails();
    yash.balancEnq(12345678);
    yash.deposit();
    yash.withdraw();
    float interest = yash.interestCal();
    cout << "Intrest = " << interest;

    return 0;
}
