/*
實作二分搜尋法

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1, 3, 9, 13, 27, 33, 48, 55, 100};

    int target;
    // cin >> target;

    int l, r, mid;
    l = 0;
    r = 8;

    // array
    // auto it = lower_bound(a, a+9, 48);
    // int index = it - a;
    // cout << index ;

    // vector
    // vector v;
    // auto it = lower_bound(v.begin(), v.end(), 48);
    // int index = it - a;
    // cout << index ;

    // while (l <= r)
    // {
    //     mid = (l + r) / 2;
    //     if(a[mid] == target){
    //         cout << mid;
    //         break;
    //     }else if(a[mid] > target){
    //         r = mid - 1;
    //     }else{
    //         l = mid + 1;
    //     }

    // }
}


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


二分搜尋法的細節
ex 
0   1   2   3   4   5
1   4   8   10  15  16
1. 目標存在於數列中, l r mid
    1. mid == 目標的索引值, 造成l r != mid
        假設目標是 8 mid == 2 l = 0, r = 5
    2. l == r == mid == 目標的索引值
        假設目標是 16 
            (1) l = 0, r = 5, mid = 2
            (2) l = 3, r = 5, mid = 4
            (3) l = 5, r = 5, mid = 5
                    break
2. 目標不存在於數列中
    (1) 前 < 索引值0
    (2) 後 > 索引值最後一個
    (3) 大小剛好是 a[0] ~ a[-1]
        ex 目標:3    
        (1) l = 0, r = 5, mid = 2
        (2) l = 0, r = 1, mid = 0
        (3) l = 1, r = 1, mid = 1
        (4) l = 1, r = 0, mid = 1
            break   r 剛好會處在小於目標的最大值

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