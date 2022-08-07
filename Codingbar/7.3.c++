
#include<iostream>
using namespace std;


/*





n > 1 f(n) = f(n-1) * n
n == 1 return 1

*/
int f(int n){
    if(n > 1){
        return f(n-1) * n;
    }else
    {
        return 1;
    }
}

int main(){

    //  5 4 3 2 1
    cout << f(5);

}