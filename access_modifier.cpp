#include<bits/stdc++.h>
using namespace std;

/*
	Access Modifier ->
		   It is of four type ->
		   1.Public
		   2.Private
		   3.Protected
		   4.Default

	Public : It can be accessed from outside of the class.
			 (accessible from anywhere)

	Private : It can't be accessed from outside of the class.
			  (can't accessible even in inherited class or child class)

	Protected: It can't be accessed from outside of the class but accessible
			   in child class or inherited class.

	Default : By default data member and member function is private.

	access modifier basically increase the security or data hiding.

*/

//class
class Dog{
	//data member
private:
	string name = "Pitbull";
public:
	//member function
	void run(){
		cout << name << " is running. " << endl;
	}
};
int main(){
	Dog dg;//dg is object of class Dog

	dg.run();//member function run() called of class Dog

	return 0;
}
