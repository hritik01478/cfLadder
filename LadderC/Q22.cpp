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
    string str = "";
    rep(i, n)
    {
        string st;
        cin >> st;
        if (st == "pwd")
        {
            if (str.size() == 0)
                cout << "/" << endl;
            else
                cout << str << endl;
        }
        else
        {
            string s;
            cin >> s;
            if (str.size() == 1)
            {
                str.pop_back();
            }
            if (str.size() == 0 && s[0] != '/')
            {
                str += '/';
            }
            if (s[0] == '/')
            {
                str.clear();
            }
            for (int j = 0; j < s.size(); j++)
            {
                if (j == 0 && s[0] == '/' && str[str.size() - 1] == '/')
                {
                    continue;
                }
                if (j != s.size() - 1 && s[j] == '.' && s[j + 1] == '.')
                {
                    for (int k = str.size() - 2; str[k] != '/'; k--)
                    {
                        str.pop_back();
                    }
                    str.pop_back();
                    str.pop_back();
                    j++;
                }
                else
                    str += s[j];
            }
            str += '/';
        }
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