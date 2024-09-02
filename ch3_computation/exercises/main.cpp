#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

double compute_median_temp();
double compute_distances();
void number_guessing_game();
double simple_calculator();

// ==============================
// Write a program that reads a string from input and then, for each character
// read, prints out the character and its integer value on a line
int main()
{
    // char value;

    // while (cin >> value)
    // {
    //     cout << int(value) << "\n";
    // }

    // double median = compute_median_temp();
    
    // double distance = compute_distances();

    // number_guessing_game();

    double result = simple_calculator();

    return 0;
}

// ==============================
// If we define the median of a sequence as "a number so that exactly as many elements come
// before it in the sequence as come after it," fix the program in 3.6.3 so that it always
// prints out a median. Hint: A median need not be an element of the sequence
double compute_median_temp()
{
    double median = 0.0;

    cout << "Please enter some temperatures: \n";
    
    vector<double> temps;

    for (double temp; cin >> temp;)
    {
        temps.push_back(temp);
    }

    ranges::sort(temps);
    
    int length = temps.size();

    if (length % 2 == 1)
    {
        median = temps[length / 2];
    }
    else
    {
        double first = temps[length / 2];
        double second = temps[(length / 2) - 1];
        median = (first + second) / 2;
    }

    cout << "Median temperature: " << median << "\n";
    
    return median;
}

// ==============================
// Read a sequence of double values into a vector. Think of each value as the distance between two cities
// along a given route. Compute and print the total distance (the sum of all distances). Find and print
// the smallest and greatest distance between two neighboring cities. Find and print the mean distance
// between two neighboring cities.
double compute_distances()
{
    cout << "Please enter some distances: \n";

    vector<double> distances;

    // Read sequence of distances into a vector
    for (double distance; cin >> distance;)
    {
        distances.push_back(distance);
    }

    // Compute and print the total distance
    double total_distance = 0.0;
    double smallest_distance = 0.0;
    double greatest_distance = 0.0;

    for (int i = 0; i < distances.size(); i++)
    {
        if (i == 0)
        {
            smallest_distance = distances[i];
            greatest_distance = distances[i];
        }

        if (distances[i] < smallest_distance)
        {
            smallest_distance = distances[i];
        }

        if (distances[i] > greatest_distance)
        {
            greatest_distance = distances[i];
        }
        
        total_distance+=distances[i];
        
    }

    double mean_distance = total_distance / distances.size();
    
    cout << "The total distance is: " << total_distance << "\n";
    cout << "The smallest distance is: " << smallest_distance << "\n";
    cout << "The greatest distance is: " << greatest_distance << "\n";
    cout << "The mean distance is: " << mean_distance << "\n";

    return total_distance;
}

// ==============================
// Write a program to play a numbers guessing game. The user thinks of a number between
// 1 and 100 and your program asks questions to figure out what the number is.
// ex: "Is the number you are thinking of less than 50?". Your program should be
// able to identify the number after asking no more than seven questions.
void number_guessing_game()
{
    int low = 1;
    int high = 100;
    int mid = 50;
    int guesses = 0;
    bool guessed = false;
    string response;

    cout << "Think of a number between " << low << " and " << high << ".\n";

    while (guessed == false)
    {
        mid = (low + high) / 2;
        cout << "Is your number " << mid << "? enter y/n\n";
        guesses++;

        cin >> response;

        if (response == "y")
        {
            guessed = true;
            cout << "Great!, I guessed your number!\n";
            cout << "It took " << guesses << " guesses.\n";
        }
        else
        {
            cout << "Is your number greater than " << mid << "?\n";
            cin >> response;

            if (response == "y")
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            
        }
    }
}

// ==============================
// Write a program that performs as a very simple calculator. Your calculator should be able to
// handle four basic math operations - add, subtract, multiply, and divide - on two input values.
// Your program should prompt the user to enter three arguments: two double values and a
// character to represent an operation.
// ex: 24, +, 12 => 36
// ex: 3, *, 7 => 21
// ex: 5.2, -, 2.1 => 3.1
double simple_calculator()
{
    double result = 0.0;
    double num1 = 0.0;
    double num2 = 0.0;
    char operation;

    cout << "Welcome to the calculator!\n";
    cout << "Please enter a number followed by an operation and another number. The operation should be +, -, *, or /\n";

    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;
    
    default:
        break;
    }

    cout << num1 << " " << operation << " " << num2 << " = " << result << "\n";
    return result;
}







