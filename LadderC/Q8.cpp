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

void solve_hritik()
{
    int k;
    cin >> n >> k;
    string str;
    cin >> str;
    int check[26], ans[26];
    memset(check, 0, sizeof(check));
    memset(ans, 0, sizeof(ans));
    for (int i = 0; i < n; i++)
    {
        check[str[i] - 'a']++;
    }
    for (int i = 0; i < 26 && k > 0; i++)
    {
        ans[i] = min(check[i], k);
        k = k - min(check[i], k);
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[str[i] - 'a'] > 0)
        {
            ans[str[i] - 'a']--;
            continue;
        }
        cout << str[i];
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