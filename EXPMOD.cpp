#include<iostream>

using namespace std;

int main(){
	long long a, b;
	cin >> a >> b;
	long long x;
	x = a % 1000000007;
	long long s = 1;
	for(long i = 0; i < b; i++){
		s = s * x;
	}
	cout << s % 1000000007;
	return 0;
}
