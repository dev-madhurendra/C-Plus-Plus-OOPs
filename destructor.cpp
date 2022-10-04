#include<bits/stdc++.h>
using namespace std;
/*
	Destructor : 1.Destructor destroys the class objects created by the constructor.

				 2.Destructor has the same name as their class name preceded by a tilde (~) symbol.

				 3. It is not possible to define more than one destructor. (destructor can-not be overloaded)

				 4.The destructor is only one way to destroy the object created by the constructor. 	

				 5.Destructor neither requires any argument nor returns any value.

				 6.It is automatically called when the object goes out of scope.

*/

//class
class Dog{
public:
	//default constructor
	Dog(){
		cout << "Dog class is created" << endl;
	}
	//destructor
	~Dog(){
		cout << "Dog class is destroyed" << endl; 
	}
};
int main(){
	Dog dg;//object of class created

	return 0;
}