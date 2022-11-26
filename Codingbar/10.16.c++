/*

adjacency matrix
鄰接矩陣    (二維陣列)  少用
    查詢 有沒路 O(1)
         子節點 O(n)    n:節點數量
    0   1   2   3   4   5
0   1   0   1   0   1   1
1   0   1   0   0   1   1
2   1   0   1   1   1   0
3   0   0   1   1   0   0
4   1   1   1   0   1   1
5   1   1   0   0   1   1

m[1][4]

adjacency list
鄰接串列

0: 2 4 5
1: 4 5
2: 3 0 4
3: 2
4: 0 1 2
5: 0 1 4
優勢: 快速找子節點

vector    索引值:節點 值:子節點
vector<int> v[10000];
v[0] = {2,3};
v[2] = {10};
v[3] = {4,5};
v[5] = {6};
int a[100] = {0};
map<int, vector<int>> mp;
mp[0] = {2,3};
*/

/*
bfs 廣度優先搜索

核心思想 : 擴散

0 當起始點 輸出能到達的所有節點
a -> b
6
0 2
0 3
2 10
3 4
3 5
5 6

v[0].push_back(3)
鄰接串列方式存
bfs
把遇到的節點印出來

vector
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> v[10000];
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<int> q;
    int New[10000] = {0};   // 記錄找過的節點
    q.push(0);
    New[0] = 1;
    while(q.size()){    // queue還有節點就持續的bfs
        int num = q.front();
        cout << num << "\n";
           New[num] = 1;
        q.pop();
        for(int j = 0; j < v[num].size(); j++){
            if(New[v[num][j]] == 1){
                continue;
            }
            q.push(v[num][j]);

        }
        
    }
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> v[10000];
//     queue<int> qu;
//     qu.push(0);
//     int n;
//     cin >> n;
//     int a, b;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a >> b;
//         v[a].push_back(b);
//     }

//     // bfs
//     int node;
//     while(qu.size()){
//         node = qu.front();
//         cout << node << "\n";
//         qu.pop();
//         for(int i=0; i<v[node].size(); i++){
//             qu.push(v[node][i]);
//         }

//     }

// }

/*

輸入 n，代表接下來n個輸入
輸入 兩個數字 代表節點相連

輸出
所有0能連通的節點

ex
9
0 2
0 3
2 1
2 10
10 9
10 11
3 4
3 5
5 6
'''
*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> v[10000];
//     queue<int> qu;
//     qu.push(0);
//     int n;
//     cin >> n;
//     int a, b;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }

//     // bfs
//     int record[100000] = {0};
//     record[0] = 1;
//     int node;
//     while(qu.size()){
//         node = qu.front();
//         cout << node << "\n";
//         qu.pop();
//         for(int i=0; i<v[node].size(); i++){
//             if (record[v[node][i]] == 0) {
//                 qu.push(v[node][i]);
//                 record[v[node][i]] = 1;
//             }

//         }

//     }

// }

/*
L1-6-1 白色區塊

*/


// #include <bits/stdc++.h>
// using namespace std;

// int old[1000][1000];
// int dir[][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
// int l,w;
// char pict[1000][1000];

// void bfs(int i, int j){
//     old[i][j] = 1;
//     queue<pair<int, int>> q;
//     while(q.size()){
//         int num = q.front().first;
//         int num2 = q.front().second;
//         q.pop();
//         for(int k = 0; k < 4; k++){
//             int a = num + dir[k][0];
//             int b = num2 + dir[k][1];
//             if((0 <= a && a <= l) && (0 <= b && b <= w)){
//                 if(old[a][b] == 0){
//                     if(pict[a][b] == 'W'){
//                         q.push({a,b});
//                         old[a][b] = 1;
//                     }
//                 }
//             }
//         }
//     }
// }

// int main(){
//     cin >> l >> w;
//     for(int i = 0; i < l; i++){
//         for(int j = 0; j < w; j++){
//             cin >> pict[i][j];
//         }
//     }
//     memset(old, 0, sizeof(old));
//     for(int i = 0; i < l; i++){
//         for(int j = 0; j < w; j++){
//             if(pict[a][b] == 'W' && old[a][b] == 0){
                
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int record[1000][1000];
// char matrix[1000][1000];
// void bfs(int i, int j );
//     int n, m;
// int main(){
//     memset(record, 0, sizeof(record));
//     cin >> n >> m;
//     char a;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++){
//             cin >> matrix[i][j];
//         }
//     }
//     int ans = 0;
//     // bfs
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if (matrix[i][j] == 'W' && record[i][j] == 0){
//                 bfs(i, j);
//                 ans ++;
//             }
//         }
//     }
//     cout << ans;

// }

// void bfs(int i, int j ){
//     record[i][j] = 1;
//     queue<pair<int, int>> qu;
//     qu.push({i, j});
//     int dir[][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
//     int x, y;
//     int next_x, next_y;

//     while(qu.size()){
//         x = qu.front().first;
//         y = qu.front().second;
//         qu.pop();
//         for(int i=0; i < 4; i++){
//             next_x = x + dir[i][0];
//             next_y = y + dir[i][1];
//             if (0<= next_x && next_x < n && 0 <= next_y && next_y < m){
//                 if (record[next_x][next_y] == 0 && matrix[next_x][next_y] == 'W') {
//                 qu.push({next_x, next_y});
//                 record[next_x][next_y] = 1;
//             }
//             }
//         }

//     }
// }

