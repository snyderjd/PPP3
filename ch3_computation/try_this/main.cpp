#include<iostream>
#include<vector>

using namespace std;

// Write a program that "bleeps" out words you don't like
int main()
{
    string disliked_1 = "Broccoli";

    vector<string> words;
    
    for(string word; cin >> word;)
        words.push_back(word);

    cout << "number of words: " << words.size() << "\n";

    for (int i = 0; i < words.size(); i++)
    {
        if (words[i] == disliked_1)
        {
            cout << "BLEEP" << "\n";
        } else
        {
            cout << words[i] << "\n";
        }        
    }

}

// ====================
// Implement square without using the multiplication operator
// int square(int x)
// {
//     int result = 0;

//     for (int i = 0; i < x; i++)
//     {
//         result+=x;
//     }
    
//     return result;
// }

// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << i << "\t" << square(i) << "\n";
//     }
// }

// ====================

// Use a loop to write out a table of characters with their corresponding integer values
// int main()
// {
//     for (int i = 0; i < 26; ++i)
//     {
//         cout << char('a' + i) << "\t" << i << "\n";
//     }

//     for (int i = 0; i < 26; ++i)
//     {
//         cout << char('A' + i) << "\t" << i << "\n";
//     }
// }

// ====================

// Use the example as a model for a program that converts yen ('y'),
// kroner ('k'), and pounds ('p') into dollars. If you like realism,
// you can find conversion rates on the web
// int main()
// {
//     constexpr double pounds_per_dollar = 0.78;
//     constexpr double yen_per_dollar = 146.59;
//     constexpr double kroner_per_dollar = 10.82;
//     constexpr double swiss_francs_per_dollar = 0.87;

//     double amount = 0;
//     char unit = 'u';

//     cout << "Please enter an amount followed by a unit (y or k or p):\n";
//     cin >> amount >> unit;

//     switch (unit)
//     {
//     case 'y':
//         cout << amount << " yen == " << amount / yen_per_dollar << " dollars\n";
//         break;
//     case 'k':
//         cout << amount << " kroner == " << amount / kroner_per_dollar << " dollars\n";
//         break;
//     case 'p':
//         cout << amount << " pounds == " << amount / pounds_per_dollar << " dollars\n";
//         break;
//     case 'c':
//         cout << amount << " swiss francs == " << amount / swiss_francs_per_dollar << " dollars\n";
//         break;
//     default:
//         break;
//     }
    
//     return 0;
// }