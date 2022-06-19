/*
    實作字串長度 strlen()
*/

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     string arr = "";
//     char a[100];
//     cin.get(a,100);
//     cout << strlen(a) << "\n";

//     int c = 0;
//     for(int i=0;i<100;i++){
//         if (a[i] == '\0') break;
//         c++;
//     }
//     cout << c;
//     // cin >> arr;
//     return 0;
// }

/*
    實作strcpy，用strcpy檢驗正確性
    **使用strcpy必須要空間一樣**
*/
// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     string arr = "";
//     char a[100];
//     cin.get(a,100);

//     char a2[100];

//     int c = 0;
//     for(int i=0;i<strlen(a);i++){
//         // cout << a[i] << i;
//         a2[i] = a[i];
//     }
//     char a3[100];
//     strcpy(a3,a2);
//     cout << "a3" << a3 << "\n";
//     cout << "a2: " << a2 << "\n";
//     cout << "a: " << a;
//     // cin >> arr;
//     return 0;
// }

/*
    insert()
    實作
*/

// #include<iostream>
// using namespace std;

// int main(){
//     string s1 = "123";
//     string s2 = "abc";
//     string ans1,ans2;
//     int c = 1;
//     for (int i = 0; i < s1.size(); i++)
//     {
//         if (i == c)
//         {
//             ans2 += s2;
//         }

//         ans2 += s1[i];
//     }

//     ans1 = s1;
//     ans1.insert(c,s2);
//     cout << "ans1: " << ans1 << "\n";
//     cout << "ans2: " << ans2 << "\n";
//     // cin >> arr;
//     return 0;
// }

/*

    實作find
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     string s1 = "123abc";
//     string target = "3a";
//     int ans1 = s1.find(target);
//     int ans2 = 0, index = -1;
//     string temp = "";
//     // cout << s1.size() << " ";
//     // cout << target.size();
//     for (size_t i = 0; i < s1.size() - target.size() + 1; i++)
//     {
//         temp = "";
//         // cout << i << "\n";
//         for(size_t j = 0;j < target.size(); j++) {
//             // cout << i + j << "\n";
//             temp += s1[i+j];
//         }
//         if (temp == target)
//         {
//             index = i;
//             break;
//         }
        
//     }
    

//     cout << index << "\n";
//     cout << ans1 << "\n";

//     // cin >> arr;
//     return 0;
// }


/*
    實作replace

*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     string s1 = "1234";
//     string s2 = "abc";

//     string s3 = "1234";
//     string ans = "";

//     int s = 2, len = 1;
//     int flag = 0;
//     for (size_t i = 0; i < s3.size(); i++)
//     {
//         if (i >= 2 && i < s + len)
//         {
//             if (flag == 0)
//             {

//                 flag = 1;
//                 ans += s2;
//             }
//         }
//         else
//         {
//             ans += s3[i];
//         }
//     }

//     s1.replace(2, 1, s2);
//     cout << s1 << "\n";
//     cout << ans;
//     // cin >> arr;
//     return 0;
// }

#include<iostream>
using namespace std;


string word = "ABCDEFGHJKLMNPQRSTUVWXYZIO";
            //    0 1 2 3 4 5 6 7 8 9 10111213141516171819202122232425

int is_int(string id){
    for(int i=1;i<id.size();i++){
        if (id[i]<'0' || id[i] > '9' ){
            
            return 1;
        }
    }
    return 0;
}
int main()
{   
    string id;
    string t;
    int check;

    cin >> id;
    

    if (id.size() != 10){
        cout << "False";
    }else if(!(id[0] >= 'A' && id[0] <= 'Z')){
        cout << "False";
    }else if(id[1] != '1' && id[1] != '2'){
        cout << "False";
    }else if(is_int(id)){
        cout << "False";
    }else{
    string new_str = "";
    int pos = word.find(id[0]) + 10;

    // cout << "id:" << id[9] - 48 <<"\n";
    check = id[9] - 48 ;


    new_str += to_string(pos);
    for(int i=1;i< id.size();i++){
        new_str += id[i];
    }
    // cout << new_str;
    int total = 0;
    for(int i=0; i<new_str.size();i++){
        if(i == 0){
            total += new_str[i] - 48;
        }else{
            total += ((new_str[i] - 48)*(9-i+1))%10;
        }
        // cout <<"i:" << i << " " << total << "\n";
    }

    // cout << total <<"\n";
    // cout << 10 - total%10 << " CHRCK: "<< check <<" " << new_str ;
    if((10 - total%10)%10 == check){
        cout << "True";
    }else{
        cout << "False";
    }
    }
    // cout << check;
    // cout << check;
    return 0;
}