#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    //char c[10005];
    string s;
    int n;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] -= 65;
        s[i] += n;
        s[i] %= 26;
        s[i] += 65;
    }
    cout << s <<endl;

    return 0;
}