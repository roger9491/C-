/*
ctime
*/

// #include<iostream>
// #include<ctime>
// using namespace std;

// int main(){

//     time_t mytime;

//     time(&mytime);
//     cout << mytime;

//     return 0;
// }

/*
ctime函式

*/

#include<iostream>
#include<ctime>
using namespace std;

int main(){

    time_t mytime;
    string data;
    char *data1;
    mytime = 3812934021;
    
    data1 = ctime(&mytime);
    
    cout << *(data1+1) << "\n";
    cout << mytime;

    return 0;
}