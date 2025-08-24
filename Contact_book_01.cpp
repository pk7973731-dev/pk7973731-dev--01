#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<filesystem>
using namespace std;

class one
{
public:
	string name, phone, email, remark;
	one(string n,string p,string e, string r):name(n),phone(p),email(e),remark(r)
	{ }

};

class two
{
private:
	vector <one>o;
//	one noOne;
	fstream myfile;
	string fileName = "Contact.txt";
	

	void SaveFile()
	{
		
		myfile.open(fileName, ios::out);
		if (myfile.is_open())
		{
			for ( const auto& i : o)
			{
				myfile << i.name << endl;
				myfile << i.phone << endl;
				myfile << i.email << endl;
				myfile << i.remark << endl;
			}
		}
		
		myfile.close();
	}

public:
	void loadFile()
	{
		string name, phone, email, remark,check;
		myfile.open(fileName, ios::in);
		if (myfile.is_open())
		{
			
			
				while (getline(myfile, name) && getline(myfile, phone) && getline(myfile, email) && getline(myfile, remark))
				{
					o.push_back(one(name, phone, email, remark));
				}
				myfile.close();
				return;
			
			
		}
		else
		{
			myfile.close();
			return;
		}
	
		
	}
	void addfile()
	{
		string n, p, e, r;
		system("cls");
		cout << " Add Contacts : " << endl;
		cout << "-------------------------------------------" << endl;
		cout << endl;
		cout << "Enter the name : ";
		cin.ignore();
		getline(cin, n);
		cout << "Enter the phone number : ";
		cin >> ws;
		getline(cin, p);
		cout << "Enter the email : ";
		cin>> ws;
		getline(cin, e);
		cout << "Enter remarks : ";
		cin >> ws;
		getline(cin, r);
		cout << endl;
		o.push_back(one(n, p, e, r));
		SaveFile();
		cout << "Your Contact added Successfully !!" << endl;
		cout << endl;
		return;
	}
	 void viewFile()
	{
		system("cls");
		cout << " view Contacts : " << endl;
		cout << "----------------------------------------------" << endl;
		cout << endl;
		int p = 1;
		if (o.empty())
		{
			cout << "No Contacts yet!!" << endl;
			cout << endl;
			cout << string(34, '-') << endl;
			return;
		}
		for (const auto& i : o)
		{
			cout << p << " Contact :" << endl;
			cout << "---------------------------" << endl;
			cout << "Name     : " << i.name << endl;
			cout << "Phone    : " << i.phone << endl;
			cout << "Email    : " << i.email << endl;
			cout << "Remark   : " << i.remark << endl;
			cout << endl;
			p++;
		}
		return;

	}
	 void SearchContact()
	 {
		 string searcher;
		 bool found =false;
		 system("cls");
		 cout << endl;
		 cout << " Search Contact: " << endl;
		 cout << "-------------------------------------" << endl;
		 if (!o.empty())
		 {
			
			 
			 cout << "Enter the Search Name : ";
			 cin.ignore();
			 getline(cin, searcher);
			 for (const auto& i : o)
			 {
				 if (i.name.find(searcher) != string::npos)
				 {
					 found = true;
					 cout << "Contact found : " << endl;
					 cout << "---------------------------" << endl;
					 cout << "Name     : " << i.name << endl;
					 cout << "Phone    : " << i.phone << endl;
					 cout << "Email    : " << i.email << endl;
					 cout << "Remark   : " << i.remark << endl;
					 cout << endl;
				 }


			 }
			 if (!found)
			 {
				 cout << "Your Contact not found, Sorry!!" << endl;
				 return;

			 }
		 }
		 else
		 {
			 cout << "No Contcts added yet!!" << endl;
			 cout << endl;
			 cout << string(34, '-') << endl;
			 return;
		 }
	 }

