#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
class ATM{
private:
	long int account_number;
	string name;
	int PIN;
	double balance;
	string mobile_number;
public:
	void setData(int account_number_a,string name_a,int PIN_a,int balance_a,string mobile_number_a){
		account_number = account_number_a;
		name = name_a;
		PIN = PIN_a;
		balance = balance_a;
		mobile_number = mobile_number_a;
	}

	long int getAccountsNo(){
		return account_number;
	}

	string getName(){
		return name;
	}

	int getPIN(){
		return PIN;
	}

	double getBalance(){
		return balance;
	}

	string getMobileNumber(){
		return mobile_number;
	}


	void updateMobileNumber(string pre_no , string new_no){
		if(pre_no==mobile_number){
			mobile_number = new_no;

			cout << "mobile number updated successfully " << endl;
		}else{

			cout << "incorrect mobile number you have entered" << endl;

		}
	}

	void cashWithdraw(int amount){
		if(amount>0 && amount<balance){
			balance -= amount;
			cout << "please collect you cash" << endl;
		}else{
			cout << "insufficient balance" << endl;
		}
	}
};
int main(){
	int choice = 0 , enterPIN;
	long int enterAccountNo;
	system("cls");

	ATM user1;
	user1.setData(1234567,"Madhurendra",2580,40000.00,"6307233230");
	do{
		system("cls");
		cout << endl << "Welcome to SBI ATM" << endl;
		cout << "Enter you account number" << endl;
		cin >> enterAccountNo;

		cout << endl << "Enter your pin" << endl;
		cin >> enterPIN;

		if(enterAccountNo==user1.getAccountsNo() && enterPIN==user1.getPIN()){
			do{
				int amnt = 0;
				string old_mobile_num , new_mobile_num;
				system("");
				cout << endl << "Welcome to SBI ATM" << endl;
				cout << endl << "Select Option" << endl;
				cout << endl << "1. Check Balance" << endl;
				cout << endl << "2. Cash Withdraw" << endl;
				cout << endl << "3. Show User Details" << endl;
				cout << endl << "4. update Mobile number" << endl;
				cout << endl << "5. Exit" << endl;

				cin >> choice;
				switch(choice){
					case 1:
						cout << endl << "your balance is " << user1.getBalance() << endl;
						getch();
						break;
					case 2:
						cout << endl << "enter your amount " << endl;
						cin >> amnt;
						user1.cashWithdraw(amnt);
						getch();
						break;

					case 3:
						cout << endl << "user details " << endl;
						cout << "account number " << user1.getAccountsNo() << endl;
						cout << "balance  " << user1.getBalance() << endl;
						cout << "name  " << user1.getName() << endl;
						cout << "mobile number " << user1.getMobileNumber() << endl;
						getch();
						break;
					case 4:
						cout << endl << "enter old mobile number " << endl;
						cin >> old_mobile_num;
						cout << endl << "enter old mobile number " << endl;
						cin >> new_mobile_num;
						user1.updateMobileNumber(old_mobile_num,new_mobile_num);
						getch();
						break;
					case 5:
						exit(0);
						break;

				}

			}while(choice);
		}
	}while(1);
	return 0;
}