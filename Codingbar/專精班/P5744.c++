/*

P5744 【深基7.习9】培训
https://www.luogu.com.cn/problem/P5744

*/

#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    int grade;
} students[10000];


int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].age >> students[i].grade;

        students[i].age++;
        students[i].grade *= 1.2;
        if (students[i].grade > 600) students[i].grade = 600; 
        cout << students[i].name << " " << students[i].age << " " 
        << students[i].grade <<"\n";
        
    }
    


    return 0;
}