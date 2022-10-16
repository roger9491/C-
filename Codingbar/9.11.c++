/*

福利社阿姨


5 9 8 2 4 3
2 3 4 5 8 9
10 + 12 + 12

*/
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     int N; cin >> N;
//     vector<long long> v;

//     long long k;
//     for(int i=0; i<N; i++){
//         cin >> k;
//         v.push_back(k);
//     }

//     sort(v.begin(), v.end());

//     long long ans = 0;

//     for(int i=0; i<N; i++){
//         ans += (N-i-1) * v[i];
//     }

//     cout << ans * 10;
//     return 0;
// }

/*
西瓜袋
**錯誤解答**

5 3
5 30 50 70 90
20 50 100
*/
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     int N; cin >> N;
//     vector<long long> v;

//     return 0;
// }

/*
連續元素的和


*/
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n; cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = arr[0], tmp = 0;
//     for (int i = 0; i<n; i++){
//         if(tmp + arr[i] < 0){
//             tmp = arr[i];
//         }else{
//             tmp += arr[i];
//         }
//         ans = max(ans, tmp);
//     }
//     cout << ans;
//     return 0;
// }

/* 
無重疊區間

*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     vector<pair<int,int>> vpairs;
//     int n, a, b;
//     cin >> n;
//     pair<int, int> tmp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a >> b;
//         tmp.first = a;
//         tmp.second = b;
//         vpairs.push_back(tmp);
//     }
    
//     sort(vpairs.begin(), vpairs.end());

//     int flag = vpairs[0].second, ans = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if(flag > vpairs[i].first){
//             ans++;
//         }else{
//             flag = vpairs[i].second;
//         }
//     }
//     cout << ans;

// }

/*
L2-2-1 小心毒藥水


*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long n, a[200000];
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     priority_queue<long long, vector<long long>, greater<long long>> pq;
//     long long ans = 0, tmp = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // cout << a[i] << "a[i]\n";
//         // cout << ans << "ans\n";
//         // cout << tmp << "tmp\n";
//         if(a[i] >= 0){
//             ans += 1;
//             tmp += a[i];
//         }else{
//             if(tmp >= abs(a[i])){
//                 tmp += a[i];
//                 ans += 1;
//                 pq.push(a[i]);
//             }else{
//                 if(pq.size() != 0 and pq.top() < a[i]){
//                     tmp -= pq.top();
//                     pq.pop();
//                     pq.push(a[i]);
//                     tmp += a[i];
//                 } 
//             }
//         }
//     }
//     cout << ans;

// }



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector< pair<int, int>> vp;
    pair<int, int> tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp.first >> tmp.second;
        vp.push_back(tmp);
    }
    sort(vp.begin(), vp.end());
    int tf = vp[0].second, count = 0;
    for(int j = 1; j < n; j++){
        if(tf > vp[j].first){
            count += 1;
        }else{
            tf = vp[j].second;
        }
    }
    cout << count;
}