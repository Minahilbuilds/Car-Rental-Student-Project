#include"functions.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "For log in purpose: " << endl;
    string name;
    int password;
    int a;
    cout << " Enter user Type: " << endl;
    cout << "Kindly write first letter Capital" << endl;
    cin >> name;
    cout << " Enter your password: " << endl;
    cin >> password;
    if (name == "User" && password == 123)
    {
        cout << "For confirmation that you are Human" << endl;
        cout << "Enter all the alphabets and digits showed on yor screen: " << endl;
        int i;
        if (i != 0) {
            i = 7634;
            i++;
            cout << i << endl;
            cin >> a;
            {
                if (a == i)
                {
                    cout << "Successfully you loged in" << endl;
                    cout << "Proved you are human " << endl;
                    int option;
                    do {
                        cout << " \t***  WELCOME TO CAR RENTAL SYSTEM    ***\t" << endl;
                        cout << " Select An Option" << endl;
                        cout << " Enter 1  for Registration Process:    "<< endl;
                        cout<<  " Enter 2 for Display available Cars:   "<<endl;
                        cout << " Enter 3 for Rent a Car:               "<< endl;
                        cout<<    "Enter 4 for review based on past experences"<<endl;
                        cin >> option;
                        switch (option)
                        {
                            case 1:
                                registerCustomer();
                                break;
                            case 2:
                                displayAvailableCars();
                                break;
                            case 3:
                                displayAvailableCarsWithinBudget();
                                review();
                                break;
                            case 4:
                                review();
                                    break;
                             default:
                                cout << " Sorry! Invalid Input: " << endl;
                        }
                    } while (option > 0);
                    return 0;
                }
                else
                {
                    cout << "Sorry! Your entered data is wrong " << endl;
                    cout << "kindly do try again" << endl;

                }
            }
        }
    }
    else if (name == "Owner" && password == 123)
    {
        cout << "Successfully logged in !" << endl;
        cout << "Let's start a new day" << endl;
        cout << "Wish you best of luck" << endl;
        int option;
        do {
            cout << " \t***  WELCOME TO CAR RENTAL SYSTEM    ***\t" << endl;
            cout << " Select An Option" << endl;
            cout << " Enter 1  for Registration Process:    "<< endl;
            cout<<  " Enter 2 for Display available Cars:   "<<endl;
            cin >> option;
            cin >> option;

            switch (option)
            {
                case 1:
                    registerCustomer();
                    break;
                case 2:
                    displayAvailableCars();
                    break;
                default:
                    cout << " Sorry! Invalid Input: " << endl;
            }
        } while (option > 0);
        return 0;
    }
    else
    {
        cout << "Sorry!You are not elegible to use this." << endl;
    }
}