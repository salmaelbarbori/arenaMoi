#include <iostream>

using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    if (A * B >= C)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}