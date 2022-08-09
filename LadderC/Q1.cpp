#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e7;
ll n;

// ll gcd(ll a, ll b)
// {
//     return b == 0 ? a : gcd(b, a % b);
// }

// ll power(ll x, ll y)
// {
//     ll res = 1;
//     if (y == 0)
//         return 1;
//     while (y)
//     {
//         if ((y & 1LL))
//         {
//             res = (res * x) % mod;
//             y--;
//         }
//         y >>= 1LL;
//         x = (x * x) % mod;
//     }
//     return res;
// }

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

void solve()
{
    cin >> n;
    int four = 0, seven = 0;
    if (n < 4)
    {
        cout << -1 << "\n";
        return;
    }

    for (int i = 0; (4 * i) <= n; i++)
    {
        ll x = n - (4 * i);
        if ((x % 7) == 0)
        {
            seven = x / 7;
            four = i;
            break;
        }
    }
    string ans = "";
    if (four || seven)
    {
        for (int i = 0; i < four; i++)
        {
            ans = ans + "4";
        }
        for (int i = 0; i < seven; i++)
        {
            ans = ans + "7";
        }
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
        return;
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
        solve();
    }
}