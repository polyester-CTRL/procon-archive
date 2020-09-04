#include<iostream>
#include<string>

using namespace std;
int main(){
    int n;
    string s, t;
    cin >> n;
    cin >> s;
    int flag = 0;
    if(n%2==1){
        cout << "No";
        return 0;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if(s[i] == s[i + n/2]){
            flag = 1;
            continue;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag==1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}