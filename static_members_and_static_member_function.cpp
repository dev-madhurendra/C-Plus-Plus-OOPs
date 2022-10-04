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
	
	A(int _a,int _b){
		a = _a;
		b = _b;
		stat++;
		cout << stat << endl;
	}

	//static data member
	static int stat;
};

int A::stat = 0;
int main(){
	cout << "static member value in object a = ";
	A a(1,2);
	cout << "static member value in object b = ";
	A b(3,4);
	cout << "static member value in object c = ";
	A c(5,6);
	return 0;
}