/*
標頭檔
命名空間
輸出
*/

// #include <iostream>
// using namespace std;

// int main(){
//     std::cout << "Hello world";
//     int cout = 0;
//     std::cout << cout << std::endl;
//     return 0;
// }

/*
變數
一個等號 =
type 型別 型態
整數 int
浮點數  float
字元 char   //以ASCII儲存 所以無法儲存中文
字串 string
浮點數 float
布林值 boolean



輸入

ex 輸入整數並印出來


endl換行
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int number;
//     cin >> number;
//     int cout = 0;
//     cout << number;
//     return 0;
// }

/*
數字的四則運算
+
-
*
/
%

++a
a++


*/
// #include <iostream>
// using namespace std;

// int main(){

//     int a = 0;
//     int b = 0;
//     char s[] = "我";
//     cout << "a++: " << a++ << endl;
//     cout << "++b: " << ++b ;
//     cout << s ;
//     return 0;
// }

/*
條件判斷式

    關係運算子
        > < >= <= != ==

    布林型態
        True / False
        1 / 0

    邏輯運算子
        !
        &&
        ||

    條件判斷式
    if(){

    }else if(){

    }else{

    }

型態轉換
    自動轉換
        運算時轉換
        往資訊量大的換
    強制轉型
        int()
        float()

*/

// #include <iostream>
// using namespace std;

// int main(){

//     int b = 0;
//     char s[] = "我";
//     float a;
//     float c = 100.0;
//     a = int(c) / 3;
//     if(a){
//         cout << "a++: " << a++ << endl;
//     }

//     cout << "++b: " << a;
//     cout << s ;
//     return 0;
// }

/*
迴圈
    for(初始;條件;運算){

    }
    區塊變數（Block variable）: for迴圈定義的變數，for迴圈結束即消逝

    while(布林值){


    }

    break
    continue


*/

/*
陣列
    type name[length]
    ex.
        int name[10];

    索引值取值

    字串


*/

// #include <iostream>
// using namespace std;

// int main(){

//     // int b[10] = {1,2,3};

//     // char s[] = {'1','3','3'};
//     // char s1[] = "1234";
//     // const int a = 10;
//     string name[10] = {"asdad"};
//     for(int i=0; i <= 9; i++){
//         cout << name[i];
//     }

//     return 0;
// }

/*
指標
    建立指標
    type * name

0/NULL: 空指針
C++11 : nullptr
*/
// #include <iostream>
// using namespace std;

// int main()
// {

//     int *p = new int;

//     *p = 10;

//     int *s = p;

//     cout << s << endl; // 0x1876c20?

//     cout << *s << endl; // 10?

//     delete s;
//     cout << s << endl; // 0x1876c20?

//     cout << *s << endl; // 0?

//     cout << p << endl; // 0x1876c20?

//     cout << *p << endl; // 0
//     p = nullptr;
//     cout << *p << endl;
//     cout << *s << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {

//     int * a = new int;
//     int * b = a;
//     delete b ;
//     * a = 10 ;
//     cout << *a;
//     return 0;
// }

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

建立一個 1 ~ 10整數的串列
輸出總和

*/

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
能被2整除但不能被4整除 或是 可以被6整除 的數字

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

#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }else
        {
            n = 3*n + 1;
        }
        
        
        ans += 1;
    }
    cout << ans ;

    return 0;
}
