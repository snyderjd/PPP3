#include<iostream>
#include<string>
#include "PPPheaders.h"

using namespace std;

// using std::cout;
// using std::string;

int main()
{
    cout << "Enter the name of the person you want to write to:\n";
    string first_name = "";
    cin >> first_name;

    cout << "Enter the age of the recipient:\n";
    int age = 0;
    cin >> age;

    if (age <= 0 || age >= 110)
    {
        simple_error("you're kidding!");
    }

    cout << "Enter the name of another friend:\n";
    string friend_name = "";
    cin >> friend_name;
    
    cout << "Dear " << first_name << ",\n"
        << "    How are you? I am fine. I miss you.\n"
        << "The weather here has been very hot. We've\n"
        << "also had a lot of rain. Have you seen\n"
        << friend_name << " lately? I hear you just had\n"
        << "a birthday and you are " << age << " years old.\n";
}   