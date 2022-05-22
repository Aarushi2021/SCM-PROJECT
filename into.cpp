  #include <iostream>    //include is a pre processor director used to include files  iostream is the header file for taking input and printing output
//ascii table gives value of special character
//size 1byte
//int ascii ='a'
//ascii->97
using namespace std;
int main(){   // the execution of code begins from main function
	int a;//decleration
	a=12;//initialisation
	cout<<"size of int"<<sizeof(a)<<endl;

	//there are modifiers signed=4bytes,unsigned=4bytes,long=8 bytes,short= 2 bytes
	
	//size0f()

short s;
long l;
cout<<"size of s  "<<sizeof(s)<<endl;
cout<<"size of l  "<<sizeof(l)<<endl;  //used to display output in quotation mark //namespace standard std::we can use this before cout
int amount1;
cin>>amount1; //insertion operator >>    //<< extraction operator
int am2;
cin>>am2; 
int sum=amount1+am2;
cout<<"sum "<<sum<<endl;
cout<<"hrllo";
cout<<"hello world";
return 0;	
//  \n this is used add line break
//curly braces indicate starting and ending
//return-> exit status if a function
//semi colon used mark that the statement is ended



	
}

