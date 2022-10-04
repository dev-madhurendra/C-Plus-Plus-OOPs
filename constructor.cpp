#include<bits/stdc++.h>
using namespace std;

/*
	Constructor : 1.Constructor is a function which name is same as class name and
				  having no return type.
				  
				  2.Constructor is a special method that is invoked automatically 
				  at the time of object creation.

				  3. It is used to initialize the data members of new objects generally.


	Constuctor is of three type.
	1.Default or Non-parameterized
	2.Parameterized
	3.Copy


	Default Constructor : 1.Default Constructors don’t have input argument however.
						  2.If we do not specify a constructor, C++ compiler generates a default 
						    constructor for object (expects no parameters and has an empty body).

	Parameterized Constructor : 1.Parameterized Constructors have input arguments.

	Copy Constructor : 1.Copy Constructors have input arguments.
*/

//class
class Dog{
	//data member
private:
	string name;
public:
	//Default constructor
	Dog(){
		name = "";
	}
	//parameterized constructor
	Dog(string name_a){
		name = name_a;
	}
	//copy constructor
	Dog(Dog &dog_1){
		name = dog_1.name;
	}
	//member function
	void run(){
		cout << name << " is running." << endl;
	}
};
int main(){
	Dog dg1;//dg is object of class Dog
	Dog dg2("Pitbull");
	Dog dg3(dg2);

	dg1.run();//member function run() called of class Dog
	dg2.run();
	dg3.run();

	return 0;
}
