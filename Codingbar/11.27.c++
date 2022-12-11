
/*
dfs 深度優先搜索

核心思想 : 模仿人類走路


dict={0:[2,3],2:[10],3:[4,5],5:[6]}
承上題 印出 0 到 葉節點的路徑

6
0 2
0 3
2 10
3 4
3 5
5 6
*/
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> v[1000];
// vector<int> tmp;
// void dfs(int n) {
//     tmp.push_back(n);
//     if (!v[n].size()){
//         for(int j; j < tmp.size(); j++){
//             cout << tmp[j] << " ";
//         }
//         cout << "\n";
//         return;
//     }

//     for (int i = 0; i < v[n].size(); i++)
//     {
//         dfs(v[n][i]);
//         tmp.pop_back();
//     }
// }

// int main(){
//     int n;
//     int a, b;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a >> b;
//         v[a].push_back(b);
//     }
//     dfs(0);
// }

/*

L1-6-3 最遠距離

8 3
5 6
1 5
4 6
7 1
3 5
8 6
2 8
5
3
2


3
4
5
*/

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[3000];
// int record[3000];
// int maxv;
// void dfs(int s, int len)
// {   
//     maxv = max(len, maxv);
//     for (int i = 0; i < v[s].size(); i++)
//     {
//         if (record[v[s][i]] != 1)
//         {
//             record[v[s][i]] = 1;
//             dfs(v[s][i], len + 1);
//         }
//     }
// }

// int main()
// {
//     int n, q;
//     cin >> n >> q;

//     int a, b;
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }

//     int s;
//     for (int i = 0; i < q; i++)
//     {
//         cin >> s;
//         memset(record, 0, sizeof(record));
//         // int t = 0;
//         // for (size_t i = 0; i < 3000; i++)
//         // {
//         //     t += record[i];
//         // }
//         // cout << "驗證:" << t;
//         maxv = 0;
//         record[s] = 1;
//         dfs(s, 0);
//         cout << maxv << "\n";
//     }
// }


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