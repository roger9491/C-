/*
���Y��
�R�W�Ŷ�
��X
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
�ܼ�
�@�ӵ��� =
type ���O ���A
��� int
�B�I��  float
�r�� char   //�HASCII�x�s �ҥH�L�k�x�s����
�r�� string
�B�I�� float
���L�� boolean



��J

ex ��J��ƨæL�X��


endl����
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
�Ʀr���|�h�B��
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
//     char s[] = "��";
//     cout << "a++: " << a++ << endl;
//     cout << "++b: " << ++b ;
//     cout << s ;
//     return 0;
// }

/*
����P�_��

    ���Y�B��l
        > < >= <= != ==

    ���L���A
        True / False
        1 / 0

    �޿�B��l
        !
        &&
        ||

    ����P�_��
    if(){

    }else if(){

    }else{

    }

���A�ഫ
    �۰��ഫ
        �B����ഫ
        ����T�q�j����
    �j���૬
        int()
        float()

*/

// #include <iostream>
// using namespace std;

// int main(){

//     int b = 0;
//     char s[] = "��";
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
�j��
    for(��l;����;�B��){

    }
    �϶��ܼơ]Block variable�^: for�j��w�q���ܼơAfor�j�鵲���Y���u

    while(���L��){


    }

    break
    continue


*/

/*
�}�C
    type name[length]
    ex.
        int name[10];

    ���ޭȨ���

    �r��


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
����
    �إ߫���
    type * name

0/NULL: �ū��w
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

�r���A��



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
�r���A��

�T���x�s��t�@���ܼ�
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

�إߤ@�� 1 ~ 10��ƪ���C
��X�`�M

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

�L�X 1 ~ 100
��Q2�㰣������Q4�㰣 �άO �i�H�Q6�㰣 ���Ʀr

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

�O�ĴX�ѩO�H
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

��J�@�Ӿ�� n
�ϳo��n �C�^�X - 2 �ݯ঩�X��
**�`�N��������O�t��**

��X���X�� 

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