	 void UpdateFile()
	 {
		 string searcher;
		 string newn, newp, newe, newr;
		 system("cls");
		 cout << " Update Your Contact : " << endl;
		 cout << "---------------------------------------------------" << endl;
		 if (!o.empty())
		 {
			 
			 cout << "Enter the Name of your contact to be updated : ";
			 cin.ignore();
			 getline(cin, searcher);
			 for (auto& i : o)
			 {
				 if (i.name == searcher)
				 {
					 cout << "Enter the new name or give a single blank space to keep it : ";
					 cin.ignore();
					 getline(cin, newn);
					 if (!newn.empty())
					 {
						 i.name = newn;

					 }
					 //----------------------------------
					 cout << "Enter the new phone number or give a single blank space to keep it : ";
					 cin.ignore();
					 getline(cin, newp);
					 if (!newp.empty())
					 {
						 i.phone = newp;

					 }
					 //---------------------------------
					 cout << "Enter the new email or give a single blank space to keep it : ";
					 cin.ignore();
					 getline(cin, newe);
					 if (!newe.empty())
					 {
						 i.email = newe;

					 }
					 //-----------------------------
					 cout << "Enter the new rmark or give a single blank space to keep it : ";
					 cin.ignore();
					 getline(cin, newr);
					 if (!newr.empty())
					 {
						 i.remark = newr;

					 }
					 SaveFile();

				 }
				 else
				 {
					 cout << "Your Contact not found, Sorry!!" << endl;
					 cout << endl;
					 cout << string(34, '-') << endl;
					 return;
				 }
			 }
		 }
		 else
		 {
			 cout << "No Contacts added yet!!" << endl;
			 cout << endl;
			 cout << string(34, '-') << endl;
			 return;
		 }
	 }


	 void deleteFile()
	 {
		 string search;
		 system("cls");
		 cout << " Delete Contact : " << endl;
		 cout << "----------------------------------------------------" << endl;
		 if (!o.empty())
		 {
			 
			 cout << endl;
			 cout << "Enter the name of your contact to delete : ";
			 cin.ignore();
			 getline(cin, search);
			 for (auto p = o.begin(); p != o.end(); p++)
			 {
				 if (p->name == search)
				 {
					 o.erase(p);
					 SaveFile();
					 cout << "Your contact deleted successfully !! " << endl;
					 return;
				 }

			 }


			 cout << "Your Contact not found, Sorry!!" << endl;
			 return;
		 }
		 else
		 {
			 cout << "No Contacts added yet!!" << endl;
			 cout << endl;
			 cout << string(34, '-') << endl;
			 return;
		 }
		 

	 }
	 void Exit()
	 {
		 cout << endl;
		 cout << "\t\t\t\t===================================" << endl;
		 cout << "\t\t\t\t             Thank you             " << endl;
		 cout << "\t\t\t\t===================================" << endl;
		 exit(0);
	 }
}q;


int main()
{
	int c;q.loadFile();
	cout << "\t\t\t\t===========================================" << endl;
	cout << "\t\t\t\t          CONTACT BOOK CPP                 " << endl;
	cout << "\t\t\t\t===========================================" << endl;
	cout << endl;
	
	while (1)
	{
		
		cout << "1) Add a new Contact " << endl;
		cout << "2) View all Contact " << endl;
		cout << "3) Search a Contact " << endl;
		cout << "4) Update a Contact " << endl;
		cout << "5) Delete a Contact " << endl;
		cout << "6) To Exit " << endl;
		cout << "   Enter Your Choice : ";
		cin >> c;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Invalid User Input Please try again!! " << endl;
			continue;
		}
		switch (c)
		{
		case 1:
			q.addfile();
			break;
		case 2:
			q.viewFile();
			break;
		case 3:
			q.SearchContact();
			break;
		case 4:
			q.UpdateFile();
			break;
		case 5:
			q.deleteFile();
			break;
		case 6:
			q.Exit();
			break;

		default:
			cout << "Invalid user input " << endl;
			break;
		}
	}
	return 0;
}
