#include<bits/stdc++.h>
using namespace std;
/*
	Note : 
	     If derived class is empty and we create object of derived class then
	     default constructor will be called of base class and parameterized 
	     constructor will not be called and program throw error.
*/

//Base class or Parent class or Super class
class base{
public:
	//default constructor
	base(){
		cout << "Default constructor called" << endl;
	}

	//parameterized constructor
	base(int b){
		cout << "Parameterized constructor called " << b << endl; 
	}
};

//Child class or sub class or derived class
class derived:public base{
	//Empty
};
int main(){
	derived d1;//at this point program exectued successfully.

	derived d2(10);//throw error if you comment this line then program execute successfully.
	return 0;
}