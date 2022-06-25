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

英文拼字表
*/

// #include<iostream>
// using namespace std;
// int main(){

//     string s;
//     cin >> s;

//     int a[26] = {0};
//     int flag = 0;
//     for(int i=0;i < s.size();i++){
//         // cout << "True";
//         a[int(s[i]) - 97] += 1;

//         if (a[int(s[i]) - 97] == 2){
//             flag = 1;
//             break;
//         } 
//     }
//     // cout << flag;
//     if(flag){
//         cout << "True";
//     }else{
//         cout << "False";
//     }



//     return 0;
// }

/* 英打比賽計分  */

// #include<iostream>
// using namespace std;
// int main(){

//     string s;
//     while (1){
//         getline(cin, s);
//         if ( s == "0"){
//             break;
//         }

//         int flag = 0, c = 0;
//         for(int i=0;i<s.size();i++){
//             if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')){
//                 flag = 1;
//             }else{
//                 if(flag){
//                     c += 1;
//                     flag = 0;
//                 }
//             }
//         }
//         int i = s.size() - 1;
//         if ((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')){
//             c += 1;
//         }
//         cout << c << "\n";

//     }


//     return 0;
// }


/* 密碼強度檢驗 */

// #include<iostream>
// using namespace std;

// int is_symbols(char tmp){
//     string symbols = "!@#$%^&*()_+-=/{}[]\\|;:/?,.<>";
//     for(int i=0;i<symbols.size();i++){
//         if(symbols[i] == tmp){
//             return 1;
//         }
//     }
//     return 0;
// }

// int is_number(char s){
//     if (s >= '0' && s <='9'){
//         return 1;
//     }else{
//         return 0;
//     }

// }

// int is_word(char s){
//     if ((s>= 'a' && s <= 'z')||(s >= 'A' && s <= 'Z')){
//         return 1;
//     }else{
//         return 0;
//     }
// }

// int main(){

//     string s;

//     cin >> s;

//     if (s.size() >= 8){

//         int flag = 1;
//         for(int i=0; i<s.size();i++){
//             if (is_word(s[i])||is_symbols(s[i])||is_number(s[i])){

//             }else{
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag){
//             int f1=0,f2=0,f3=0;
//             for(int i=0; i<s.size();i++){
//                 if(is_symbols(s[i])){
//                     f1 = 1;
//                 }else if(is_word(s[i])){
//                     f2 = 1;
//                 }else if(is_number(s[i])){
//                     f3 = 1;
//                 }
//             }

//             if(f1 == 1 && f2 == 1 && f3 == 1){
//                 if(s[0] >= 'A' && s[0] <= 'Z'){
//                     cout << "高";
//                 }else{
//                     cout << "中";
//                 }
//             }else{
//                 cout << "低";
//             }


//         }else{
//             cout << "False1";
//         }
//     }else{
//         cout << "False";
//     }

//     return 0;
// }