#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, a, b, c, max_ = 1e6 + 5, count = 0, i;
    int tab[max_];

    cin >> n >> a >> b >> c;

    for (i = 1; i <= a; i++)
        tab[i] = tab[i] + 1;
    for (i = n; i > n - b; i--)
        tab[i] = tab[i] +1;
    for (i = 1; i <= n;i++)
    {
        if (tab[i] < 2)
            count = count + 1;
    }
    if (count >= c)
        cout << "possible";
    else
        cout << "impossible";
}
