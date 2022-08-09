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
    int m, ans = 0;
    cin >> n >> m;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for (int i = 0; i < m; i++)

        if (arr[i] < 0)
            ans += arr[i];

        else
            break;

    cout << abs(ans) << "\n";
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