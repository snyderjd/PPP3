#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

double compute_median_temp();
double compute_distances();

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
    
    double distance = compute_distances();

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
// the mean distance between two neighboring cities.
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
    for (int i = 0; i < distances.size(); i++)
    {
        total_distance+=distances[i];
    }
    
    cout << "The total distance is: " << total_distance << "\n";

    return total_distance;
}