
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int direct[8][2] = {{0,1},{0,-1},{1,0},{-1,0},{-1,-1},{1,1},{1,-1},{-1,1}};

    vector<int> v[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    vector<int> ans[n];
    
    int x,y,count = 0;
    
    for(int k = 0; k < n; k++){
        for(int l = 0; l < m; l++){
            if(v[k][l] == 1){
                ans[k].push_back(-1);
                continue;
            }

            for(int i = 0; i < 8; i++){
                x = direct[i][0] + k;
                y = direct[i][1] + l;
                if(x < n && x >= 0 && y < m && y >= 0){
                    if(v[x][y] == 1){
                        count += 1;
                    }
                }
            }
            ans[k].push_back(count);
            count = 0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}