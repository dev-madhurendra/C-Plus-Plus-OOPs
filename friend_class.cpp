#include<bits/stdc++.h>
using namespace std;

/*

Friend class ->
			if two classes are friend of each other then one class
			can use featrues of another class.

*/
//class
class boys{
private:
	int number_of_boys;
public:
	//overloaded constructor
	boys(int boys_no = 0){
		number_of_boys = boys_no;
	}
	friend class girls;
};

//class 
class girls{
private:
	int number_of_girls;
public:


	//overloaded constructor
	girls(int girls_no = 0){
		number_of_girls = girls_no;
	}

	int sum(){
		//we can create object because girls is friend class of boys
		boys b(60);
		int sum = b.number_of_boys + number_of_girls;
		return sum;
	}
};

int main(){
	girls g(25);
	cout << "total number of students in class = " << g.sum() << endl;
	return 0;
}