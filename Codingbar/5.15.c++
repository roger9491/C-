/* 

字串顛倒



*/

// #include <iostream>
// using namespace std;

// int main()
// {

//     // char s[10];
//     string s;
//     cin >> s;
//     for(int i=9; i>= 0; i--){
//         cout << s[i];
//     }
//     // cout << s;
//     return 0;
// }

/* 
ex 
字串顛倒

確實儲存到另一個變數
*/


// #include <iostream>
// using namespace std;

// int main()
// {

//     // char s[10];
//     string s1;
//     string s2[] = {"123"};
//     cin >> s1;
//     for(int i=9; i>= 0; i--){
//         s2[0] += s1[i];
//         cout << s2[0] << endl;
//     }
//     cout << s2[0];
//     return 0;
// }

/*

建立一個 1 ~ 10整數的陣列
輸出總和



*/
#include <iostream>

using namespace std;

int main(){

    for (int i=1;i <= 10;i++){
        // code
    }

    
}




// #include <iostream>
// using namespace std;

// int main()
// {

//     int a[] = {1,2,3,4,5,6,7,8,9,10};
//     int t = 0;
//     for(int i=0; i<=9; i++){
//         t += a[i];
//     }
//     cout << t;
//     return 0;
// }

/*

印出 1 ~ 100
(能被2整除但不能被3整除) 或是 (可以被9整除) 的數字

*/

// #include <iostream>
// using namespace std;

// int main()
// {
    
//     for(int i=1; i<=100; i++){
//         if((i % 2 == 0 && i % 4 != 0 || i % 6 == 0)){
//             cout << i << "\n";
//         }
//     }
    
//     return 0;
// }

/*

是第幾天呢？
2000
12
31

366

*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int day_list[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int year,month,day;

//     cin >> year;
//     cin >> month;
//     cin >> day;

//     int ans = 0;
//     for (int i = 0; i < month-1; i++)
//     {
//         ans += day_list[i];
//     }
    
//     if (month > 2)
//     {
//         if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//         {
            
//             ans += 1;
//         }
        
//     }
//     ans += day;
//     cout << ans;
    
//     return 0;
// }

/*

輸入一個整數 n
使這個n 每回合 - 2 看能扣幾次
**注意扣完不能是負數**

輸出扣幾次 

ex
4

2

ex
5

2
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, ans = 0;
//     cin >> n;

//     while (n >= 2)
//     {
//         n -= 2;
//         ans += 1;
//     }
//     cout << ans ;

//     return 0;
// }

/*
3n + 1

3

7
*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, ans = 0;
//     cin >> n;

//     while (n != 1)
//     {
//         if (n % 2 == 0)
//         {
//             n /= 2;
//         }else
//         {
//             n = 3*n + 1;
//         }
        
        
//         ans += 1;
//     }
//     cout << ans ;

//     return 0;
// }

/*

重複輸入
輸入no停止
輸入存到串列



// 輸入一個數字n，輸出n在串列的個數

重複輸入數字n
輸出n 在串列的個數
直到輸入no停止

印出串列的長度
ex
1
1
2
2
no
1
2
2
2
no
4
*/

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string a;
    
//     int number[1000], index = 0;
//     while (1)
//     {
//         cin >> a;
//         if (a == "no") break;

//         number[index] = stoi(a);
//         index++;
//     }

//     int count = 0;
//     string b;
//     while (1)
//     {
//         cin >> b;
//         if (b == "no") break;
        
//         count = 0;
//         for (int i = 0; i < index; i++)
//         {
//             if (number[i] == stoi(b))
//             {
//                 count++;
//             }
//         }

//         cout << count << "\n";
        
//     }
    
//     cout << index;
    

//     return 0;
// }


/*
投票統計

*/
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string a;
    
//     int number[1000] = {0}, total = 0;
//     while (1)
//     {
//         cin >> a;
//         if (a == "no") break;

//         number[stoi(a)] += 1;
//         total++;
//     }

//     for(int i=0;i < 1000; i++){
//         if (number[i] > 0 && number[i] > total/2){
//             cout << i ;
//             break;
//         }
//     }
    

//     return 0;
// }


/*
使用指標重寫
pass by reference

*/

// #include <iostream> 
// using namespace std;

// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int i = 3, j = 7;

//     swap(&i, &j);

//     cout << "i: " << i << endl;
//     cout << "j: " << j << endl;

// }





/*
成績指標

*/

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int grade[n];
//     for(int i=0;i < n;i++){
//         cin >> grade[i];
//     }

//     sort(grade, grade+n);
//     int total = 0,a = 101,b = -1;

//     for(int i=0;i < n;i++){
//         if (grade[i] < 60){
//             if (b < grade[i])
//             {
//                 b = grade[i];
//             }
//         }else if (grade[i] >= 60)
//         {
//             if (a > grade[i])
//             {
//                 a = grade[i];
//             }
            
//         }
//     }

//     for(int i=0;i < n;i++){
//         if(i) cout<< " ";
//         cout << grade[i];
//     }
//     cout << "\n";
//     if (b == -1 ){
//         cout << "best case" << "\n";
//     }else
//     {
//         cout << b << "\n";
//     }
    
//     if (a == 101 ){
//         cout << "worst case" << "\n";
//     }else
//     {
//         cout << a << "\n";
//     }

//     return 0;
// }

/*
最大和



3 2
1 5 
6 4 
1 1

12
6 1 

4 3
6 3 2
2 7 9
4 7 1
9 5 3


31
-1
*/

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main(){

//     int n, m;
//     cin >> n >> m;

//     int a[20], b, maxv, ans1=0;
//     for (int i = 0; i < n; i++)
//     {
//         maxv = 0;
//         for (int j = 0; j < m; j++)
//         {
//             cin >> b;
//             if (b > maxv)
//             {
//                 maxv = b;
//             }
//         }
//         // cout << maxv << "\n";
//         ans1 += maxv;
//         a[i] = maxv;  
//         // cout << ans1 << "\n";
//     }
    
//     cout << ans1 << "\n";

//     int f = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (ans1 % a[i] == 0)
//         {
//             if(f) cout << " ";
//             f = 1;
//             cout << a[i];
//         }
//     }
    
//     if (f == 0){
//         cout << -1;
//     }
    

//     return 0;
// }


// #include <iostream> 
// #include <string>
// #include <cmath> 
// using namespace std;

// int main() {

// 	string s1 = "ab", s2 = "cd";
//     // bool a1 = true, a2 = False;
// 	cout << (true && false);

//     return 0;
// }