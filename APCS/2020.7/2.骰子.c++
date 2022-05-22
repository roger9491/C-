#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

struct struct_t
{
    int f0 = 5;
    int f1 = 1;
    int f2 = 2;
    int f3 = 6;
    int f4 = 3;
    int f5 = 4;
};

int main() { 

    int n, m;
    cin >> n >> m;
    struct struct_t t[n];
    int a, b, temp;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        if (a > 0 && b > 0){
            swap(t[a-1],t[b-1]);
        }else if(b == -1)
        {
            temp = t[a-1].f1;
            t[a-1].f1 = t[a-1].f4;
            t[a-1].f4 = t[a-1].f3;
            t[a-1].f3 = t[a-1].f5;
            t[a-1].f5 = temp;
        }else{
            temp = t[a-1].f0;
            t[a-1].f0 = t[a-1].f3;
            t[a-1].f3 = t[a-1].f2;
            t[a-1].f2 = t[a-1].f1;
            t[a-1].f1 = temp;
        }
           

    }
    for (int i = 0; i < n; i++)
    {
        if (i>0) cout << " ";
        cout << t[i].f1;
        
    }
return 0;
}