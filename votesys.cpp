#include<iostream>
#include<string>
using namespace std;
int main()
{
	string candidate_1,candidate_2;
	int c1=0,c2=0,nota=0;
	int total=0; 
	int voter,age;
	int choose1,choose2 ,choose3,choose4;
	cout << "\t\t\t\t======================================================"<< endl;
	cout << "\t\t\t\t               CPP VOTING SYSTEM                      "<< endl;
	cout << "\t\t\t\t======================================================"<< endl<< endl << endl;
	f1:
		
	cout << "\t\t  1)  Admin"<< endl;
	cout << "\t\t  2)  Voter"<< endl;
	cout << "\t\t  3)  Exit" << endl;
	cout << "\t\t   Enter your choise : ";
	cin >> choose1;
	cout << endl << endl;
	if(choose1==1)
	{
		ch2:
		cout << endl;
		cout << "\t\t  1) Candidates" << endl;
		cout << "\t\t  2) Winners" << endl;
		cout << "\t\t  3) Reset" << endl;
		cout << "\t\t  4) Exit" << endl;
		cout << "\t\t  Enter your choice : " ;
		cin >> choose2; 
		cout << endl << endl;
		switch(choose2)
		{
			case 1:
				{
					cout << "Your need to choose two candidates  " << endl;
					cout << "Enter the name of your first candidate  :-> ";
					cin >> candidate_1;
					cout << endl;
					cout << "Enter the name of your second candidate  :-> ";
					cin >> candidate_2;
					cout << endl;
					goto ch2;
				}
				break;
			case 2:
				{
					cout << "The number of votes secured by " << candidate_1 << " is :  " << c1 << endl;
					cout << "The number of votes secuted by " << candidate_2 << " is :  " << c2 << endl;
					cout << "The total number of voters select NOTA is :  " << nota << endl;
					if(candidate_1> candidate_2)
					{
						cout << candidate_1 << "  won the election he has secured " << c1-c2 << " votes more than " << candidate_2 << endl;
					}
					else if(candidate_2> candidate_1)
					{
						cout << candidate_2 << "  won the election he has secured " << c2-c1 << " votes more than " << candidate_1 << endl;
					}
					else
					{
						cout << "the election was draw the two candidates has secured same number of votes " << endl;
					}
					goto ch2;
				}
				break;
			case 3:
				{
					c1=0;c2=0;nota=0;
					cout << "system get restarted" << endl;
					goto ch2;
				}
				break;
			case 4:
				{
					goto f1;
				}
				break;
			default:
				{
					cout << "Invalid choice, try again!" << endl;
					goto ch2;
				}
		}
	}
	else if (choose1==2)
	{
		cout << "Enter your age : " ;
		cin >> age;
		if (age>18)
		{
			
			vot:
			cout << endl;
			cout << "Press 1 to vote for " << candidate_1 << endl;
			cout << "Press 2 to vote for " << candidate_2 << endl;
			cout << "Press 3 to vote for " << "nota" << endl;
			cout << "Enter Your choice : ";
			cin >> voter;
			
			if (voter==1)
			{
				c1++;
				total++;
				cout << "Your vote is acepted "<< endl;
				cout << "THANK YOU FOR VOTING " << endl;
				goto f1;
			}
			else if (voter==2)
			{
				c2++;
				total++;
				cout << "Your vote is acepted "<< endl;
				cout << "THANK YOU FOR VOTING " << endl;
				goto f1;
			}
			else if (voter==3)
			{
				nota++;
				total++;
				cout << "Your vote is acepted "<< endl;
				cout << "THANK YOU FOR VOTING " << endl;
				goto f1;
			}
			else
			{
				cout << "Invalid input plese try again " << endl;
				goto vot;
			}
		}
		else
		{
			cout << "your are not elegible for voting " << endl;
			exit(0);
		}
	}
	else if (choose1==3)
	{
		exit(0);
	}
	else
	{
		cout << "Invalid input " << endl;
		goto f1;
	}
}
