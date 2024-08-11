#include<iostream>

using namespace std;

// Use the example as a model for a program that converts yen ('y'),
// kroner ('k'), and pounds ('p') into dollars. If you like realism,
// you can find conversion rates on the web
int main()
{
    constexpr double pounds_per_dollar = 0.78;
    constexpr double yen_per_dollar = 146.59;
    constexpr double kroner_per_dollar = 10.82;

    double amount = 0;
    char unit = 'u';

    cout << "Please enter an amount followed by a unit (y or k or p):\n";
    cin >> amount >> unit;

    if (unit == 'y')
    {
        cout << amount << " yen == " << amount / yen_per_dollar << " dollars\n";
    }
    else if (unit == 'k')
    {
        cout << amount << " kroner == " << amount / kroner_per_dollar << " dollars\n";
    }
    else if (unit == 'p')
    {
        cout << amount << " pounds == " << amount / pounds_per_dollar << " dollars\n";
    }
    else
    {
        cout << "Sorry, I don't know a currency called " << unit << ".\n;";
    }
    
    return 0;
}