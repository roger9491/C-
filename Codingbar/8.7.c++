/*
deque

deque.size() 長度

deque.push_back(x) 尾端加入資料

deque.pop_back()    尾端刪除資料

deque.push_fron(x)  前端加入資料

deque.pop_front()  前端刪除資料

以上時間複雜度O(1)

*/

// #include <bits/stdc++.h>

// using namespace std;

// void print_deque(deque<int> dq){
//     for (int i = 0; i < dq.size(); i++)
//     {
//         cout << dq[i] << " ";
//     }
//     cout << "\n";
// }

// int main(){

//     deque<int> dq;

//     dq.push_back(12);
//     print_deque(dq);

//     dq.pop_back();
//     print_deque(dq);

//     dq.push_front(22);
//     dq.push_front(33);
//     print_deque(dq);

//     dq.pop_front();
//     print_deque(dq);

//     // 二維

//     int n, m;
//     cin >> n >> m;

//     deque<int> matrix[n];
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a;

//             matrix[i].push_back(a);

//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a;

//             cout << matrix[i][j] << "\n";

//         }
//     }

// }

/*

卡片排列


 */

// #include <bits/stdc++.h>

// using namespace std;

// int main(){

//     int n;
//     cin >> n;
//     int a;
//     deque<int> dq;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         if (a % 2 == 0){
//             dq.push_back(a);
//         }else{
//             dq.push_front(a);
//         }
//     }

//     for (int i = 0; i < n; i++){
//         if (i != 0) cout << " ";
//         cout << dq[i];
//     }

// }

/*
括號匹配

*/

// #include <bits/stdc++.h>

// using namespace std;

// int main(){

//     string s;
//     cin >> s;

//     stack<string> stk;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == "(" or s[i] == "[" or s[i] == "{")
//         {
//             stk.push(s[i]);
//         }else{
//             if (s[i] == ")" and stk.top() == "(")
//             {
//                 stk.pop()
//             }

//         }

//     }

// }

/*

軌道

*/
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int n, q;
//     cin >> n >> q;
//     for (int i = 0; i < q; i++)
//     {
//         deque<int> dq;
//         for (int i = 0; i < n; i++)
//         {
//             dq.push_back(i + 1);
//         }
//         int a;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a;
//             v.push_back(a);
//         }
//         stack<int> stk;
//         int index = 0, flag = 0;
//         while (1)
//         {
//             if (dq.size() && dq[0] == v[index])
//             {
//                 index += 1;
//                 dq.pop_front();
//             }
//             else if (stk.size() && stk.top() == v[index])
//             {
//                 index += 1;
//                 stk.pop();
//             }
//             else
//             {
//                 if (dq.size())
//                 {
//                     stk.push(dq[0]);
//                     dq.pop_front();
//                 }
//                 else
//                 {
//                     if (index != n)
//                     {
//                         flag = 1;
//                         break;
//                     }
//                     else
//                     {
//                         break;
//                     }
//                 }
//             }
//         }
//         if (flag)
//         {
//             cout << "No"
//                  << "\n";
//         }
//         else
//         {
//             cout << "Yes"
//                  << "\n";
//         }
//     }
// }



/* 

iterator

*/
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     vector<int>::iterator it;
//     vector<int> v(2);

//     it = v.begin();
//     cout << it ;

// }


/*
去除重複

*/

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int a;
//     set<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         st.insert(a);
//     }
    
//     cout << st.size() << "\n";
//     for(auto it=st.begin();it != st.end();++it){
//         if (it != st.begin()) cout << " ";
//         cout << *it;
//     }


// }

/* 

02. L1-3-2 幫我找個x (set)

*/
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     int n, m;
//     cin >> n >> m;
//     int a;
//     multiset<int> mst;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         mst.insert(a);
//     }
//     int opt, x;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> opt >> x;
//         if (opt == 1 && mst.find(x) != mst.end()){
//             mst.erase(mst.find(x));
//         }else if (opt == 2){
//             if (mst.find(x) == mst.end())
//             {
//                 cout << "NO\n";
//             }else{
//                 cout << "YES\n";
//             }
//         }
//     }
// }


/* 
三圍排序

*/


// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {


// }