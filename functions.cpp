#include<iostream>
#include"functions.h"
#include<fstream>
#include<string>
using namespace std;
int customerCounter = 1;
int carCounter = 1;
void economyCars()
{
    ofstream economyinCars("economy.txt");
    if (economyinCars.is_open())
    {
        economyinCars << "Mehran:            " << "\tABC123" << "\t2023" << "\n";
        economyinCars << "Suzuki Wagon R:    " << "\tDEF789" << "\t2023" << "\n";
        economyinCars << "Swift:             " << "\tGHI101" << "\t2023" << "\n";
        economyinCars << "------------------------\n";
        economyinCars.close();
    }
    string a;
    int hour;
    int total=0;
    int range1 = 300;
    ifstream economyoutCars("economy.txt");
        if (economyoutCars.is_open())
        {
            string line;
            while ( getline(economyoutCars, line))
            {
                cout << line << endl;
            }
            cout << "Select any car: " << endl;
            cin >> a;
            cout << "Enter number of hours: " << endl;
            cin >> hour;
            if (a == "Mehran" || a ==" Suzuki Wagon R" || a== "Swift" )
            {
                total = range1 * hour;
                cout << "Your total amount is: " << total << endl;
            }
            else
            {
                cout<<"Invalid Input"<<endl;
            }
            cout << "Kindly do contact from reception or accountatnt" << endl;
        }
        else
        {
            cout << "file not found" << endl;
        }
        economyoutCars.close();

}
void normalCars()
{
    string b;
    int hour;
    int total=0;
    int range2 = 600;

    ofstream normalinCars("normal_cars.txt");

    if (normalinCars.is_open())
    {
        normalinCars << "Swift:             " << "\tGHI101" << "\t2023" << "\n";
        normalinCars << "Hybird:            " << "\tJKL345" << "\t2023" << "\n";
        normalinCars << "Toyota Corolla:    " << "\tMNO289" << "\t2023" << "\n";
        normalinCars << "Honda:             " << "\tVSO107" << "\t2023" << "\n";
        normalinCars.close();
    }

    ifstream normaloutCars("normal_cars.txt");
        if (normaloutCars.is_open())
        {
            string line;
            while (getline(normaloutCars, line))
            {
                cout << line << endl;
            }
            cout << "Select any car in which you are interested:" << endl;
            cin >> b;
            cout << "Enter number of hours: " << endl;
            cin >> hour;
            if (b == "Swift" || b == "Hybird" || b == "Toyota Corolla" || b== "Honda")
            {
                total = range2 * hour;
                cout << "Your total amount is: " << total << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            cout << "Kindly do contact from reception or accountatnt" << endl;
        }

        else
        {
            cout << "file not found" << endl;
        }
        normaloutCars.close();

}
void luxuryCars()
{
    string c;
    int hour;
    int total=0;
    int range3 = 900;

    ofstream luxuryinCars("luxury_cars.txt");

    if (luxuryinCars.is_open())
    {
        luxuryinCars << "Suzuki Bolan:      " << "\tMSS764" << "\t2023" << "\n";
        luxuryinCars << "Range Rover:        " << "\tADB084" << "\t 2023" << "\n";
        luxuryinCars.close();
    }

    ifstream luxuryoutCars("economy.txt");
        if (luxuryoutCars.is_open())
        {
            string line;
            while (getline(luxuryoutCars, line))
            {
                cout << line << endl;
            }
            cout << "Select any car: " << endl;
            cin >> c;
            cout << "Enter number of hours: " << endl;
            cin >> hour;
            if (c == "Suzuki Bolan" || c == "Range Rover")
            {
                total = range3 * hour;
                cout << "Your total amount is: " << total << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
            cout << "Kindly do contact from reception or accountatnt" << endl;
        }
        else
        {
            cout << "file not found" << endl;
        }
        luxuryoutCars.close();
}
void displayAvailableCars()
{
    cout<<"Available cars are as follows: "<<endl;
    ofstream customerOutFile("Available_Cars.txt", ios::app);
    if (customerOutFile.is_open())
    {
        customerOutFile << "Mehran:            " << "\tABC123" << "\t2023" << "\n";
        customerOutFile << "Cultus:            " << "\tABC456" << "\t2023" << "\n";
        customerOutFile << "Suzuki Wagon R:    " << "\tDEF789" << "\t2023" << "\n";
        customerOutFile << "Swift:             " << "\tGHI101" << "\t2023" << "\n";
        customerOutFile << "Hybird:            " << "\tJKL345"<< "\t2023" << "\n";
        customerOutFile << "Toyota Corolla:    " << "\tMNO289" << "\t2023" << "\n";
        customerOutFile << "Honda:             " << "\tVSO107" << "\t2023" << "\n";
        customerOutFile << "Suzuki swift:      " << "\tASI974" << "\t2023" << "\n";
        customerOutFile << "Alto:              " << "\tVDE846" << "\t2023" << "\n";
        customerOutFile << "Honda City:        " << "\tMAS108" << "\t2023" << "\n";
        customerOutFile << "Suzuki Bolan:      " << "\tMSS764" << "\t2023" << "\n";
        customerOutFile << "Range Rover:       "<< "\tADB084"<< "\t2023"<< "\n";
        customerOutFile << "------------------------\n";
        customerOutFile.close();
    }
    ifstream inFile("Available_Cars.txt");
    if (inFile.is_open())
    {
        string line;
        while (inFile)
        {
            getline(inFile, line);
            cout << line << endl;
        }
    }
    else
    {
        cout << "file not found due to some technical error" << endl;
        cout<<"Please try again after some time"<<endl;
    }
    inFile.close();
}
void displayAvailableCarsWithinBudget()
{
    int range;
    cout << "Please!Enter your range per hour: " << endl;
    cin >> range;
    if (range <= 1000)
    {
        economyCars();
    }
    else if(range<=5000)
    {
       normalCars();
    }
    else
    {
         luxuryCars();
    }
}

void registerCustomer()
{
    Person person;
    person.customerId = customerCounter++;

    cout << "\tEnter your data for Registration Process\t" << endl;
    cout << " Enter your full name: " << endl;
    cin.ignore();
    getline(cin, person.name);

    do {
        cout << "Enter your mobile number:  " << endl;
        cin >> person.mobileNumber;
        if (person.mobileNumber.length() != 11)
        {
            cout << "Incorrect mobile number. Please enter again." << endl;
        }
    } while (person.mobileNumber.length() != 11);

    do {
        cout << "Enter your age: " << endl;
        cin >> person.age;
        if (person.age < 18)
        {
            cout << "Sorry! Your age is less than required age" << endl;
        }
    } while (person.age < 18);

    cout << "Enter your valid e-mail: " << endl;
    cin >> person.email;

    cout << "Enter your address: " << endl;
    cin >> person.address;

    cout << "Enter your gender: " << endl;
    cin >> person.gender;

    cout<<"Your data has been successfully saved"<<endl;
    cout<<"Thank You!for your cooperation"<<endl;

    ofstream customerOutFile("customer_data.txt", ios::app);

    if (customerOutFile.is_open())
    {
        customerOutFile << "Customer ID: " << person.customerId << "\n";
        customerOutFile << "Name: " << person.name << "\n";
        customerOutFile << "Mobile Number: " << person.mobileNumber << "\n";
        customerOutFile << "Age: " << person.age << "\n";
        customerOutFile << "Email: " << person.email << "\n";
        customerOutFile << "Address: " << person.address << "\n";
        customerOutFile << "Gender: " << person.gender << "\n";
        customerOutFile << "------------------------\n";

        customerOutFile.close();
    }
}
void review()
{
    string line;
    cout<<"Kindly enter your review: "<<endl;
    cin.ignore();
    cin>>line;
    ofstream ReviewOutFile("Review.txt", ios::app);
    if (ReviewOutFile.is_open())
    {
        ReviewOutFile<<"Kindly Enter your review: "<<line<<endl;
    }
    ReviewOutFile.close();
}
