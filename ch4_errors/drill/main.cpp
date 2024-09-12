#include<iostream>
#include "PPPheaders.h"

using namespace std;

/*
Each code statement has 0 or more errors. Find and remove all errors in each program. When all bugs are removed, the program
will compile, run, and write "Success!"

[x] 6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
[x] 7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";
[x] 8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
[x] 9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
        
        string s = "ape";
        bool c = "fool" > s;

        if (c) 
            cout << "Success!\n";

[x] 10. string s = "ape"; if (s=="fool") cout << "Success!\n";

        string s = "ape";
        
        if (s != "fool")
            cout << "Success!\n";

[x] 11. string s = "ape"; if (s=="fool") cout < "Success!\n";

        string s = "ape";
        
        if (s != "fool") 
            cout << "Success!\n";

[x] 12. string s = "ape"; if (s+"fool") cout < "Success!\n";

        string s = "ape";
        
        if (s + "fool" == "apefool")
            cout << "Success!\n";

[x] 13. vector<char> v(5); for (int i = 0; 0<v.size(); ++i); cout << "Success!\n";

        vector<char> v(5);
        
        for (int i = 0; i < v.size(); ++i)
            cout << "Success!\n";

[x] 14. vector<char> v(5); for (int i = 0; i<=v.size(); ++i); cout << "Success!\n";

        vector<char> v(5);
        
        for (int i = 0; i < v.size(); ++i)
            cout << "Success!\n";

[x] 15. string s = "Success!\n"; for (int i = 0; i<6; ++i) cout << s[i];

        string s = "Success!\n";
        
        for (int i = 0; i < 8; ++i)
            cout << s[i];

        cout << "\n";

[x] 16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";

        if (true)
            cout << "Success!\n";
        else 
            cout << "Fail!\n";

[x] 17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n";

        int x = 2000;
        int c = x;
 
        if (c == 2000)
            cout << "Success!\n";

[x] 18. string s = "Success!\n"; for (int i = 0; i<10; ++i) cout << s[i];

        string s = "Success!\n";

        for (int i = 0; i < 10; ++i) 
            cout << s[i];

[x] 19. vector v(5); for (int i = 0; i<=v.size(); ++i); cout << "Success!\n";

        vector<int> v(1);
        
        for (int i = 0; i < v.size(); ++i)
            cout << "Success!\n";

[x] 20. int i = 0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";

        int i = 0; 
        int j = 9; 
        
        while (i < 10) ++i;
            if (j < i) 
                cout << "Success!\n";

[x] 21. int x = 2; double d = 5/(x-2); if (d==2*x+0.5) cout << "Success!\n";

        int x = 2;
        double d = 5.0/x+2;
           
        if (d == 2*x+0.5)
            cout << "Success!\n";

[x] 22. string<char> s = "Success!\n"; for (int i = 0; i<= 10; ++i) cout << s[i];

        string s = "Success!\n";
        
        for (int i = 0; i < 10; ++i)
            cout << s[i];

[x] 23. int i = 0; while (i<10) ++j; if(j<i) cout << "Success!\n";

        int i = 0;
        int j = 0;
        
        while (i < 10) ++i;
            if(j < i)
                cout << "Success!\n";

[x] 24. int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";

        int x = 4;
        double d = 8.5;
  
        if (d == 2*x+0.5)
            cout << "Success!\n";

[x] 25. cin << "Success!\n";

        cout << "Success!\n";
*/

int main()
{
    try
    {
        cout << "Success!\n";
        
        return 0;
    }
    catch(exception& e)
    {
        cerr << "error: " << e.what() << "\n";
        return 1;
    }
    catch (...)
    {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }
}
