#include<bits/stdc++.h>
using namespace std;
/*
if we create pointer of base class which is pointing to the
derived class then we only base will be destroyed and derived
class will not be destroyed.

for destroying both base and derived class we need to create virtual
destructor by using virtual keyword in front of destructor of base class

virtual function can't be overloaded.

*/


//Base class or Parent class or Super class
class base{
public:
	//destructor only destructor not virtual destructor
	/*
	in this case output will be ->

	Base class destroyed
	*/

	// ~base(){
	// 	cout << "Base class destroyed" << endl;
	// }


	//After using virtual keyword
	/*
	output will be ->

	derived class destroyed
	Base class destroyed

	*/
	virtual ~base(){
		cout << "Base class destroyed" << endl;	
	}
	
};

//Child class or sub class or derived class
class derived:public base{
public:
	//destructor
	~derived(){
		cout << "derived class destroyed" << endl;
	}
};

int main(){
	
	base *ptr = new derived;//pointer of base class pointing to derived class
	delete ptr;
	return 0;
}

