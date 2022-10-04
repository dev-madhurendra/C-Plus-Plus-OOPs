#include<bits/stdc++.h>
using namespace std;

/*
	Overloaded Costructor : 1.constructor  overloading is when we overload default
							  constructor and parameterized constructor lik this

	//Default : 
			A(){
				name = "";
			}	

	//Parameterized:
			A(string name_a){
				name = name_a;
			}

	//Overloaded:
			A(string name_a = ""){
				name = name_a;
			}
*/

//class
class Dog{
	//data member
private:
	string name;
public:
	//parameterized constructor
	Dog(string name_a = ""){
		name = name_a;
	}
	//member function
	void run(){
		cout << name << " is running." << endl;
	}
};
int main(){
	Dog dg1;//dg is object of class Dog
	dg1.run();//member function run() called of class Dog


	return 0;
}
