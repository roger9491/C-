// #include<iostream>
// using namespace std;


// //結構預先宣告
// struct students newStu();
// struct students * newStu_ptr();
// struct students & newStu_ref(struct students &_stu);

// //struct students
// struct students{
//     string name;
//     int id;
//     double heights;
//     double weights;
// };

// int main(){
//     struct students stu1;

//     cout << newStu().id;
//     cout << newStu_ptr()->id;
//     cout << newStu_ref(stu1).id;

//     return 0;
// }


// //return一般結構變數
// struct students newStu(){
//     struct students stu;
//     return stu;
// }

// //return結構指標
// struct students * newStu_ptr(){
//     struct students * ptr = new struct students;
//     return ptr;
// }

// //return參考指標
// //若在函式內重新宣告一個students物件，此物件為區域變數，沒辦法當作參考的返回值
// struct students & newStu_ref(struct students &_stu){
//     return _stu;
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
(while去做)
輸出扣幾次 

ex
4
4 - 2 = 2
2 - 2 = 0

2

ex
5
5 - 2 = 3
3 - 2 = 1
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
重複輸入長度為2字串 英文配數字
輸入no結束
若是字串的數字能被2整除就印出來
*/

// #include<bits/stdc++.h>
// #define _ios_base::sync_with_stdio(0);cin.tie(0);

// using namespace std;

// int main(){

//     int n, a[10000] = {-1};
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
    


//     return 0;
// }






/*

P5744 【深基7.习9】培训
https://www.luogu.com.cn/problem/P5744

*/

// #include <iostream>
// #include <string>
// using namespace std;

// struct student
// {
//     string name;
//     int age;
//     int grade;
// } students[10000];


// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> students[i].name >> students[i].age >> students[i].grade;

//         students[i].age++;
//         students[i].grade *= 1.2;
//         if (students[i].grade > 600) students[i].grade = 600; 
//         cout << students[i].name << " " << students[i].age << " " 
//         << students[i].grade <<"\n";
        
//     }
    


//     return 0;
// }


/*
P5742 【深基7.例11】评等级
https://www.luogu.com.cn/problem/P5742


4
1223 95 59
1224 50 7
1473 32 45
1556 86 99

Excellent
Not excellent
Not excellent
Excellent
*/

// #include <iostream>
// #include <string>
// using namespace std;

// struct student
// {
//     string id;
//     int grade1;
//     int grade2;
//     float grade3;
// } students[10000];


// int main()
// {
//     int n;
//     cin >> n;

//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> students[i].id >> students[i].grade1 >> students[i].grade2;
//         students[i].grade3 = students[i].grade1*0.7 + students[i].grade2*0.3;
//         if (students[i].grade1 + students[i].grade2 > 140 && students[i].grade3 >= 80)
//         {
//             cout << "Excellent\n";
//         }else{
//             cout << "Not excellent\n";
//         }
        
//     }
//     return 0;
// }