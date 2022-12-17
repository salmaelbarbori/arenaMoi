#include <iostream>
using namespace std;

int main()
{
    char temp;
    int T, i = 0;
    cin >> T;
    string tab[T];
    while (i < T)
    {
        cin >> tab[i];
        // cout<<tab[i]<<endl;
        i++;
    }
    // swap
    i = 0;
    while (i < T)
    {
        if (tab[i].length() == 1)
            cout << tab[i] << endl;
        else
        {
            temp = tab[i][0];
            tab[i][0] = tab[i][1];
            tab[i][1] = temp;
            cout << tab[i] << endl;
        }
        i++;
    }
    return 0;
}
