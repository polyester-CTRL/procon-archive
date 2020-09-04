#include<iostream>
#include<string>
using namespace std;
int main(){
    int s;
    cin >> s;
    if(s%1111==0){
        cout << "SAME" << endl;
    }else{
        cout << "DIFFERENT" << endl;
    }
    return 0;
}