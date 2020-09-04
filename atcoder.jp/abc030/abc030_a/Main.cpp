#include<iostream>
using namespace std;
int main(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b/a>d/c){
        cout << "TAKAHASHI" << endl;
    }else if(b/a==d/c){
        cout << "DRAW" << endl;
    }else{
        cout << "AOKI" << endl;
    }
    return 0;
}
