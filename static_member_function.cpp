#include<bits/stdc++.h>
using namespace std;
/*

	Static data member : 1.static member would be allocated memory only once.
					 and that memory is shared by all the objects
					
					2.it can be declared using static keyword.
					
					3.static member belong to class and shared will all the
					objects

	Static member function : 1.static member function can only access static data memeber
	                           and perform some operation on static data member.

	                         

*/

//class
class A{
private:
	int a,b;
public:
	
	A(int _a=0,int _b=0){
		a = _a;
		b = _b;
	}

	//static data member
	static int stat;

	//static member function
	static int get(){
		stat++;
		return stat;
	}
};

int A::stat = 0;
int main(){
	cout << A::get() << endl;
	A a;
	cout << A::get() << endl;
	A b;
	cout << A::get() << endl;
	cout << a.get() << endl;
	cout << b.get() << endl;
	return 0;
}