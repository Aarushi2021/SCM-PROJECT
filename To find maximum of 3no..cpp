// To find maximum of a number
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<"biggest is "<<a<<endl;
		}
		else{
			cout<<"biggest is "<<c<<endl;
		}
	}
	else{
		if(b>c){
			cout<<"biggest is "<<b<<endl;
			
		}
		else{
			cout<<"biggest is "<<c<<endl;
		}
	}
	return 0;
}




