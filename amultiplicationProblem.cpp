#include <iostream>

using namespace std;

int main()
{
    // at first i used int then since the numbers are big, it overflows so here i am using double
    double A, B, C;
    cin >> A >> B >> C;
    if (A * B >= C)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}