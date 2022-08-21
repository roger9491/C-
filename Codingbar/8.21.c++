/*
 L1-4-4 奇怪的問題

8 2
1 8 7 5 2 3 6 4
1
100

none
8

lower_bound(begin, end, val)
upper_bound(begin, end, val)
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n, q;
//     cin >> n >> q;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a+n);
//     int x;
//     for(int i = 0; i < q; i++){
//         cin >> x;
//         int *it = lower_bound(a, a+n, x);
//         if (it == a) cout << "none\n";
//         else cout << *--it << "\n";
//     }

// }

/*  
 L1-4-5 奇怪的問題(II)

10
1 1
2 20
1 2
2 1
1 16
1 15
1 1
1 11
2 11
2 13

1
none
2
11

long long
https://blog.csdn.net/CV_Jason/article/details/85244813
*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int q;
//     cin >> q;

//     vector<long long> v;
//     long long opt, a, tmp;
//     int r, l, mid;
//     for (int i = 0; i < q; i++)
//     {
//         cin >> opt >> a;
//         if (opt == 1){
//             v.push_back(a);

//             for (int j = v.size() - 1; j > 0; j--)
//             {   
//                 // cout << "j: " << j << "\n";
//                 if (v[j] < v[j-1]){
//                     tmp = v[j];
//                     v[j] = v[j-1];
//                     v[j-1] = tmp;
//                 }else{
//                     break;
//                 }           

//             }

//         }else{
//             l = 0;
//             r = v.size() - 1;
//             while (l <= r){
//                 // cout << "l r" << l << " " << r << "\n";
//                 mid = (l+r) / 2;
//                 // cout << "mid:" << mid << " " << v[mid] << "\n";
//                 if(v[mid] == a){
//                     r = mid;
//                     break;
//                 }else if(v[mid] > a){
//                     r = mid - 1;
//                 }else{
//                     l = mid + 1;
//                 }
//             }
//             /* 
//             1 1 2 11 15 16 
//                 1. 不存在

//                 2. 存在  
//                     mid - 1 
//             */
//            if (v[r] == a){
//                 if (r <= 0) cout << "none\n";
//                 else cout << v[r - 1] << "\n";
//            }else{
//                 if (r < 0) cout << "none\n";
//                 else cout << v[r] << "\n";
//            }
//         }     
//     }
// }
/* 
 一堆按鈕

*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n, q;
//     cin >> n >> q;
//     int k[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> k[i];
//     }

//     sort(k, k+n);
//     int p, ans;
//     for (int i = 0; i < q; i++)
//     {
//         cin >> p;
//         auto it = upper_bound(k, k+n, p);
//         if(it == k) cout << "0\n";
//         else {
//             ans = it - k;
//             if (ans % 2 == 1) cout << "1\n";
//             else cout << "0\n";
//         }
    
//     }
// }



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


*/