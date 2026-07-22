#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int nums[] = {1,3,6,2,5};
    // divide the size of the array  (in bytes) by the size of a single element
    // to get the total number of elements in the array
    int numsSize = sizeof(nums)/sizeof(nums[0]); // get size of the nums array

    for (int index = 0; index < numsSize; index++) {
        cout << nums[index] << endl;
    }



    // simpler version that may only work in newer versions of c++

    // for (int item:nums) {
    //      cout << item << endl;
    // }

    vector<int> intvector;
    intvector.reserve(10);

    for (int i = 0; i < 50; i++){
        intvector.push_back(i * i);
        cout << intvector[i] << endl;
        cout << "capacity: " << intvector.capacity() << endl;
    }

    for (int i = 0; i <= 10; i++) {
        cout << "capacity:" << intvector.capacity() << endl;
        cout << "intvector[" << i << "]=" << intvector[i] << endl;
    }

    string mystring1 = "Hello";
    string mystring2 = "World!";
    string mystring3;

    mystring3 = mystring1 + " " + mystring2;
    cout << mystring3 << endl;

    cout << mystring2 << "\nbegins at ";
    cout << mystring3.find(mystring2) << endl;

    cout << "Hash Tables" << endl;
    unordered_map<string, string> spnumbers;

    spnumbers = { {"one", "uno"}, {"two", "dos"}, {"three", "tres"}, {"four","cuatro"},{"five","cinco"} };
    
    spnumbers["three"] = "tres";
    spnumbers["four"] = "cuatro";

    cout << "one is ";
    cout << spnumbers["one"] << endl;

    cout << spnumbers.size() << endl;

// creates a hash table that matches the english letter to it's spanish
// equivalent, and outputs every item in the table to the console
    unordered_map<string, string> sppnumbers;
    
    for (auto i = spnumbers.begin(); i!=spnumbers.end(); i++ ){
        // auto is used to automatically detect the data type when
        // a variable is declared. Use this ONLY when declaring complex
        // variables.

        cout << i -> first << ":";
        cout << i -> second << endl;
    }
    return 0;

}