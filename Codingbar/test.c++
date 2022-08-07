#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int  n, k;
    cin >> n >> k;
    vector<long long> times[4];
  
    for (int i = 0; i < n; ++i)
    {

        times[i].push_back(4);
    }

    cout << times[0].size();
    sort(times.begin(),times.end());
}