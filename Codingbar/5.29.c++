

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

// #include<iostream>
// #include<ctime>
// using namespace std;

// int main(){

//     time_t mytime;
//     string data;
//     char *data1;
//     mytime = 3812934021;
    
//     data1 = ctime(&mytime);
    
//     cout << *(data1+1) << "\n";
//     cout << mytime;

//     return 0;
// }

/*
ctime函式練習
*/

// #include<iostream>
// #include<ctime>
// using namespace std;

// int main(){

//     time_t mytime;
//     string data;
//     char *data1;
    
//     time(&mytime);
//     mytime += 24*60*60*60;
//     data1 = ctime(&mytime);
    
//     cout << data1 << "\n";
//     // cout << mytime;

//     return 0;
// }

/* 實作 ctime() 


*/

// #include<iostream>
// #include<ctime>
// #include<string>
// using namespace std;

// string week[] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
// string mon[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

// string format(time_t second){
//     string fortime = "";

//     int year, mon;

//     year = second / 365 / 24 / 60 / 60;


//     return to_string(year);
// }

// int main(){

//     time_t mytime;
//     string data,data2;
//     char *data1;
    
//     time(&mytime);
//     mytime += 24*60*60*60;
//     data1 = ctime(&mytime);
//     data2 = format(mytime);
    
//     cout << data1 << "\n";
//     cout << data2 ;
//     // cout << mytime;

//     return 0;
// }


/* 

localtime函式
*/

// #include<iostream>
// #include<ctime>
// using namespace std;

// int main(){
//     time_t t = 0; 
//     struct tm *mytp;

//     mytp = localtime(&t);

//     cout << mytp->tm_year + 1900 << "\n";
//     cout << mytp->tm_mon + 1  << "\n";
//     cout << mytp->tm_mday << "\n";

    
//     return 0;
// }

/* 

localtime函式練習
 */

// #include<iostream>
// #include<ctime>
// using namespace std;

// int main(){
//     time_t t = 0; 
//     struct tm *mytp;

//     t += 1000*24*60*60;
//     mytp = localtime(&t);

//     cout << mytp->tm_year + 1900 << "/";
//     cout << mytp->tm_mon + 1  << "/";
//     cout << mytp->tm_mday << "\n";

    
//     return 0;
// }


/* 
mktime函式

 */

// #include<iostream>
// #include<ctime>
// using namespace std;

// int main(){
//     time_t t = 0; 
//     struct tm mytp = {0};

//     mytp.tm_year = 130;
//     mytp.tm_mday = 1;
//     t = mktime(&mytp);

//     cout << t << "\n";
//     cout << ctime(&t);


    
//     return 0;
// }

/* 

七夕情人節
 */

// #include<iostream>
// #include<ctime>
// using namespace std;

// int main(){
//     time_t t = 0; 
//     struct tm mytp1 = {0}, mytp2 = {0};

//     mytp1.tm_year = 80;
//     mytp1.tm_mday = 9;
//     mytp1.tm_mon = 7;

//     mytp2.tm_year = 81;
//     mytp2.tm_mon = 6;
//     mytp2.tm_mday = 7;

//     t = mktime(&mytp2) - mktime(&mytp1);

//     cout << t / 60 / 60 / 24 << "\n";
//     // cout << ctime(&t);


    
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
布林表 練習
 
 
*/

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string a;
    
//     int number[501] = {0}, total = 0;
//     while (1)
//     {
//         cin >> a;
//         if (a == "no") break;

//         number[stoi(a)] += 1;
//         total++;
//     }

//     for(int i=0;i < 501; i++){
//         if(number[i] > 0){
//             cout << i << " " << number[i] << "\n";
//         }
//     }
    

//     return 0;
// }

/* 

質因數分解

 */