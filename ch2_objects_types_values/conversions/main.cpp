#include<iostream>

using namespace std;

int main()
{
    double d = 0;
    while (cin >> d)
    {
        int i = d; // try to squeeze a floating point value into an integer value
        char c = i; // try to squeeze an integer into a char
        cout << "d == " << d    // the original double
            << "\ni == " << i   // double converted to int
            << "\nc == " << c   // int value of char
            << "\nchar(" << c << ")\n"; // the char
    }
    
}