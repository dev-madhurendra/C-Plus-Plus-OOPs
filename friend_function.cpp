#include<bits/stdc++.h>
using namespace std;

/*
	Friend function : 1.a friend function can be given a special grant to access 
						private and protected members.

					  2. A friend function can be: 
							a) A member of another class 
							b) A global function 

					  3.A friend function is a special function in C++ which in-spite of not being member 
					    function of a class has privilege to access private and protected data of a class.

					  4.The keyword “friend” is placed only in the function declaration 
					  	of the friend function and not in the function definition.

					  5.Friend function can be declared in any 
					  	section of the class i.e. public or private or protected.

					  6.When friend function is called neither name of object nor dot operator is used. 
					  	However it may accept the object as argument whose value it want to access.



*/

//class
class boys{
private:
	int number_of_boys;
public:
	boys(int boys_no){
		number_of_boys = boys_no;
	}
	friend void Fun();
};

//class 
class girls{
private:
	int number_of_girls;
public:
	girls(int girls_no){
		number_of_girls = girls_no;
	}
	//frien function declaration
	friend void Fun();
};

//friend function
void Fun(){
	boys b(60);
	girls g(30);

	int x = b.number_of_boys + g.number_of_girls;

	cout << "total student in class = " << x << endl; 
}
int main(){
	Fun();
	return 0;
}