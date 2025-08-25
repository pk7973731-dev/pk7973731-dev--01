#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int entry,select;
	string line;
	static int i=1 ;
	static int sn=1;
	int arooms=0, adosa=0, aidle=0, ameals=0, acoffee=0, atea=0 ;
	int srooms=0, sdosa=0, sidle=0, smeals=0, scoffee=0, stea=0 ;
	int qrooms=0, qdosa=0, qidle=0, qmeals=0, qcoffee=0, qtea=0 ;
	int prooms=0, pdosa=0, pidle=0, pmeals=0, pcoffee=0, ptea=0 ;
	int total_r=0, total_d=0, total_i=0, total_m=0, total_c=0, total_t=0 ;
	int sarooms=0, sadosa=0, saidle=0, sameals=0,sacoffee=0,satea=0;
	cout << "\t\t\t\t=============================================================" << endl;
	cout << "\t\t\t\t                   HOTEL FOOD POLLACHI!                      " << endl;
	cout << "\t\t\t\t=============================================================" << endl  << endl;
	cout << "\t\t\t\t         -------------------------------------------" << endl;
	cout << "\t\t\t\t         |     Where Every Meal is a Delight       |" << endl;
	cout << "\t\t\t\t         -------------------------------------------"  << endl  ;
	cout << "\t\t\t\t                            (^_^)                     " << endl << endl << endl;
	f1:
	cout << "\t\t_____________________________________" << endl;
	cout << "\t\tselect:" << endl;
	cout << "\t\t  1)ADMIN" << endl;
	cout << "\t\t  2)user" << endl;
	cout << "\t\t  3)End" << endl;
	cout << "\t\t_____________________________________" << endl;
	cout << "\t\t";cin>> entry;
	if(entry==1)
{

		f3:
		string username, password;
		cout << "Enter username " ;
		cin>> username;
		cout << "Enter password " ;
		cin >> password;
		if(username=="food" && password=="food")
		{
		  while(1)
		  {
		  	int user_data;
			cout << "\t\t\t\tAdministrator cotrol" << endl;
			cout << "    1)Available ammunities" << endl;
			cout << "    2)Price of the ammunitise" << endl;
			cout << "    3)Review" << endl;
			cout << "    4)End" << endl;
			cin >> user_data;
			switch(user_data)
			{
				case 1:
					{
						cout << "Enter the rooms available ";
						cin >> arooms;
						cout << "---------------------------------------------------" <<endl << endl;
						cout << "Enter the Dosa's available ";
						cin >> adosa;
						cout << "---------------------------------------------------" <<endl << endl;
						cout << "Enter the idles available ";
						cin >> aidle;
						cout << "---------------------------------------------------" <<endl << endl;
						cout << "Enter the meals available ";
						cin >> ameals;
						cout << "---------------------------------------------------" <<endl << endl;
						cout << "Enter the coffee available ";
						cin >> acoffee;
						cout << "---------------------------------------------------" <<endl << endl;
						cout << "Enter the tea available ";
						cin >> atea;
						cout << "---------------------------------------------------" <<endl << endl;
						break;
					}
				case 2:
					{
						cout << "Enter the price of single room ";
						cin >> prooms;
						cout << "--------------------------------------------" << endl << endl;
						cout << "Enter the price of single dosa ";
						cin >> pdosa;
						cout << "--------------------------------------------" << endl << endl;
						cout << "Enter the price of single plate idle ";
						cin >> pidle;
						cout << "--------------------------------------------" << endl << endl;
						cout << "Enter the price of single meals ";
						cin >> pmeals;
						cout << "--------------------------------------------" << endl << endl;
						cout << "Enter the price of single coffee ";
						cin >> pcoffee;
						cout << "--------------------------------------------" << endl << endl;
						cout << "Enter the price of single tea ";
						cin >> ptea;
						cout << "--------------------------------------------" << endl << endl;
						break;
					}
				case 3:
					{
						cout << "Number of rooms sold " << srooms << endl ;
						
						cout << "money received on solding rooms " << total_r << endl;
						
						cout << "--------------------------------------------------------" << endl << endl;
						cout << "Number of dosa sold " << sdosa << endl ;
						
						cout << "money received on solding dosa " <<total_d << endl ;
						
						cout << "--------------------------------------------------------" << endl << endl;
						cout << "Number of idle sold "  <<  sidle << endl ;
						
						cout << "money received on solding idle " <<total_i << endl ;
						
						cout << "--------------------------------------------------------" << endl << endl;
						cout << "Number of meals sold " << smeals << endl  ;
						
						cout << "money received on solding meals " << total_m << endl ;
						
						cout << "--------------------------------------------------------" << endl << endl;
						cout << "Number of coffee sold " << scoffee << endl;
						
						cout << "money received on solding coffee " <<total_c << endl ;
						
						cout << "--------------------------------------------------------" << endl << endl;
						cout << "Number of tea sold " << stea << endl ;
						
						cout << "money received on solding tea " << total_t << endl ;
						
						cout << "--------------------------------------------------------" << endl << endl;
						break;
						 
					}
				case 4:
					{
						goto f1;
					}
			}
			
		}
	  }
		else
		{
			cout << "invalide username & password" << endl;
			goto f3;
		}
}
	
	else if(entry==2)
	{
		cout  <<endl << "\t\t\t		    Welcome to hotel food Pollachi" << endl << endl;
		cout << "\t\t\t-------------------------------------------------------------------" <<endl;
		cout << "\t\t\t|               It's not a stay it is a experience!               |" <<endl;
		cout << "\t\t\t-------------------------------------------------------------------" << endl;
		cout << "\t\t\t|                   |                       |                     |" << endl;
		cout << "\t\t\t|      Dosa         |         Idle          |        Meals        |" << endl;
		cout << "\t\t\t|                   |                       |                     |" << endl;
		cout << "\t\t\t-------------------------------------------------------------------" << endl;
		cout << "\t\t\t|                   |                       |                     |" << endl;
		cout << "\t\t\t|     Cofffee       |          Tea          |         Exit        |" << endl;
		cout << "\t\t\t|                   |                       |                     |" << endl;
		cout << "\t\t\t-------------------------------------------------------------------" << endl;
		while(1)
	{
		f2:
		cout << "\tMenu"<< endl;
		cout << "\t   1)Rooms" << endl;
		cout << "\t   2)Dosa" << endl;
		cout << "\t   3)Idle" << endl;
		cout << "\t   4)Meals" << endl;
		cout << "\t   5)Coffee" << endl;
		cout << "\t   6)Tea" << endl;
		cout << "\t   7)Bil" << endl;
		cout << "\t   8)Exit" << endl;
		cout <<"   \t   " ; cin>> select;
		cout << endl << endl;
	
	
	
		switch(select)
		{
			case 1:	// rooms										   	//arooms== available in the hotel ;srooms ==sold; qrooms rooms we asked ;prooms ==price
				{														// total_r == total price; sarooms == total number of rooms purhed by the customber
					cout << "Enter the number of rooms you need :-> "; cin >> qrooms;
					if(arooms-srooms>=qrooms)
					{
						srooms=srooms+qrooms;
						cout << "your rooms are allocated" << endl;
						cout << "total price is "  << qrooms*prooms << endl << endl;
						sarooms = sarooms+qrooms;
						total_r = total_r+(sarooms*prooms);
					}
					else
					{
						cout << "sorry we only have " << arooms-srooms << endl<< endl ;
						goto f2;
					}
					break;
				}
			case 2: // Dosa
				{
					cout << "Enter the number of Dosa you need :-> "; cin >> qdosa;
					if(adosa-sdosa>=qdosa)
					{
						sdosa=sdosa+qdosa;
						cout << "your dosa's are ordered" << endl;
						cout << "total price is "  << qdosa*pdosa << endl << endl;
						total_d = total_d+(qdosa*pdosa);
						sadosa = sadosa+qdosa;
					}
					else
					{
						cout << "sorry we only have " << adosa-sdosa << endl << endl ;
						goto f2;
					}
					break;
				}
			case 3: // Idle
				{
					cout << "Enter the number of Idle you need :-> "; cin >> qidle;
					if(aidle-sidle>=qidle)
					{
						sidle=sidle+qidle;
						cout << "your idle's are ordered" << endl;
						cout << "total price is "  << qidle*pidle << endl << endl;
						total_i = total_i+(qidle*pidle);
						saidle = saidle+qidle;
					}
					else
					{
						cout << "sorry we only have " << aidle-sidle << endl << endl;
						goto f2;
					}
					break;
				}
			case 4: // meals
				{
					cout << "Enter the number of Meals you need :-> "; cin >> qmeals;
					if(ameals-smeals>=qmeals)
					{
						smeals =smeals+qmeals;
						cout << "your meals are ordered" << endl;
						cout << "total price is "  << qmeals*pmeals << endl << endl;
						total_m = total_m+(qmeals*pmeals);
						sameals = sameals+qmeals;
					}
					else
					{
						cout << "sorry we only have " << ameals-smeals << endl << endl;
						goto f2;
					}
					break;
				}
			case 5: // coffee
				{
					cout << "Enter the number of Coffee you need :-> "; cin >> qcoffee;
					if(acoffee-scoffee>=qcoffee)
					{
						scoffee =scoffee+qcoffee;
						cout << "your coffee's are ordered" << endl;
						cout << "total price is "  << qcoffee*pcoffee << endl << endl;
						total_c = total_c+(qcoffee*pcoffee);
						sacoffee = sacoffee+qcoffee;
					}
					else
					{
						cout << "sorry we only have " << acoffee-scoffee << endl << endl;
						goto f2;
					}
					break;
				}
			case 6: // Tea
				{
					cout << "Enter the number of tea you need :-> "; cin >> qtea;
					if(atea-stea>=qtea)
					{
						stea =stea+qtea;
						cout << "your tea's are ordered" << endl;
						cout << "total price is "  << qtea*ptea << endl << endl;
						total_t = total_t+(qtea*ptea);
						satea = satea+qtea;
					}
					else
					{
						cout << "sorry we only have " << atea-stea << endl << endl;
						goto f2;
					}
					break;
				}
			case 7: // Billings
				{
					ofstream bw /*bill writing */ ("hotel billing1.txt",ios::out);
					{
						bw<< "\t\t\t\t ===========================================================" << endl;
						bw<< "\t\t\t\t                     HOTEL FOOD POLLACHI                    " << endl;
						bw<< "\t\t\t\t ===========================================================" << endl <<endl;
						bw<< "\t\t\t\t                           Bill                             " << endl << endl <<endl;
						bw<< "" << endl << endl;
						bw<< "Bill no. " << i++ << endl;
						bw<< "---------------------------------------------- " << endl;
						bw<< "S.no    items                   price  " << endl;
						bw<< "---------------------------------------------- " << endl;
						if(sarooms!=0)
						{
						bw<<  sn++ <<") Rooms                        " << "Rs " << sarooms*prooms  << endl;
						}
						if(sadosa!=0)
						{
						bw<<  sn++ <<") Dosa                         " << "Rs " <<sadosa*pdosa << endl;
						}
						if(saidle!=0)
						{
						bw<< sn++  << ") Idle                         " << "Rs " << saidle*pidle << endl;
						}
						if(sameals!=0)
						{
						bw<<sn++ << ") Meals                        " << "Rs " <<sameals*pmeals  << endl;
						}
						if(sacoffee!=0)
						{
						bw<<  sn++ <<") Coffee                       " << "Rs " <<sacoffee*pcoffee << endl;
						}
						if(satea!=0)
						{
						bw<<sn++ << ") Tea                          " << "Rs " << satea*ptea  << endl;
						}
						bw<< "---------------------------------------------- " << endl;
						bw << "    TOTAL                       " << "Rs " << (sarooms*prooms)+(sadosa*pdosa)+(saidle*pidle)+(sameals*pmeals)+(sacoffee*pcoffee)+(satea*ptea)  << endl;
						bw<< "---------------------------------------------- " << endl << endl << endl;
						bw << "            thank you , come again" << endl;
					}
					ifstream br/* Bill reading*/ ("hotel billing1.txt");
					{
						if(!br)
						{
							cout << "we unable to generate bill" << endl;
						}
						else
						   {
						   		
						   		while(!br.eof())
						   	    {
						   	    	getline(br,line);
						   	    	cout << line << endl;	
								}
						   }
					}
					goto f4;
					break;
				}
			case 8: //Exit
				{
					goto f1;
				}
			default:
				cout << "Invalide choice " << endl;
				break;
		}
	 	}
	}
	else if(entry==3)
	{
		exit(0);
	}
	else
	{
		cout << "invalid choice  " << endl;
	}
	f4:
	{
		sarooms=0, sadosa=0, saidle=0, sameals=0,sacoffee=0,satea=0;
		goto f1;
		
    }
	return 0;
} 
