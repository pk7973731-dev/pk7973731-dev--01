#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

class test
{
private:
	vector <string> list;
	fstream myfile;
public:
	void stater()
	{
		cout << endl;
		cout << "\t\t 1) Add a new Task " << endl;
		cout << "\t\t 2) view all Task " << endl;
		cout << "\t\t 3) Mark Task as Completed " << endl;
		cout << "\t\t 4) Remove Task " << endl;
		cout << "\t\t 5) Exit " << endl;
		cout << "\t\t     Enter your choice : ";
	}
	void Exit()
	{
		cout << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "   Thank You ! Your Taskes were saved in our database \n";
		exit(0);
	}
	void recovery()
	{
		string line;
		myfile.open("todo.txt", ios::in);
		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				list.push_back(line);
			}
		}
		myfile.close();
	}
	void addfile()
	{
		system("cls");
		string tmp;
		cout << " Add Task: " << endl;
		cout << "--------------------------------" << endl;
		cout << "Enter your new task here : ";
		cin.ignore();
		getline(cin, tmp);
		list.push_back(tmp);
		myfile.open("todo.txt", ios::out);
		if (myfile.is_open())
		{
			for (auto i : list)
			{
				myfile << i << endl;
			}
		}
		myfile.close();
		cout << "Your task was added successfully" << endl;

	}
	void CTask()
	{
		int index;
		int SList = list.size();
		system("cls");
		cout << " Mark Task as Completed";
		cout << "--------------------------------" << endl;
		cout << endl;
		if (SList == 0)
		{
			cout << "No Task yet; " << endl;
			return;
		}
		for (int i = 0; i < SList; i++)
		{
			cout << i + 1 << " " << list[i] << endl;
		}
		cout << endl << "Enter the Task number you need to mark: ";
		cin >> index;
		list[index-1] = "[Completed] " + list[index-1];
		myfile.open("todo.txt", ios::out);
		if (myfile.is_open())
		{
			for (auto i : list)
			{
				myfile << i << endl;
			}
		}
		myfile.close();
		cout << "Your Task was marked Successfully" << endl;
	}
	void VTask()
	{
		system("cls");
		cout << " View your Task: " << endl;
		cout << "-----------------------------------------------" << endl;
		cout << endl;
		int SList = list.size();
		if (SList == 0)
		{
			cout << "No Task yet;" << endl;
			return;
		}
		for (int i = 0; i < SList; i++)
		{
			cout << i + 1 << " " << list[i] << endl;
		}
		cout << endl;
	}
	void removeTask()
	{
		system("cls");
		int SList = list.size();
		int index;
		cout << " Remove Task: " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl;
		if (SList == 0)
		{
			cout << "No Task yet; " << endl;
			return;
		}
		for (int i = 0; i < SList; i++)
		{
			cout << i + 1 << " " << list[i] << endl;

		}
		cout << endl;
		cout << "Enter the number of the Task you need to remove : ";
		cin >> index;
		list.erase(list.begin() + index - 1);
		cout << "Your Task is removed successfully; " << endl;
		cout << endl;
		myfile.open("todo.txt", ios::out);
		if (myfile.is_open())
		{
			for (auto i: list)
			{
				myfile << i << endl;
			}
		}
		myfile.close();
	}

}t;

int main()
{

	cout << "\t\t\t\t ========================================" << endl;
	cout << "\t\t\t\t            TODO LIST MANAGET            " << endl;
	cout << "\t\t\t\t ========================================" << endl << endl;

	int choice;
	t.recovery();
	while (1)
	{
		t.stater();
		cin >> choice;
		switch (choice)
		{
		case 1:
			t.addfile();
			break;
		case 2:
			t.VTask();
			break;
		case 3:
			t.CTask();
			break;
		case 4:
			t.removeTask();
			break;
		case 5:
			t.Exit();
			break;
		default:
			cout << "Invalid User Input " << endl;
		}
	}
	return 0;

	
}