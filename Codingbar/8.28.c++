/*
連續採購 暴力版

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     for (int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     int total = 0;
//     for (int i = 0; i < n-k+1; i++){
//         total = 0;
//         for (int j = 0; j < k; j++)
//         {
//             total += a[i+j];
//         }
//         if(i != 0) cout << " ";
//         cout << total;
//     }
// }

/*
優化

*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n, k;
//     cin >> n >> k;
//     long long a[n+1] = {0};
//     for (int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     long long total = 0;
//     for (int i = 0; i < n; i++){
//         if (i < k)
//         {
//             total += a[i];
//             if (i == k -1) cout << total;
//             continue;
//         }
//         if (i >= k) cout << " ";
//         total += a[i];
//         total -= a[i-k];
//         cout << total;
//     }
// }

/*
L2-3-2 吃餅乾
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n, k;
//     cin >> n >> k;
//     long long a[n+1] = {0};
//     for (int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     int total = 0, maxv = -1;
//     int i = 0;
//     for (int j = 0; j < n; j++){
//         while(total + a[j] > k){
//             total -= a[i];
//             i += 1;
//         }
//         total += a[j];
//         maxv = max(maxv, j - i + 1);
//     }
//     cout << maxv;
// }

/*
最萌身高差

5 3
1 8 3 9 10
4
1
7

NO
YES
YES
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n, q;
//     cin >> n >> q;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr+n);

//     int k, tmp,flag, index;
//     for (int i = 0; i < q; i++){
//         cin >> k;

//         tmp = 0, flag = 0, index = 0;
//         for (int j = 0; j < n; j++){
//             if(tmp < k){
//                 tmp = arr[j] - arr[index];
//             }
//             while(tmp > k){
//                 index++;
//                 tmp = arr[j] - arr[index];
//             }
//             if(tmp == k){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             cout << "NO" << "\n";
//         }else{
//             cout << "YES" << "\n";
//         }
//    }

// }

/*
美麗彩帶

*/
// #include<bits/stdc++.h>
// using namespace std;
// map<int,int> mp;
// int cnt = 0 , ans = 0;
// signed main(){
// 	ios::sync_with_stdio(false),cin.tie(0);
// 	int n , m;
// 	cin >> m >> n;
//     int s[n];
//     map<int,int> mp;

// 	for(int i=0 ; i<n ; ++i) cin >> s[i];
//     int index = 0, ans = 0;
// 	for(int i=0 ; i<n ; ++i){
//         if(mp[s[i]] == 0){
//             mp[s[i]]++;
//         }else{
//             while(mp[s[i]] != 0){
//                 mp[s[index]]--;
//                 index++;
//             }
//             mp[s[i]]++;
//         }
//         	// cout << i << " " << index << '\n';
//         if(i-index+1 >= m){
//             ans += 1;
//             // cout << ans << "n" << "\n";
//         }
// 	}
// 	cout << ans << '\n';
// }

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