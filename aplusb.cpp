#include <iostream>
using namespace std;

int main()
{
    long long N, i = 0, a, b;
    cin >> N;
    long long T[N];
    while (i < N)
    {
        cin >> a >> b;
        T[i] = a + b;
        i++;
    }
    i = 0;
    while (i < N)
    {
        cout << T[i] << endl;
        i++;
    }

    return 0;
}