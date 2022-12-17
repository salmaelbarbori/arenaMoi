#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    long long int Tab[t], i = 0, j, tmp, sum;
    while (i < t)
    {
        cin >> Tab[i];
        i++;
    }
    i = 0;
    // traitement
    while (i < t)
    {
        if (Tab[i] == 0 || Tab[i] == 1)
            cout << 1 << endl;
        else if (Tab[i] <= 4)
        {
            j = 1;
            tmp = Tab[i];
            sum = Tab[i];
            while (j < tmp)
            {
                sum = sum * (Tab[i] - j);
                j++;
            }
            cout << sum % 10 << endl;
        }
        else
            cout << 0 << endl;
        i++;
    }

    return 0;
}