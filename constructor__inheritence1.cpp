#include<bits/stdc++.h>
using namespace std;


/*
	Note : 1.At first default constructor of base class will be called and then 
             default constructor of derived class will be called.

            2.And if we called parameterized object then first default constructor of base class will be
              called and then parameterized constructor of derived class will be called.


*/

//Base class or Parent class or Super class
class base{
public:
	//default constructor
	base(){
		cout << "Default constructor called of base class" << endl;
	}
	//parameterized constructor
	base(int b){
		cout << "Parameterized constructor called of base class " << b << endl; 
	}
};

//Child class or sub class or derived class
class derived:public base{
public:
	//default constructor
	derived(){
		cout << "Default constructor called of derived class" << endl;
	}
	//parameterized constructor
	derived(int b){
		cout << "Parameterized constructor called of derived class " << b << endl; 
	}
};
int main(){
	derived d1;//object of default constructor called

	derived d2(10);//object of parameterized constructor called
	return 0;
}



// output will be

/*
Default constructor called of base class
Default constructor called of derived class
Default constructor called of base class
Parameterized constructor called of derived class 10
*/