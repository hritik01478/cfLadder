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

int binarySearch(ll arr[], int l, int r, ll x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] >= x && arr[mid - 1] < x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    ll arr[n], presum[n + 1], b[m];
    presum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        presum[i + 1] = presum[i] + arr[i];
    }

    for (int i = 0; i < m; i++)
        cin >> b[i];

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << presum[i];
    // }

    int x = 1;
    for (int i = 0; i < m; i++)
    {
        x = binarySearch(presum, x, n + 1, b[i]);
        cout << x << " " << b[i] - presum[x - 1] << endl;
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