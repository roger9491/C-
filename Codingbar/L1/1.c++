/*
    01. L1-2-1 書架(I)  [2]

ex
10 5
1 5 777
1 3 666
2 5 1
1 5 888
2 3 2

777
-1
*/
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n, q;

   
//     cin >> n >> q;
//     vector<int> v[n+1];
//     for (int i = 0; i < q; i++)
//     {
//         int opt, a, b;
//         cin >> opt >> a >> b;
//         if (opt == 1)
//         {
//             v[a].push_back(b);
//         }else
//         {
//             if (v[a].size() >= b)
//             {
//                 cout << v[a][b-1] << '\n';
//             }else{
//                 cout << -1 << '\n';
//             }
//         }
        
//     }
// }

/*
02. L1-2-2 踩地雷

ex
3 6
1 0 1 0 0 1
0 1 1 0 0 0
1 0 1 0 1 1

-1 4 -1 2 1 -1
3 -1 -1 4 3 3
-1 4 -1 3 -1 -1
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    // ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, m;
    cin >> n >> m;
    
    vector<int> matrix[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        for (int j = 0; j < m; j++)
        {
            cin >> a;
 
            matrix[i].push_back(a);

        }
    }
    int total;

    int a[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

    for (int i = 0; i < n; i++)
    {
        int total = 0;
        for (int j = 0; j < m; j++)
        {
            total = 0;
            if(j != 0) cout << " ";
            if (matrix[i][j] == 1)
            {
                cout << -1 ;
            }else{
                // cout << "\ni,j"
                //      << i 
                //      << " "
                //      << j << "\n";
                for (int x = 0; x < 8; x++)
                {
                    
                    int y1 = i+a[x][0],y2 = j+a[x][1];
                    // cout << "y1,y2" << y1 << " " << y2  << n << "\n";
                    if(y1 < 0 || y1 >= n || y2 < 0 || y2 >= m) continue;
                      
                    if (matrix[y1][y2] == 1)
                    {
                        total++;
                    }
                    
                }
                cout << total;
            }
        }
        cout << "\n";
    }
    

}