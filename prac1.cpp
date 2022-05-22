//#include <iostream>
//using namespace std;
//int main() {
// int n1,n2;
// char op;
// cout<<"Enter 2 numbers: ";
// cin>>n1>>n2;
// cout<<"Enter operand: ";
// cin>>op;
// switch (op)
// {
// case '+':
// cout<<n1+n2<<endl;
// break;
// case '-':
// cout<<n1-n2<<endl;
// break;
// case '*':
// cout<<n1*n2<<endl;
// break;
// case '/':
// cout<<n1/n2<<endl;
// break;
// case '%':
// cout<<n1%n2<<endl;
// break;
// 
// default:
// cout<<"Operator not found!"<<endl;
// break;
// }
// 
// return 0;
//}
#include <iostream>
using namespace std;
int main(){

	char c;


	cout<<"enter an operand";
	cin>>c;
	switch(c){
		case 'a':
			cout<<"vowel";
			break;
			case 'e':
				cout<<"vowel";
				break;
					case 'i':
				cout<<"vowel";
				break;
					case 'o': //quotient deti hai
				cout<<"vowel";
				break;
					case 'u':   // yeh remainder deti hai
				cout<<"vowel";
				break;
				default:
					cout<<"consonant";
					break;
					
				
	}
	return 0;
}


