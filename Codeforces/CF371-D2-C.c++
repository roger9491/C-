#include<bits/stdc++.h>
// #include<iostream>
// #include <numeric>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n[3], p[3];
    cin >> n[0] >> n[1] >> n[2];
    cin >> p[0] >> p[1] >> p[2];

    long long  r;
    cin >> r;

    int t[3] = {0};
    for (size_t i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'B':
            t[0] += 1;
            break;
        case 'S':
            t[1] += 1;
            break;
        case 'C':
            t[2] += 1;
            break;
        default:
            break;
        }
    }
    cout << 1;
    int temp = 1000, ans = 0;
    int a, b, c;
    temp = min(n[0]/t[0],n[1]/t[1]);
    temp = min(temp, n[2]/t[2]);
    cout << 1;
    for (int i = 0; i < 3; i++)
    {   
        cout << i << "\n";
        n[i] -= temp*t[i];
    }
    cout << 1;
    ans += temp;
     cout << ans;
    int sum;
    while(accumulate(n, n+3, sum) && r)
    {

        temp = 0;
        for (int i = 0; i < 3; i++)
        {
            if (n[i]<t[i])
            {
                temp += (t[i] - n[i])*p[i];
                n[i] = 0;
            }
        }
        if (temp > r)
        {
            break;
        }else
        {
            r -= temp;
            ans += 1;
        }
    
    }

    cout << ans;
    return 0;
}