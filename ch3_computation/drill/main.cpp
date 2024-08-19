#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    double num = 0;
    string units = "";
    double smallest_so_far;
    double largest_so_far;
    bool is_first_pass = true;
    int cm_per_m = 100;
    double cm_per_in = 2.54;
    int in_per_ft = 12;

    double m_per_cm = 1.0/100;
    double m_per_in = 2.54/100;
    double m_per_ft = 2.54*12/100;
    double sum_in_meters = 0;
    double meter_length = 0;
    vector<double> meter_lengths;
    
    string prompt = "Please enter a number followed by a unit of cm, in, ft, or m:\n";
    cout << prompt;

    while (cin >> num >> units)
    {
        if (units == "cm" || units == "in" || units == "ft" || units == "m")
        {
            if (units == "cm")
            {
                meter_length = num * m_per_cm;
            }
            else if (units == "in")
            {
                meter_length = num * m_per_in;
            }
            else if (units == "ft")
            {
                meter_length = num * m_per_ft;
            }
            else
            {
                // unit is meters
                meter_length = num;
            }

            sum_in_meters += meter_length;
            meter_lengths.push_back(meter_length);

            if (is_first_pass)
            {
                smallest_so_far = meter_length;
                largest_so_far = meter_length;
                is_first_pass = false;
            }

            if (meter_length < smallest_so_far)
            {
                smallest_so_far = meter_length;
            }

            if (meter_length > largest_so_far)
            {
                largest_so_far = meter_length;
            }
            
            cout << "---------------\n";    
            cout << "You entered: " << num << units << "\n";
            cout << "Meter length: " << meter_length << "m\n";
            cout << "smallest_so_far: " << smallest_so_far << "\n";
            cout << "largest_so_far: " << largest_so_far << "\n";
        }
        else
        {
            cout << "---------------\n";
            cout << "Units must be cm, in, ft, or m \n";
        }
    }

    ranges::sort(meter_lengths);

    for (int i = 0; i < meter_lengths.size(); i++)
    {
        cout << meter_lengths[i] << "\n";
    }

    return 0;
}