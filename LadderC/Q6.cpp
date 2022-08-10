#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1e7;
ll n;

ll check(ll a)
{
    if (a > n)
    {
        return 0;
    }
    return 1 + check(a * 10 + 1) + check(a * 10);
}

void solve_hritik()
{
    cin >> n;
    int x = check(1);
    cout << x << endl;
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