#include <bits/stdc++.h>
#define _ios_base         \
    ::sync_with_stdio(0); \
    cin.tie(0);

using namespace std;

int main()
{

    long long int n, k, ans = 0;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        if (n / 2 < k)
        {
            k -= n / 2;
            ans += 2 * k;
        }
        else
        {
            ans += 1 + 2 * (k - 1);
        }
    }
    else
    {
        if ((n / 2 + 1) < k)
        {
            k -= (n / 2 + 1);
            ans += 2 * k;
        }
        else
        {
            ans += 1 + 2 * (k - 1);
        }
    }
    cout << ans ;

    return 0;
}
