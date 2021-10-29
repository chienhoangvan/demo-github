#include<iostream>

using namespace std;
 long long a[1000010];

int main(){
	long n;
	cin >> n;
	for(long i = 0; i< n; i++ ){
		cin >> a[i];
	}
	long long s = 0;
	for(long i = 0; i< n; i++){
		s += a[i];
	}
	cout << s % 1000000007;
	return 0;
	
}
