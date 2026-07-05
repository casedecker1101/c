#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout << (2+3*4) << endl;
    cout << (2+3)*4 << endl;
    cout << pow(2,10) << endl;
    cout << float(6)/3 << endl;
    cout << float(7)/3 << endl;
    cout << 7/3 << endl; // In C++ this is integer division
    cout << 7%3 << endl;
    cout << float(3)/6 << endl;
    cout << 3/6 << endl;
    cout << 3%6 << endl;
    cout << pow(2,100) << endl;
    cout << true << endl;
    cout << false << endl;
    cout << (true || false) << endl;
    cout << (true && false) << endl;
    cout << (5 == 10) << endl;
    cout << (10 > 5) << endl;
    cout << ((5 >= 1) && (5 <= 10)) << endl;

    /*  Demonstrates how to use variables in C++
        moreover, we assign an integer to a boolean variable,
        showing the static typing of C++  */
    
    int theSum = 4;
    cout << theSum << endl;

    theSum = theSum + 1;
    cout << theSum << endl;

    bool theBool = true;
    cout << theBool << endl;

    theBool = 4;
    cout << theBool << endl;

    // Demonstrates how chars and strings can not be directly compared.
    string strvar = "b";
    char charvar = 'b';

    cout << ('b' == charvar) << endl;
    cout << ("b" == strvar) << endl;
    //cout << ('a' == "a"); // will error

    // outputs the value of a variable
    // as well as the memory address in C++
    int varN = 101;
    cout << varN << endl;
    cout << &varN << endl;  // outputs the memory address of variable varN
    
    int varN2 = 9;
    int *ptrN = &varN2; // ptrN points to varN2 address

    cout << "varN2 value: " << varN2 << endl;
    cout << "varN2 location: " << ptrN << endl;
    cout << "dereference ptrN: " << *ptrN << endl;
    
    /* Example - no ampersand - */

    int varN3 = 99;
    int *ptrN2 = &varN3;  // Fixed: added & operator

    cout << "varN3 value: " << varN3 << endl;
    cout << "ptrN2 location: " << ptrN2 << endl;
    cout << "ptrN2 points to varN3: " << endl;
    cout << "dereference ptrN2: " << *ptrN2 << endl;
    
    int x = 12345;
    int *ptrx = &x;

    while (ptrx) {
        cout << "Pointer ptrx points to " << ptrx << endl; 
        ptrx = nullptr;
    }

    cout << "Pointer ptrx points to nothing! \n";
    
    return 0;
}