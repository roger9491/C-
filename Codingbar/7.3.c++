
#include<iostream>
using namespace std;

class Circle
{
    double r;
    
    public:
        Circle set_r(double _r){
            r = _r;
        }
        double print_r(){
            cout << r;
        }
        double print_r1(){
            cout << r;
        }
}c;

int main(){

    char *b[] = {"123","235"};
    char **c = b;    
    cout << *c <<"\n";  //123
    c += 1;
    cout << *c <<"\n";  //235

    cout << **c << "\n";//2
    *c += 1;
    cout << **c << "\n";//3
    *c += 1;
    cout << **c ;       //5



}