#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,i = 0, max_ = INT_MIN, sum_ = 0;
    cin >> n;
    int tab[n];
    while (i < n){
        cin >> tab[i];
        i++;
    }
    for (i = 0; i < n; i++)
    {
        sum_ += tab[i];
        max_= max (sum_, max_);

        if (sum_ < 0)
            sum_ = 0;
        
    }
    cout << max_;

}
