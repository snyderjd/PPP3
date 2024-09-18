#include<iostream>
#include<string>
#include "PPPheaders.h"

using namespace std;

int area(int length, int width);
int framed_area(int x, int y);
double f(int x, int y, int z);

int main()
{
    // Try to compile these and see how the compiler responds
    // int s1 = area(7,2;
    // int s2 = area(7,2)
    // Int s3 = area(7,2);
    // int s4 = area('7, 2);

    // Try to compile these and see how the compiler responds
    // int x0 = arena(7,2);
    // int x1 = area(7);
    // int x2 = area("seven", 2);

    // ============================

    // double result1 = f(1, 2, 3);
    // double result2 = f(7, -3, 1);

    // cout << result1 << "\n";
    // cout << "---------------\n";
    // cout << result2 << "\n";
    // cout << "---------------\n";


    // ============================
    try
    {
        int num1 = 0;
        int num2 = 0;
        cout << "Please enter two integers: \n";
        cin >> num1 >> num2;

        int result = area(num1, num2);
        cout << "area: " << result << "\n";

        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
}

int area(int length, int width)
{
    int area = 0;

    // calculate the area of a rectangle
    if (length <= 0 || width <= 0)
    {
        error("Non-negative length or width");
    }
    else
    {
        area = length * width;
    }

    return area;
}

int framed_area(int x, int y)
{
    // calculate area within frame
    constexpr int frame_width = 2;
    return area(x - frame_width, y - frame_width);
}

double f(int x, int y, int z)
{
    cout << "x: " << x << "\n";
    cout << "y: " << y << "\n";
    cout << "z: " << z << "\n";

    int area1 = area(x, y);
    int area2 = framed_area(x, z);
    int area3 = framed_area(y, z);

    if (area1 <= 0 || area2 <= 0 || area3 <= 0)
    {
        error("non-positive area");
    }

    double ratio = double(area1)/area3;
    cout << "ratio: " << ratio << "\n";

    return ratio;
}
