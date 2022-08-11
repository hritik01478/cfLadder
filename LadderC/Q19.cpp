#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e7;
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
    cin >> n;
    int ctr = 0;
    vector<ll> ans;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (ctr >= 2)
        {
            break;
        }
        if (!(n % i))
        {
            ctr++;
            ans.push_back(i);
            n = n / i;
        }
    }
    if (ctr == 1 || ctr == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (n == 1 && ctr == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << ans[0] << " " << ans[1] << " " << n << endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve_hritik();
    }
}