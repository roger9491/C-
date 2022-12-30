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
// vector<int> v[100001];
// vector<int> record;
// int read[100001] = {0};
// int ans[100001] = {0};

// void dfs(int n){
//     record.push_back(n);
//     for(int i = 0; i < record.size(); i++){
//         ans[record[i]] += 1;
//     }
//     // cout << "n: " << n << "\n";
//     // for (int i = 1; i < 9; i++)
//     // {
//     //     cout << ans[i] << " ";
//     // }
//     // cout << "\n"; 
//     for(int j = 0; j < v[n].size(); j++){
//         if(read[v[n][j]] == 0){
//             read[v[n][j]] = 1;
//             dfs(v[n][j]);
//             record.pop_back();
//         }
//     }
// }



// int main(){
//     int n;
//     cin >> n;
//     int a,b;
//     for(int i = 0; i < n-1; i++){
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     read[1] = 1;
//     dfs(1);
//     for(int k = 1; k <= n; k++){
//         cout << ans[k] << " ";
//     }
// }














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

// #include <bits/stdc++.h>
// using namespace std;

// int record[1000000];
// int ans = 0;
// const int mod = 1e9+7;
// int ed;
// int dfs(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else if (record[n] != -1)
//     {
//         return record[n];
//     }

//     long long tmp = 0;
//     for (int i = 1; i <= 3; i++)
//     {
//         if (n - i >= 0)
//         {
//             tmp = (tmp + dfs(n - i)) %1000000007;
//         }
//     }
//     record[n] = tmp;
//     return record[n];
// }

// int main()
// {

//     cin >> ed;
//     memset(record, -1, sizeof(record));
//     dfs(ed);
//     cout << record[ed];
// }

/* 


DP Dynamic programming 動態規劃
他是一種算法思想 常見的算法思想 : 分治 貪心 窮舉
核心思想: 通過把原問題分解為相對簡單的子問題的方式求解複雜問題的方法。

我們先來看 能用動態規劃解決問題的條件
最佳子結構
    每個階段的最優解是由之前的某個或某些狀態而來的
重疊子問題
    不同階段的最優解含有重複的之前狀態的最優解
無後效性
    當前的狀態是由之前的狀態的最優解得來，而不管從何而來。
    最短路步數是無後效性的，但是最短路徑就有後效性
    
# 所以我們會發現用動態規劃解決的題目通常會用串列來記錄

實作方式:
    遞推
    記憶化搜索

回頭來看看之前寫的記憶化搜索，想想看如何轉成遞推?
費式數列 遞推

那回到小朋友走樓梯
    如何用動態規劃的方式思考? 如何用動態規劃解決?
    (1) 定義問題    這裡定義的問題 要確保保有最優子結構
        dp[i]: 第i層的走法數量
    (2) 狀態轉移    定義好問題就是快樂的找狀態轉移
        dp[0] = 1 邊界
        dp[1] = 1 邊界
        dp[i] = dp[i-1] + dp[i-2]

5 8
0 1 2 3 4 5
1 1 2 3    
dp[2] = dp[1] + dp[0]
dp[3] = dp[2] + dp[1]

dp[i] = dp[i-1] + dp[i-2]

*/


/*
01. L1-5-1 爬樓梯(I)
記憶化搜索 優化成 遞推
*/

// #include <bits/stdc++.h>
// using namespace std;

// int record[1000000];
// int ans = 0;
// const int mod = 1e9+7;
// int ed;
// int dfs(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else if (record[n] != -1)
//     {
//         return record[n];
//     }

//     long long tmp = 0;
//     for (int i = 1; i <= 3; i++)
//     {
//         if (n - i >= 0)
//         {
//             tmp = (tmp + dfs(n - i)) %1000000007;
//         }
//     }
//     record[n] = tmp;
//     return record[n];
// }

// int main()
// {

//     cin >> ed;
//     memset(record, 0, sizeof(record));
    
//     record[0] = 1;
//     for (int i = 0; i <= ed; i++)
//     {
//         for (int j = 1; j <= 3; j++)
//         {
//             if(i - j >= 0){
//                 record[i] = (record[i] + record[i-j]) %1000000007;
//             }
//         }
        
//         // for (int i = 0; i <= ed; i++)
//         // {
//         //     cout << record[i] << " ";
//         // }
//         // cout << "\n";
        
//     }
    

//     cout << record[ed];
// }














/* 

02. L1-5-3 爬樓梯(II)

*/

// #include <bits/stdc++.h>
// using namespace std;

// int record[1000000];
// int ans = 0;
// const int mod = 1e9+7;
// int ed, le;
// int dfs(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else if (record[n] != -1)
//     {
//         return record[n];
//     }

//     long long tmp = 0;
//     for (int i = 1; i <= le; i++)
//     {
//         if (n - i >= 0)
//         {
//             tmp = (tmp + dfs(n - i)) %1000000007;
//         }
//     }
//     record[n] = tmp;
//     return record[n];
// }

// int main()
// {

//     cin >> ed >> le;
//     memset(record, -1, sizeof(record));
//     dfs(ed);
//     cout << record[ed];
// }



