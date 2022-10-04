#include<bits/stdc++.h>
using namespace std;

/*
Polymorphism : 
			1.Base class pointer and derived class object
			2.Virtual function
			3.Abstract class


when we create pointer of base class and object of derived class then
base class object always initiated so we use virtual function to access the
feature of derived class and if we want that base class object never
initated then we use abstract class.

3.Abstract class : 
	->abstract class is used when we never want to initiate base class.

	-> if pure virtual function exist in any class then that class become
	   abstract class.

	 ->if we don't want to perform any activity of base class then we use
	 pure virtual function.




             
                               function overloading                           
                              /
                Compile time -
               /              \
			  /                operator overloading
Polymorphism -                
              \           virtual function
               \         /
                runtime -
                         \
                          function overriding



                          
*/

//Base class or Parent class or Super class
class base{
public:
	//pure virtual function
	virtual void show() = 0;
	
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