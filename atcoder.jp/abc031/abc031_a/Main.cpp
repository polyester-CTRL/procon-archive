#include<iostream>
using namespace std;
int main(){
    int a, d;
    cin >> a >> d;
    int ans;
    if (a >= d)
    {
        ans = a * (d + 1);
    }else{
        ans = (a + 1) * d;
    }
    cout << ans << endl;
    return 0;
}