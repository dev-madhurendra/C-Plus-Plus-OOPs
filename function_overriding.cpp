#include<bits/stdc++.h>
using namespace std;
/*
	Function Overriding : also known as Runtime polymorphism

	if same function is declared in base class as well as child class
	then it is called as function overriding or Runtime polymorphism.

*/


//Base class or Parent class or Super class
class base{
public:
	//member function
	void msg(){
		cout << "Hello from base class" << endl;
	}
};

//Child class or sub class or derived class
class derived:public base{
public:
	//member function
	void msg(){
		cout << "Hello from derived class" << endl;
	}
};
int main(){

	//base object
	base b1;
	b1.msg();//base class member function will be called

	//derived object
	derived d1;
	d1.msg();//derived class member function will be called
	return 0;
}