#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    double d;
    //d = n * 10;

    int g=0;
    for (int i = 1; i < 10; i++)
    {
        m = n / i;
        if (n % i == 0 && m <=9)
        {
            g = 1;
            break;
        }
    }
    if(g==1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}