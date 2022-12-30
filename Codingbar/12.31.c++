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

// #include <bits/stdc++.h>
// using namespace std;

// int n, m, total = 0, ans = 1000;
// int a[21];

// void dfs(int n, int m)
// {
//     if(n == -1){
//         int tmp = total - m;
//         tmp = abs(tmp - m);
//         ans = min(ans, tmp);
//         return ;
//     }

//     dfs(n - 1, m);
//     dfs(n - 1, m + a[n]);

// }

// int main()
// {
//     cin >> n;

//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         total += a[i];
//     }

//     dfs(n - 1, 0);
//     cout << ans ;
// }

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


記憶化搜索
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

/*

02. L1-5-3 爬樓梯(II)


遞推
*/

// #include <bits/stdc++.h>
// using namespace std;

// int dp[1000000];
// int ans = 0;
// const int mod = 1e9 + 7;
// int ed, le;

// int main()
// {

//     cin >> ed >> le;
//     dp[0] = 1;
//     for (int i = 1; i <= ed; i++)
//     {
//         for (int j = 1; j <= le; j++)
//         {
//             if (i >= j)
//             {
//                 dp[i] = (dp[i] + dp[i - j]) % 1000000007;
//             }
//         }
//     }

//     cout << dp[ed];
// }


/*
背包問題

03. L1-5-4 滿載而歸
記憶化搜索

8
3 2 4
1 2 3 


*/
// #include <bits/stdc++.h>
// using namespace std;

// int dp[10000][10000];
// int w[100000], v[100000];
// int n, x;
// int dfs(int i, int j)
// {
//     if (i == -1)
//     {
//         return 0;
//     }
//     else if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }

//     int tmp = 0;
//     if (j + w[i] <= x){
//         tmp = max(tmp, dfs(i - 1, j + w[i]) + v[i]);
//     }
//     tmp = max(tmp, dfs(i - 1, j));
//     dp[i][j] = tmp;
//     return tmp;
// }

// int main()
// {

//     cin >> n >> x;
    
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> w[i] >> v[i];

//     }
    
//     memset(dp, -1, sizeof(dp));
//     cout << dfs(n - 1, 0);
   
// }


/*
背包問題

03. L1-5-4 滿載而歸
遞推

8
3 2 4
1 2 3 


*/
// #include <bits/stdc++.h>
// using namespace std;

// int dp[10008][10008];
// int w[100000], v[100000];
// int n, x;
// int main()
// {

//     cin >> n >> x;
    
//     for (size_t i = 1; i <= n; i++)
//     {
//         cin >> w[i] >> v[i];

//     }
    
//     memset(dp, 0, sizeof(dp));
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= x; j++)
//         {
//             if (j >= w[i]){
//                 dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i]] + v[i]);
//             }else{
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
        
//     }
//     cout << dp[n][x];
   
// }

/* 

作業:
    02. L1-5-3 爬樓梯(II) 

    無法以重量的數字紀錄
    換個想法 
    我們求最少公斤的最大價值，
    就可以以價值當索引值    
*/

/*
背包問題

05. L1-5-6 滿載而歸 (III)
記憶化搜索

8
3 2 4
1 2 3 


*/
// #include <bits/stdc++.h>
// using namespace std;

// int dp[10009][10009];
// int w[100000], v[100000];
// int n, x;
// int dfs(int i, int j)
// {
//     if (i == -1)
//     {
//         return 0;
//     }
//     else if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }

//     // 改成無限個 == 盡量拿
//     int tmp = 0;
//     for (int c = 0; c < 1000; c++)
//     {
//         if (c == 0){
//             tmp = max(tmp, dfs(i - 1, j));
//             continue;
//         }
//         if (j + w[i]*c <= x){
//             tmp = max(tmp, dfs(i - 1, j + w[i]*c) + v[i]*c);
//         }else{
//             break;
//         }
//     }
    
//     dp[i][j] = tmp;
//     return tmp;
// }

// int main()
// {

//     cin >> n >> x;
    
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> w[i] >> v[i];

//     }
    
//     memset(dp, -1, sizeof(dp));
//     cout << dfs(n - 1, 0);
   
// }


/*
背包問題

05. L1-5-6 滿載而歸 (III)
遞推

8
3 2 4
1 2 3 


*/
// #include <bits/stdc++.h>
// using namespace std;

// int dp[10008][10008];
// int w[100000], v[100000];
// int n, x;
// int main()
// {

//     cin >> n >> x;
    
//     for (size_t i = 1; i <= n; i++)
//     {
//         cin >> w[i] >> v[i];

//     }
    
//     memset(dp, 0, sizeof(dp));
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= x; j++)
//         {
//             for (int c = 0; c < 1000; c++)
//             {
//                 if (c == 0){
//                     dp[i][j] = dp[i-1][j];
//                     continue;
//                 }
//                 if (j >= w[i]*c ){
//                     dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]*c] + v[i]*c);
//                 }else{
//                     break;
//                 }
//             }
//         }
        
//     }
//     cout << dp[n][x];
   
// }