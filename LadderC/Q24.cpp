#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
typedef long long int ll;
ll mod = 1000000007;
ll n;
vector<ll> arr;

// ll gcd(ll a, ll b)
// {
//     return b == 0 ? a : gcd(b, a % b);
// }

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

// ll digits(ll n)
// {
//     ll ctr = 0;
//     while (n)
//     {
//         ctr++;
//         n /= 10;
//     }
//     return ctr;
// }

void solve_hritik()
{
    ll m;
    cin >> n >> m;
    string str = "";
    if (m > (2 * n + 2))
    {
        cout << -1 << endl;
        return;
    }
    if (n > (m + 1))
    {
        cout << -1 << endl;
        return;
    }
    if (m < n)
    {
        str += '0';
        for (int i = 0; i < m; i++)
        {
            str += "10";
        }
        cout << str << endl;
    }
    else if (m == n)
    {
        for (int i = 0; i < m; i++)
        {
            str += "10";
        }
        cout << str << endl;
    }
    else
    {
        ll x = m - n;
        for (int i = 0; i < n; i++)
        {
            if (x > 0)
            {
                str += '1';
                x--;
            }
            str += "10";
        }
        if (x == 1)
        {
            str += '1';
        }
        else if (x == 2)
        {
            str += "11";
        }
        cout << str << endl;
    }
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
        solve_hritik();
    }
}