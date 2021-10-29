#include<iostream>

using namespace std;

int a[1000100];

int main(){
	long n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long maximum = a[0];
	long tg = a[0];
	for(long i = 1; i<n ;i++){
		if( tg + a[i] >= a[i]) {
						tg = tg + a[i];}
		else tg = a[i]; 
		if(tg > maximum) maximum = tg;
	}
	cout << maximum;
	return 0;
}
