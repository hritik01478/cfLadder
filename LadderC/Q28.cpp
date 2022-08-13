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
    ll r, avg, sum = 0;
    cin >> n >> r >> avg;
    vector<pair<ll, ll>> arr(n);
    rep(i, n)
    {
        ll a, b;
        cin >> a >> b;
        sum += a;
        arr[i].first = b;
        arr[i].second = r - a;
    }
    if ((avg * n) <= sum)
    {
        cout << 0 << endl;
        return;
    }
    ll ctr = 0, req = (avg * n) - sum;
    sort(arr.begin(), arr.end());
    int i = 0;
    while (req)
    {
        ctr += arr[i].first * (min(req, arr[i].second));
        req = req - min(arr[i].second, req);
        i++;
    }
    cout << ctr << endl;
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