#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (i%2==0 && s[i] == 'L'){
            cout << "No" << endl;
            return 0;
        }
        if(i%2==1 && s[i] == 'R'){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}