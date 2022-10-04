#include<bits/stdc++.h>
using namespace std;

/*
Polymorphism : 
			1.Base class pointer and derived class object
			2.Virtual function
			3.Abstract class

2.Virtual function : 
->a function which is existring in a class but can't be used.

->Virtual function existing in appearence but not in reality.

->A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class

->They are mainly used to achieve Runtime polymorphism

->Functions are declared with a virtual keyword in base class.

->Virtual functions cannot be static.

->A virtual function can be a friend function of another class.

->Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.

->The prototype of virtual functions should be the same in the base as well as derived class.

->A class may have virtual destructor but it cannot have a virtual constructor.


Late binding : 
->using of virtual function is also called as late binding.

->compiler deffer the decision until the program is running and
at runtime when it come to know which class is pointed by PTR then
appropriate function would be called.
This is called as Dynamic binding or late binding.


*/

//Base class or Parent class or Super class
class base{
public:
	//virtual function
	virtual void show(){
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


// output will be

/*
derived1 class
derived2 class
*/