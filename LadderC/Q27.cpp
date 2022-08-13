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
    int s;
    cin >> n >> s;
    string str9 = "", str0 = "", maxi, mini;
    if (n == 1 && s == 0)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    if (s > (9 * n) || s == 0)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    // int x = 0;
    // if (s % 9)
    // {
    //     x = 1;
    // }
    // if (n < (s / 9 + x))
    // {
    //     cout << -1 << " " << -1 << endl;
    //     return;
    // }
    int nine = s / 9;
    int rem = s % 9;
    if (rem == 0)
    {
        nine--;
        rem = 9;
    }
    int zero = n - nine - 1;
    for (int i = 0; i < nine; i++)
    {
        str9 += '9';
    }
    // str9 += to_string(rem);
    for (int i = 0; i < zero; i++)
    {
        str0 += '0';
    }
    maxi = str9 + to_string(rem) + str0;
    if (zero)
    {
        zero--;
        str0.pop_back();
        mini += '1';
        mini += str0 + to_string(rem - 1) + str9;
    }
    else
    {
        mini = to_string(rem) + str9;
    }
    cout << mini << " " << maxi << endl;
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