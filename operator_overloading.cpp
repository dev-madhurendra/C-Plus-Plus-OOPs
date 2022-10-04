#include<bits/stdc++.h>
using namespace std;
/*
	Operator Overloading : 1.Operator overloading is needed when we have to 
							perform some operation  ( + ,/,*,- ) on user defined data type.

						   2.It is compile time polymorphism.

						   3.Without operator overloading we can add only defined data type
						     we can't use for user defined data type.


*/
class Person
{
private:
	//data member
	int weight;
public:
	//overloaded constructor
	Person(int weight_a = 0){
		weight = weight_a;
	}
	
	//destructor
	~Person(){
		cout << "Destructor is called." << endl;
	}

	//operator overloading for '+' operator
	Person operator+(Person obj_b){
		Person temp;
		temp.weight = weight + obj_b.weight;
		return temp;
	}

	//member function
	void printWeight(){
		cout << "weight is " << weight << "Kg" << endl;
	}
	
};

//Another example we have to overload '--' decreament operator

class DecreamentOverlaod{
	int a;
public:
	DecreamentOverlaod(int _a = 0){
		a = _a;
	}

	//syntax of operator overloading for pre decreament
	void operator--(){
		a--;
	}

	//syntax of operator overloading for post decreament
	void operator--(int){
		a--;
	}

	void print(){
		cout << a << endl;
	}
};

int main(){
	Person p1(63);
	Person p2(78);

	Person total;
	total = p1 + p2;

	total.printWeight();

	//checking output for DecreamentOverloading class

	DecreamentOverlaod doc(100);
	//predecreament
	--doc;
	//postdecreament
	doc--;
	doc.print();
	return 0;
}