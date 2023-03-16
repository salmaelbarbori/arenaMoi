#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve (){
    ll n, phi;
    cin >> n;
    phi= n;
    for (auto i = 2; i * i <= n; i++)
    {
        if ( n % i == 0)
        {
            while (n % i == 0) 
			{
			    n = n / i;
			}
			phi -= phi/ i;
        }

    }
    if (n > 1) 
		phi -= phi / n;
    cout << phi <<endl;
}
int main () {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
