/*
04. L1-6-4 子樹大小

8
1 2
1 8
3 2
4 2
5 4
6 4
4 7

8 6 1 4 1 1 1 1

*/

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[3000];
// int record[3000];
// int ans[100000];
// int maxv;
// int dfs(int s)
// {
//     int total = 1;
//     for (int i = 0; i < v[s].size(); i++)
//     {
//         if (record[v[s][i]] != 1)
//         {
//             record[v[s][i]] = 1;
//             total += dfs(v[s][i]);
//         }
//     }
//     ans[s] += total;
//     return ans[s];
// }

// int main()
// {
//     int n, q;
//     cin >> n;

//     int a, b;
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }

//     memset(record, 0, sizeof(record));
//     record[1] = 1;
//     dfs(1);
//     for(int i = 1; i <= n; i++){
//         if ( i != 1) cout << " ";
//         cout << ans[i];
//     }

// }

/*
練習題


血緣關係    40%
https://zerojudge.tw/ShowProblem?problemid=b967

樹狀圖分析  90%
https://zerojudge.tw/ShowProblem?problemid=c463

*/

/* 暴力 */

/*
獨眼怪試密碼

n個數字 m種可能


*/

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[3000];
// int record[3000];
// int ans[100000];
// string s = "";
// int n, m;
// void dfs(int l, int m)
// {
//     if(l == 0){
//         cout << s << "\n";
//         return;
//     }
//     l = l - 1;
//     for(int i = 0; i <= m; i++){
//         s += to_string(i);
//         dfs(l, m);
//         s = s.substr(0, s.size() - 1);
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     dfs(n, m);

// }

/*
 分蘋果


5
1 1 1 1 1

1

*/

// def dfs(index):
//     global minv
//     if index == n:
//         a1 = 0
//         a2 = 0
//         for i in range(n):
//             if t[i] == 0:
//                 a1 += a[i]
//             else:
//                 a2 += a[i]
//         minv = min(minv, abs(a1-a2))
//         return
//     for i in range(2):
//         t[index] = i
//         dfs(index+1)
// n = int(input())
// a = list(map(int,input().split()))
// t = [-1]*n
// minv = 10**9

// dfs(0)
// print(minv)

/*
暴力法


費氏數列    遞迴版
f(0) = 0
f(1) = 1
f(n) = f(n-1) + f(n-2)

5
f(5) = ?
*/

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[3000];
// int record[3000];
// int ans[100000];
// string s = "";
// int n, m;
// int dfs(int n)
// {
//     if(n == 0){
//         return 0;
//     }else if (n == 1)
//     {
//         return 1;
//     }

//     return dfs(n - 1) + dfs(n - 2);

// }

// int main()
// {
//     cin >> n;

//     cout << dfs(n);

// }

/*
記憶優化


費氏數列    遞迴版
f(0) = 0
f(1) = 1
f(n) = f(n-1) + f(n-2)
*/

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[3000];
// int record[3000];
// int dfs(int n)
// {
//     if(n == 0){
//         return 0;
//     }else if (n == 1)
//     {
//         return 1;
//     }else if(record[n] != -1){
//         return record[n];
//     }

//     record[n] = dfs(n - 1) + dfs(n - 2);
//     return record[n];
// }

// int main()
// {
//     int n;
//     cin >> n;
//     memset(record, -1, sizeof(record));
//     cout << dfs(n);

// }

/*
01. L1-5-1 爬樓梯(I)
暴力法 優化成 記憶化搜索
*/

#include <bits/stdc++.h>
using namespace std;

int record[1000000];
int ans = 0;
const int mod = 1e9+7;
int ed;
int dfs(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (record[n] != -1)
    {
        return record[n];
    }

    long long tmp = 0;
    for (int i = 1; i <= 3; i++)
    {
        if (n - i >= 0)
        {
            tmp = (tmp + dfs(n - i)) %1000000007;
        }
    }
    record[n] = tmp;
    return record[n];
}

int main()
{

    cin >> ed;
    memset(record, -1, sizeof(record));
    dfs(ed);
    cout << record[ed];
}