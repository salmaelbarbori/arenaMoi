#include <iostream>
using namespace std;
int main()
{
    string s;
    int i = 0;
    cin >> s;
    while (s[i] != '\0')
    {
        if (s[i] == 'c')
        {
            cout << "Stay Home" << endl;
            return 0;
        }
        i++;
    }
    cout << "Safe" << endl;
    return 0;
}