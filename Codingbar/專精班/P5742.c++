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

#include <iostream>
#include <string>
using namespace std;

struct student
{
    string id;
    int grade1;
    int grade2;
    float grade3;
} students[10000];


int main()
{
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> students[i].id >> students[i].grade1 >> students[i].grade2;
        students[i].grade3 = students[i].grade1*0.7 + students[i].grade2*0.3;
        if (students[i].grade1 + students[i].grade2 > 140 && students[i].grade3 >= 80)
        {
            cout << "Excellent\n";
        }else{
            cout << "Not excellent\n";
        }
        
    }
    return 0;
}