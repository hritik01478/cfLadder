#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e7;
ll n;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

ll power(ll x, ll y)
{
    ll res = 1;
    if (y == 0)
        return 1;
    while (y)
    {
        if ((y & 1LL))
        {
            res = (res * x) % mod;
            y--;
        }
        y >>= 1LL;
        x = (x * x) % mod;
    }
    return res;
}

ll digits(ll n)
{
    ll ctr = 0;
    while (n)
    {
        ctr++;
        n /= 10;
    }
    return ctr;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int t = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        t += s[i] - 48;
    }
    int a;
    if (n > 1)
        count++;
    while (t > 9)
    {
        a = t;
        t = 0;
        count++;
        while (a)
        {
            t += a % 10;
            a = a / 10;
        }
    }
    cout << count << endl;

    return;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}