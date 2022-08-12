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
    int m, t, n;
    cin >> n >> m;
    char str[128][128];
    for (int i = 0; i < n; i++)
    {
        // cout << "enter: ";
        cin >> str[i];
    }

    ll ans = 1;
    for (int k = 0; k < m; k++)
    {
        set<char> s;
        rep(i, n)
        {
            s.insert(str[i][k]);
        }
        ans = ans * s.size() % mod;
    }
    cout << ans;
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