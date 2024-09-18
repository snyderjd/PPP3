#include<iostream>
#include "PPPheaders.h"

using namespace std;


// 9/14/24      1930 - 2055     85 min

/*
[x] 2.
The following program takes in a temperature value in Celsius and converts it to Kelvin.
This code has many errors in it. Find the errors, list them, and correct the code.

[x] 3.
Absolute zero is the lowest temperature that can be reached; it is
-273.15C, or 0K. The above program, even when corrected, will produce
erroneous results when given a temperature below this. Place a check
in the main program that will produce an error if a temperature is
given below -273.15C

[x] 4.
Do exercise 3 again, but this time handle the error inside ctok()

[x] 5.
Add to the program so that it can also convert from Kelvin to Celsius.
*/

double ctok(double c)               // converts Celsius to Kelvin
{
    double k = 0.0;

    if (c <= -273.15)
    {
        error("invalid temperature, must be greater than -273.15C");
    }
    else
    {
        k = c + 273.25;
    }

    return k;
}

double ktoc(double k)
{
    double c = 0.0;

    if (k <= 0.0)
    {
        error("invalid temperature, must be greater than 0K");
    }
    else
    {
        c = k - 273.15;
    }

    return c;
}

void celcius_and_kelvin_converter()
{
    cout << "Please enter a temperature followed by the unit C for celcius or K for kelvin\n";
    double temp = 0;
    char unit;
    char other_unit;
    double result = 0;

    cin >> temp >> unit;

    switch (unit)
    {
    case 'C':
        result = ctok(temp);
        other_unit = 'K';
        break;
    
    case 'K':
        result = ktoc(temp);
        other_unit = 'C';
        break;

    default:
        error("invalid temperature unit, must be C or K");
        break;
    }

    cout << temp << unit << " is " << result << other_unit << "\n";
}

// [x] 6.
// Write a program that converts from Celcius to Fahrenheit and from Fahrenheit to Celsius.
// Use estimation (4.7.1) to see if your results are plausible.
double f_to_c(double f)
{
    // °C = (°F − 32) x 5/9
    double c = 0.0;

    if (f <= -459.67)
    {
        error("invalid temperature, must be greater -459.67");
    }
    else
    {
        c = (f - 32) * (5/9);
    }

    return c;
}

double c_to_f(double c)
{
    //  °F = (°C × 9/5) + 32
    double f = 0.0;

    if (c <= -273.15)
    {
        error("invalid temperature, must be greater than -273.15C");
    }
    else
    {
        f = (c * 9/5) + 32;
    }

    return f;
}

void fahrenheit_and_celsius_converter()
{
    cout << "Please enter a temperature followed by the unit F for fahrenheit or C for celsius\n";
    double temp = 0;
    char unit;
    char other_unit;
    double result = 0;

    cin >> temp >> unit;

    switch (unit)
    {
    case 'F':
        result = f_to_c(temp);
        other_unit = 'C';
        break;
    
    case 'C':
        result = c_to_f(temp);
        other_unit = 'F';
        break;

    default:
        error("invalid temperature unit, must be F or C");
        break;
    }

    cout << temp << unit << " is " << result << other_unit << "\n";
}

/*
[ ] 8.
Write a program that reads and stores a series of integers and then computes the sum of the first N integers.
First ask for N, then read the values into a vector, then calculate the sum of the first N values.
For example:
    Please enter the number of values you want to sum: 3
    Please enter some integers (press '|' to stop): 12 23 13 24 15
    The sum of the first 3 numbers (12 23 13) is 48

Handle all inputs. For example, make sure to give an error message if the user asks for a sum
of more numbers than there are in the vector.
*/
void sum_n_numbers()
{
    int n = 0;
    cout << "Please enter the number of values you want to sum: \n";
    cin >> n;
    
    cout << "Please enter some integers (press '|' to stop): \n";

    vector<int> integers;

    int number = 0;

    while (cin >> number)
    {
        integers.push_back(number);
    }

    if (n > integers.size())
    {
        error("Error: there are not enough numbers to sum.");
    }
    else
    {
        for (int i = 0; i < integers.size(); i++)
        {
            cout << "integers[" << i << "]: " << integers[i] << "\n";
        }
        
        cout << "Calculating sum of first " << n << " numbers...\n";

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum+=integers[i];
        }

        cout << "Sum: " << sum << "\n";
    }
}

int main()
{
    // celcius_and_kelvin_converter();
    // fahrenheit_and_celsius_converter();
    sum_n_numbers();

    return 0;
}

