#include<iostream>
#include<string>

using namespace std;

// using std::cout;
// using std::string;

int main()
{
    cout << "Please enter your name and age\n";
    string first_name = "???";
    double age = -1;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age * 12 << ")\n";
}