#include <iostream>
#include <string>
using namespace std;
class account
{
	public:
		string name;
		int account_no;
		void get_details()
		{
			cout << "Enter your account number:-> ";
			cin >> account_no;
			cout << "Enter your name :-> ";
			cin >> name; 
		}	
};
class current_account :public account
{
	private:
		float c_deposite , c_balance ,c_withdraw;
	public:
		void deposite()
		{
			cout << "Enter the amount you need to deposite :-> ";
			cin >> c_deposite;
			c_balance=c_balance + c_deposite;
			cout << "Your current account balance is :-> " << c_balance << endl;
		}
		void withdraw()
		{
			cout << "Enter the amount you need to withdraw :-> ";
			cin >> c_withdraw;
			if(c_balance>500) // && c_withdraw < c_balance;
			{
				c_balance=c_balance-c_withdraw;
				cout << "Your current account balance is :-> " << c_balance << endl;
			}
			else
			{
				cout << "Enter you doesn't have enough ammount to withdraw"  << endl;
			}
		}
		void display ()
		{
			cout << "Your account number is :-> " << account_no << endl;
			cout << "The name of your account is :-> " << name << endl;
			cout << "Your current account balance is :-> " << c_balance << endl << endl;
		}
	
};
class saving_account :public account
{
	private:
		float s_deposite, s_withdraw , s_balance , interest;
	public:
		void deposite ()
		{
			interest=(s_balance*3)/100;
			cout << "Enter the ammount you need to deposite :-> ";
			cin >>   s_deposite;
			s_balance=s_balance + interest + s_deposite;
		}
		void withdraw ()
		{
			interest=(s_balance*3)/100;
			s_balance = s_balance + interest;
			cout << "Enter the amount you need to withdraw :-> ";
			cin >> s_withdraw;
			if (s_balance>500) // && s_withdraw < s_balance;
			{
				s_balance = s_balance-s_withdraw;
				cout << "Your current account balance is :-> " << s_balance << endl;
			}
			else 
			{
				cout << "Enter you doesn't have enough ammount to withdraw" << endl ;
			}
		}
		void display ()
		{
			cout << "Your account number is :-> " << account_no << endl;
			cout << "The name of your account is :-> " << name << endl;
			cout << "Your current account balance is :-> " << s_balance << endl << endl;
		}
	
};
int main ()
{
	int op;
	current_account ca;
	saving_account sa;
	account aa;
	cout << "|--------------------------------------------------------------------------|" << endl;
	cout << "|____________________welcome to the INDIAM Bank____________________________|" << endl << endl << endl;
	char type;
	aa.get_details();
	cout << "Please enter your account type 's' for savings account and 'c' for current accounts :-> ";
	cin >> type;
	cout << endl ;
	if(type=='C' || type=='c')
	{
		cout << "|-------------------------------------------------------------|" << endl << endl;
		cout << "  Your account is a current account" << endl;
		cout << "  Please choose any of the following that I can help you :)" << endl;
		while(1)
		{
			cout << " 1)  DEPOSITE" << endl;
			cout << " 2)  WITHDRAW" << endl;
			cout << " 3)  DETAILS " << endl;
			cout << " 4)  CLOSE   " << endl;
			cout << "Choose your option  :-> ";
			cin >> op;
			cout << endl;
			switch (op)
			{
				case 1:
					{
						ca.deposite();
					}
					break;
				case 2:
					{
						ca.withdraw();
					}
					break;
				case 3:
					{
						ca.display();
					}
					break;
				case 4:
					goto end;
				default:
					cout << "invalid "<< endl;
			}
		}
	}
	else if(type=='S' || type=='s')
	{
		cout << "|-------------------------------------------------------------|" << endl << endl;
		cout << "  Your account is a saving's account" << endl;
		cout << "  Please choose any of the following that I can help you :)" << endl;
		while(1)
		{
			cout << " 1)  DEPOSITE" << endl;
			cout << " 2)  WITHDRAW" << endl;
			cout << " 3)  DETAILS " << endl;
			cout << " 4)  CLOSE   " << endl;
			cout << "Choose your option  :-> ";
			cin >> op;
			cout << endl;
			switch (op)
			{
				case 1:
					{
						sa.deposite();
					}
					break;
				case 2:
					{
						sa.withdraw();
					}
					break;
				case 3:
					{
						sa.display();
					}
					break;
				case 4:
					goto end;
				default:
					cout << "invalid "<< endl;
			}
		}
	}
	else 
	{
		cout << "Invalid type input " << endl ;
	}
	end:
		cout  << endl << endl << "!-------THANK YOU FOR BANKING-------!";
	return 0;	
}
