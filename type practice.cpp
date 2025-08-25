#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class practice
{
	public:
		int t_count=0;	// total count -> total attempts
		int c_count=0;	// correct count -> correct attempts
		int e_count=0;	// error count -> wrong attempts
		int num;
		char c;
		int choice;
		int press;

		void test(char a[])
		{
			m1:
			srand(time(0));
			num=rand()%29;
			cout << "Your option  " << a[num] << endl;
			cout << "	Type it  :->  ";
			cin >> c;
			cout << endl << endl;
			if(a[num]==c)
			{
				t_count++;
				c_count++;
				goto m1;
			}
			else if (c== '0')
			{
			
				goto m2;
			}
			else
			{
				t_count++;
				e_count++;
				cout << "----------------------------------------------"<< endl;
				cout << "		Error:"<< endl;
				cout << "----------------------------------------------" << endl;
				m3:
				cout << "Enter '1' to countinue && '2' to get result ";
				cin >> choice;
				if (choice==1)
				{
					cout << endl;
					goto m1;
				}
				else if (choice==2)
				{
					cout << endl;
					goto m2;
				}
				else
				{
					cout << "Invalide input  " << endl ;
					goto m3;
				}
			
			}
			m2:
				cout << endl;
				cout << "Results:" << endl;
				cout << "=============================================" << endl;
				cout << "	Total attempts 	   :" << t_count << endl;
				cout << "	Correct attempts   :" << c_count << endl;
				cout << "	Total Errors       :" << e_count << endl;
				cout << "=============================================" << endl;
				p1:
				cout << "Press '1' to continue && '2' to Quit  ";
				cin  >>press;
				if (press ==1)
				{
					cout << endl;
					goto m1;	
				} 
				else if (press == 2)
				{
					cout << endl;
					goto end;
				}
				else
				{
					cout << "Invalide input  " << endl ;
					goto p1;
				}
				end:
					cout << endl << endl;
					cout << "========================================" << endl;
					cout << "              THANK YOU !" << endl;
					cout << "========================================" << endl;
					exit(0);


		}
};
int main()
{
	practice type;
	char start;
	cout << "\t\t\t\t======================================================================" << endl;
	cout << "\t\t\t\t                              PRO TYPEST                              " << endl;
	cout << "\t\t\t\t======================================================================" << endl  << endl;
	

	cout << "Press '0'(zero) to get results "<< endl  << endl;
	f1:
	cout << "To get started press 's' ";
	cin >> start;
	if (start=='S'|| start=='s')
	{
		char a[29]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',';','.',','};
		cout << endl<< endl;
		type.test(a);
	}
	else 
	{
		cout << "Invalid input ";
		goto f1;
	}

	return 0;
	
}
