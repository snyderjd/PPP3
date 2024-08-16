#include<iostream>

using namespace std;

int main()
{
    double num1 = 0;
    double num2 = 0;
    double smaller_num = 0;
    double larger_num = 0;
    bool within_threshold = false;
    double diff_threshold = 1.0 / 100;

    string prompt = "Please enter two doubles (decimal numbers):\n";

    cout << prompt;

    while (cin >> num1 >> num2)
    {
        if (num1 < num2)
        {
            smaller_num = num1;
            larger_num = num2;
        } else if (num2 < num1)
        {
            smaller_num = num2;
            larger_num = num1;
        } else if (num1 == num2)
        {
            cout << "The numbers are equal\n";
        }

        cout << "The smaller number is: " << smaller_num << "\n";
        cout << "The larger number is: " << larger_num << "\n";

        // Write out "the numbers are almost equal" if the two numbers differ by
        // less than (1.0/100)
        
        bool within_threshold = ((larger_num - smaller_num) < diff_threshold);

        cout << "diff_threshold: " << diff_threshold << "\n";

        if (within_threshold)
        {
            cout << "The numbers are almost equal\n";
        }

        cout << prompt;
    }
    
    return 0;
}
