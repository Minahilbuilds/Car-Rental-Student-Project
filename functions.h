#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include<iostream>
using namespace std;
#include<string>
struct Person {
    string name;
    string mobileNumber;
    int age;
    string email;
    string address;
    string gender;
};

void normalCars();
void luxuryCars();
void economyCars();
void displayAvailableCars();
void displayAvailableCarsWithinBudget();
void rentCar();
void registerCustomer();
void review();

#endif
