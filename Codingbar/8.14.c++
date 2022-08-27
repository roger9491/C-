/* 
迭代器

vector<int> ::iterator it;
*/

// #include <bits/stdc++.h>

// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector<int>::iterator it;
//     vector<int> v(n);
//     for(int i = 0; i < n;i++){
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());
//     reverse(v.begin(), v.end());
//     for(it = v.begin(); it != v.end();it++){
//         cout << *it << ' ';
//     }
// }

/* 

set

set<int> st;

st.insert(x);
st.erase(x);
st.find(x);
st.size(x);

st.find(x);
有 回傳該iterator
沒 回傳end()

時間複雜度
O(logn)
*/

// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//     set<int> st;

//     st.insert(3);
//     st.insert(27);
//     st.insert(-1);
//     for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//     {
//         cout << *it << ' ';
//     }
    
// }

/*
pair

*/
// #include<bits/stdc++.h>

// using namespace std;
// int main() {

//     // pair 宣告 and 賦值
//     pair<int, int> pr;
//     pair<int, int> pr1 = make_pair(3, 7);
//     pair<char, string> pr2 = make_pair('a', "abc");

//     // 取值
//     cout << pr.first << "\n";
//     cout << pr1.first << "\n";
//     cout << pr1.second << "\n";
//     cout << pr2.first << "\n";
//     cout << pr2.second << "\n";

//     //sort
//     vector< pair<int, int> > pr4(5);
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> pr4[i].first;
//         cin >> pr4[i].second;
//     }
    
//     sort(pr4.begin(), pr4.end());

//     for (int i = 0; i < 5; i++)
//     {
//         cout << pr4[i].first << pr4[i].second << "\n";
//     }
    

// }

/* 三圍排序 */

// #include<bits/stdc++.h>

// #define pii pair<int, int>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int a, b, c;
//     vector<pair<int, pii>> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i].first >> v[i].second.first >> v[i].second.second;
//     }
    
//     sort(v.begin(), v.end());
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i].first << " "<<v[i].second.first <<" " << v[i].second.second << "\n"; 
//     }
    

// }

/* 
map 重要

map 尋找key值方法
https://blog.csdn.net/liaosongmao1/article/details/42028657?spm=1001.2101.3001.6650.2&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-2-42028657-blog-85066264.pc_relevant_default&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-2-42028657-blog-85066264.pc_relevant_default

判斷是否存在key
map<string, int> mp;
mp.count(key) 0:不存在 1:存在
mp.find(key)  ==m.end():不存在  !=:存在
mp.size()
*/

/* 補習班點名 */
// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//     // 宣告
//     map<string, int> cht;
//     int n;
//     cin >> n;
//     string s;
//     for(int i=0; i<n;i++){
//         cin >> s;
//         cht[s]++;
//     }
//     cout << cht.size() << "\n";
//     for (auto it = cht.begin(); it != cht.end(); it++){
//         cout << (*it).first << ' ' << (*it).second << "\n";
//     }

// }

/* 
priority_queue
pq.size() 回傳零
pq.pop() 刪除最大值
// 大到小
priority_queue<int, vector<int>, generate<int>> pq

*/
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     priority_queue<int> pq;

//     int q;
//     cin >> q;
    
//     int opt, x;
//     for (size_t i = 0; i < q; i++)
//     {
//         cin >> opt;
//         if (opt == 1){
//             cin >> x;
//             pq.push(x);
//         }else{
//             cout << pq.top() << "\n";
//             pq.pop();
//         }
//     }
// }
/* 

*/
// #include<bits/stdc++.h>

// using namespace std;
// bool cmp(int a , int b){
//     if (a%2 != b%2) return b%2==1;
//     return b < a;
// }
// int main(){
//     // ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
//     int n; cin >> n;
//     vector<int> a(n);
//     for(int i=0 ; i<n ; ++i) cin >> a[i];
//     sort(a.begin() , a.end() , cmp);
// 	for(int i=0 ; i<n ; ++i) cout << a[i] << ' ' ;
// }

/**/