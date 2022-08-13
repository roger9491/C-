#include<bits/stdc++.h>
using namespace std;
int main()
{
<<<<<<< HEAD
    
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
=======

    int n;
    cin >> n;
    int a;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; i < n; i++)
        {


        }

    }


    // 2n vs n**2
    /*
    n = 2
    4       4
    n = 10
    20       100
    n = 1000
    2000    1000000

    n**2 = > n*n
    2*n = >  2*n
    
    log 10**5 
    => 10**5 能被 2 除幾次
    16 ~ 17
    2**10 = > 10 ** 3 * 100
    10
    2** 5 * 2 ** 5
    32 * 32
    2**6 = 64
    2**7 = 128
    n = 10**5
    n log n => 10**5 * (16 ~ 17)
    */
    return 0;
}
>>>>>>> e4e4df1e3f8a1f85c87f2cd5d1e824bdf27054a6
