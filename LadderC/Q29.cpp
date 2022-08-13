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
    cin >> n;
    int arr[10];
    ll x;
    cin >> x;
    memset(arr, 0, sizeof(arr));
    rep(i, n)
    {
        int rem = x % 10;
        if (rem == 9)
        {
            arr[2]++;
            arr[3] += 2;
            arr[7] += 1;
        }
        else if (rem == 8)
        {
            arr[2] += 3;
            arr[7]++;
        }
        else if (rem == 6)
        {
            arr[3]++;
            arr[5]++;
        }
        else if (rem == 4)
        {
            arr[2] += 2;
            arr[3]++;
        }
        else
        {
            arr[rem]++;
        }

        x = x / 10;
    }

    string ans = "";
    for (int i = 9; i >= 2; i--)
    {
        if (arr[i] > 0)
        {
            for (int j = 0; j < arr[i]; j++)
            {
                ans += to_string(i);
            }
        }
    }
    cout << ans << endl;
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