#include<iostream>

using namespace std;

// int main()
// {
//     // ********** Convert miles to kilometers **********
//     double miles = 0;

//     cout << "Please enter a number of miles you would like converted to kilometers\n";
//     cin >> miles;

//     cout << "That is " << (miles * 1.609) << " kilometers.\n";
// }

// int main()
// {
//     // ********** Integer input + operations **********
//     double val1 = 0;
//     double val2 = 0;

//     cout << "Please enter 2 decimal values separated by a space:\n";
//     cin >> val1 >> val2;

//     cout << "val1 is: " << val1 << "\n";
//     cout << "val2 is: " << val2 << "\n";
//     cout << "---------------\n";

//     // Smaller vs larger
//     if (val1 > val2)
//     {
//         cout << "val1, " << val1 << " is larger than val2, " << val2 << "\n"
//             << "val2, " << val2 << " is smaller than val1, " << val1 << "\n";
//     }
//     else if (val2 > val1)
//     {
//         cout << "val2, " << val2 << " is larger than val1, " << val1 << "\n"
//             << "val1, " << val1 << " is smaller than val2, " << val2 << "\n";
//     }
//     else
//     {
//         cout << "val1, " << val1 << " is equal to val2, " << val2 << "\n";
//     }
    
//     cout << "---------------\n";

//     // Sum
//     double sum = val1 + val2;    
//     cout << "val1 + val2: " << sum << "\n";
//     cout << "---------------\n";

//     // Difference
//     double difference = val1 - val2;
//     cout << "val1 - val2: " << difference << "\n";
//     cout << "---------------\n";

//     // Product
//     double product = val1 * val2;
//     cout << "val1 * val2: " << product << "\n";
//     cout << "---------------\n";

//     // Ratio
//     double ratio = val1 / val2;
//     cout << "val1 / val2: " << ratio << "\n";
// }

int main()
{
    // ********** Order three integers **********
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;

    cout << "Please enter three integers separated by spaces: \n";
    cin >> val1 >> val2 >> val3;

    cout << "---------------\n";

    if (val1 <= val2 && val2 <= val3)
    {
        cout << val1 << ", " << val2 << ", " << val3 << "\n";
    }

    if (val1 <= val3 && val3 <= val2)
    {
        cout << val1 << ", " << val3 << ", " << val2 << "\n";
    }
    
    if (val2 <= val1 && val1 <= val3)
    {
        cout << val2 << ", " << val1 << ", " << val3 << "\n";
    }
    
    if (val2 <= val3 && val3 <= val1)
    {
        cout << val2 << ", " << val3 << ", " << val1 << "\n";
    }
    
    if (val3 <= val2 && val2 <= val1)
    {
        cout << val3 << ", " << val2 << ", " << val1 << "\n";
    } 
    
    if (val3 <= val1 && val1 <= val2)
    {
        cout << val3 << ", " << val1 << ", " << val2 << "\n";
    }

}