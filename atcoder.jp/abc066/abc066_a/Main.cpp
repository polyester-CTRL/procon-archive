#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b <= b + c && a + b <= c + a)
	{
		cout << a + b << endl;
	}
	else if (b + c <= a + b && b + c <= c + a)
	{
		cout << b + c << endl;
	}
	else
	{
		cout << c + a << endl;
	}


}