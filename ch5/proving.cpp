// Calculus calculator


#include <iostream>
#include <string>
#include <cmath>

// sum function
def sum(num1,num2):
    total = num1 + num2
    return total

// difference function
def difference(num1,num2):
    total = num1 + num2
    return total

// product function
def product(num1,num2):
    total = num1 * num2
    return total

// quotient function
def quotient(num1,num2):
    total = num1 / num2
    return total

int main(){
    
    cout << "Welcome to your Fall Calculus Calculator" << endl;
    cout << "Please choose one of the following options: " << endl;
    cout << "Choose 1 for Addition" << endl;
    cout << "Choose 2 for Subtraction" <<  endl; 
    cout << "Choose 3 for Multiplication" << endl;
    cout << "Choose 4 for Division" << endl;

    while True:
    user_prompt >> "Please make a choice: " << endl;
    
    if user_prompt == "1":
        sum()
    elif user_prompt == "2":
        difference()
    elif user_prompt == "3":
        product()
    elif user_prompt == "4":
        quotient()
    else:
        cout << "That's not a valid option, please choose again." << endl;

}