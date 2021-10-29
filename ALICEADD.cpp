#include<iostream>

using namespace std; 
int main(){
    unsigned long long a,b,c,d,e;
	cin>>a>>b;
	c=a/10;
	d=b/10;
	e=a-c*10+b-d*10;
	if((c+d)==0){
	    cout<<a+b;
	}else{
	    if(e<10){
	        cout<<c+d<<e;
	    }else{
	        cout<<c+d+1<<e-e*10;
	    }
	}
	return 0;
}
