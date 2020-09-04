#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    if(m<10&&n<10){
        cout << m * n<<endl;
    }else{
        cout << -1<<endl;
    }
    return 0;
}