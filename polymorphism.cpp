#include<bits/stdc++.h>
using namespace std;

/*
Polymorphism : 
			1.Base class pointer and derived class object
			2.Virtual function
			3.Abstract class


1.Base class pointer and derived class object : 
->in this we can only access the features of base class.

example:
let's suppose we are sitting in basic car we can't access feature of
advanced car.


*/

//Base class or Parent class or Super class
class base{
public:
	//member function
	void show(){
		cout << "Base class" << endl;
	}
	
};

//Child class or sub class or derived class
class derived1:public base{
public:
	//member function
	void show(){
		cout << "derived1 class" << endl;
	}
};

//Child class or sub class or derived class
class derived2:public base{
public:
	//member function
	void show(){
		cout << "derived2 class" << endl;
	}
};

int main(){
	derived1 dv1;
	derived2 dv2;
	

	base *ptr;
	ptr = &dv1;//Base class pointer and derived1 class object
	ptr->show();

	ptr=&dv2;////Base class pointer and derived2 class object
	ptr->show();
	return 0;
}

//output will be

/*
Base class
Base class

*/