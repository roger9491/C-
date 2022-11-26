// '''
// 最短距離
// 兩點之間的最短"距離"

// '''

// #include<bits/stdc++.h>
// using namespace std;
// const int maxn = 100050;
// vector<int> v[maxn];
// bool vis[maxn];
// int ans[maxn];
// int main(){
//  	int n , m , S;
//  	cin >> n >> m >> S;
//  	for(int i=0 ; i<m ; ++i){
//  		int a,b; cin >> a >> b;
//  		v[a].push_back(b);
//  		v[b].push_back(a);
//  	}
//  	//BFS
//  	queue<int> q;
//  	q.push(S);
//     int dis = 0;
//  	vis[S] = 1;
//     int c;
//  	while(q.size()){
//         c = q.size();

//         while (c--){
//             int now = q.front();
//             q.pop();
//             ans[now] = dis;
//             for(int i=0 ; i<v[now].size() ; ++i){
//                 if(!vis[ v[now][i] ]){
//                     vis[ v[now][i] ] = true;
//                     q.push(v[now][i]);
//                 }
//             }
//         }
//         dis += 1;

//  	}
//  	for(int i=1 ; i<=n ; ++i) cout << ans[i] << ' ';
// }

// # bfs(0,0)
// '''
// (1) 走訪所有的點
// (2) 判斷兩點之間有沒有路徑
// (3) 判斷兩點之間最短距離
// 缺點: 不好紀錄路徑
// '''

/*
練習題

闖關路線 bfs
d094: Q-7-5. 闖關路線
https://judge.tcirc.tw/ShowProblem?problemid=d094
 */

/*
dfs : 深度優先搜尋

真的模仿我們走路情況


解決的問題

(1) 兩點之間有沒有路徑
(2) 走完所有的點


遞迴
    函式 呼叫自己
*/


// #include<bits/stdc++.h>
// using namespace std;

// void a(int n) {
//        if (n > 99 ) return;
//     cout << n << "\n";
 
//     a(n + 1);
// }

// int main(){
//     a(5);
// }

// #include <bits/stdc++.h>
// using namespace std;

// int a(int n){
//     if(n == 1){  // (1) 邊界值 n == 1 return n
//         return 1;
//     }
//     return a(n-1) + n;  // 遞迴關係式
// }

// int main(){
//     cout << a(5);
// }

/*
用遞迴
1 + 2 + .. +  100 a(100) b(100) p(100)
1+ 2 + .. + 99 a(99)
a(100) = a(99) + 100
a(n) = a(n - 1) + n
a(99) = a(98) + 99
(1) 邊界值 n == 1 return n
(2) 遞迴關係式
    原本的問題 和 比自己小的問題 之間的關係
a(100)
a(n): 1+..+ n
a(1): 1
a(2): 1+2
a(3): 1 + 2 + 3
a(4): 1 + 2 + 3 + 4
a(4) = a(3) + 4
a(5) = a(4) + 5
a(n) = a(n-1) + n 遞迴關係式
*/


// #include<bits/stdc++.h>
// using namespace std;

// int a(int n) {
//     if (n == 1 ) return n;
//     return a(n - 1) + n;
// }

// int main(){
//     cout << a(5);
// }


/*
輸入一個數字 n
用遞迴 1+ ..+n


5
a(5) = a(4) + 5
a(4) = a(3) + 4
a(3) = a(2) + 3
a(2) = a(1) + 2
        1
a(1) = a(2) + 1
a(2) = a(3) + 2
*/





/*
dfs 深度優先搜索

核心思想 : 模仿人類走路

dict={0:[2,3],2:[10],3:[4,5],5:[6]}
遍歷所有的點

6
0 2
0 3
2 10
3 4
3 5
5 6
*/


#include<bits/stdc++.h>
using namespace std;

vector<int> v[1000];

void dfs(int n) {
    cout << n << "\n";
    if (!v[n].size()) return;

    for (int i = 0; i < v[n].size(); i++)
    {
        dfs(v[n][i]);
    }
}

int main(){
    int n;
    int a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
    }
    dfs(0);
}


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
// # dic = {0:[2,3],2:[10],3:[4,5],5:[6]}

// # def f(n):
// #     temp.append(n)
// #     if n not in dic:
// #         print(temp)
// #         return
// #     else:
// #         for i in dic[n]:
// #             f(i)
// #             del temp[-1]
        
// # temp = []
// # f(0)
// # print(temp)

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

*/


