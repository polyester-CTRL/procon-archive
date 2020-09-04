#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int c = 1;
    if(b == 1){
        cout << 0 << endl;
        return 0;
    }
    do
    {
        c += (a - 1);
        ans++;
    } while (c < b);
    cout << ans << endl;
    return 0;
}