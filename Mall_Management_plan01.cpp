#include <iostream>
//#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

class one
{
public:
    string Sname, d1, d2, d3, Sno,Pd1,Pd2,Pd3;
    int t1=0, t2=0, t3=0;

    one(string sname, string Sn, string D1, string D2, string D3, string p1, string p2, string p3 ) :Sname(sname), Sno(Sn), d1(D1), d2(D2), d3(D3), Pd1(p1), Pd2(p2),Pd3(p3)
    { }
    
};

class two {
private:
    vector<one>store;
    fstream myfile;
    string fransdetile = "francise.txt";
    string fransprice = "fraciseprice.txt";

    void savefile()
    {
        myfile.open(fransdetile, ios::out);
        if (myfile.is_open())
        {
            for (const auto& i : store)
            {
                myfile << i.Sname << endl;
                myfile << i.Sno << endl;
                myfile << i.d1 << endl;
                myfile << i.d2 << endl;
                myfile << i.d3 << endl;
               
                myfile << i.Pd1 << endl;
                myfile << i.Pd2 << endl;
                myfile << i.Pd3 << endl;
               
            }
        }
        else { cout << endl << "file doesn't exists !!" << endl; }

        myfile.close();
        return;
    }

public:
    void loadfile()
    {
        string Sname, d1, d2, d3,  Sno, Pd1, Pd2, Pd3;
        myfile.open(fransdetile, ios::in);
        if (myfile.is_open())
        {
            while (getline(myfile, Sname) && getline(myfile, Sno) && getline(myfile, d1) && getline(myfile, d2) && getline(myfile, d3)  && getline(myfile, Pd1)
                   && getline(myfile, Pd2) && getline(myfile, Pd3) 
                )
            {
                store.push_back(one(Sname, Sno, d1, d2, d3,  Pd1, Pd2, Pd3 ));
            }
        }
        myfile.close();

    }

    void addstore()
    {
        string Sname, d1, d2, d3,  Sno, Pd1, Pd2,Pd3;

        system("cls");
        cout << "\t\t\t\t========================================" << endl;
        cout << "\t\t\t\t              Add Stores                " << endl;
        cout << "\t\t\t\t========================================" << endl;
        cout << endl;
        cout << "Enter The Store type : ";
        cin >> ws;
        getline(cin, Sname);
        cout << "Enter the store code : ";
        cin >> ws;
        getline(cin, Sno);
        cout << "Enter Your item 1 : ";
        cin >> ws;
        getline(cin, d1);
        cout << "Enter Your item 1's price : ";
        cin >> ws;
        getline(cin, Pd1);

        cout << "Enter Your item 2 : ";
        cin >> ws;
        getline(cin, d2);
        cout << "Enter Your item 2's price : ";
        cin >> ws;
        getline(cin, Pd2);

        cout << "Enter Your item 3: ";
        cin >> ws;
        getline(cin, d3);
        cout << "Enter Your item 3's price : ";
        cin >> ws;
        getline(cin, Pd3);
        store.push_back(one(Sname, Sno, d1, d2, d3, Pd1, Pd2, Pd3));
        savefile();

        cout << "Your Store saved successfully!! " << endl;
        cout << endl;
        return;

    }

    void viewStores()
    {
        system("cls");
        cout << "\t\t\t\t========================================================" << endl;
        cout << "\t\t\t\t                VIEW ALL STORES                         " << endl;
        cout << "\t\t\t\t========================================================" << endl;
        cout << endl;
        int p = 1;
        if (store.empty())
        {
            cout << "No Stores Yet !! " << endl;
            return;

        }
        else
        {
            for (const auto& i : store)
            {
                cout << p << " Store : " << endl;
                cout << "------------------------------------------------------" << endl;
                cout << "Store name          : " << i.Sname << "         " <<  i.Sno<<  endl;
                cout << "items : " << endl;
                cout << i.d1 << "           ₹" << i.Pd1 << endl;
                cout << i.d2 << "           ₹" << i.Pd2 << endl;
                cout << i.d3 << "           ₹" << i.Pd3 << endl;

                cout << "---------------------------------------------------------" << endl;
                p++;
                
            }
            return;
        }

        }

    void deletefile()
    {
        string storename;
        system("cls");
        cout << "\t\t\t\t========================================================" << endl;
        cout << "\t\t\t\t                DELETE STORES                         " << endl;
        cout << "\t\t\t\t========================================================" << endl;
        cout << endl;

        if (!store.empty())
        {
            cout << "Enter the name of the store you need to delete : ";
            cin.ignore();
            getline(cin, storename);
            for (auto p = store.begin(); p != store.end(); p++)
            {
                if (p->Sname == storename)
                {
                    store.erase(p);
                    savefile();
                    cout << "Your Store is deleted !!" << endl;
                    return;
                }
                else
                {
                    cout << "Your Store not found !!" << endl;
                    return;
                }
            }
        }
        else
        {
            cout << "NO STORES ADDED YET!!" << endl;
            return;
        }
    }

    void updatestore()
    {
        system("cls");
        cout << "\t\t\t\t========================================================" << endl;
        cout << "\t\t\t\t                DELETE STORES                         " << endl;
        cout << "\t\t\t\t========================================================" << endl;
        cout << endl;
        string searchName;
        string Sname, d1, d2, d3, Sno, Pd1, Pd2, Pd3;
        string snams1,dd1,dd2,dd3,pp1,pp2,pp3;
        int n;
        if (!store.empty())
        {
            cout << "Enter the name of your store you need to update : " << endl;
            cin >> ws;
            getline(cin, searchName);
            for (auto& i : store)
            {
                if (i.Sname == searchName)
                {
                    cout << "\t\tjust give a blank space if you don't want to update " << endl << endl;
                    cout << "Enter the new name  : ";
                    cin.ignore();
                    getline(cin, snams1);
                    while (1)
                    {
                        cout << "1) " << i.d1 << endl;
                        cout << "2) " << i.d2 << endl;
                        cout << "3) " << i.d3 << endl;
                        cout << "4) Exit " << endl;
                        cout << "  Enter Your Choice : ";
                        cin >> n;
                        switch (n)
                        {
                        case 1:
                            cout << "Enter new name for " << i.d1 << " : ";
                            cin >> ws;
                            getline(cin, dd1);
                            if (!dd1.empty())
                            {
                                i.d1 = dd1;
                            }
                            cout << "Enter new price to replace " << i.Pd1 << " : ";
                            cin >> ws;
                            getline(cin, pp1);
                            if (!pp1.empty())
                            {
                                i.Pd1 = pp1;
                            }
                            break;

                        case 2:
                            cout << "Enter new name for " << i.d2 << " : ";
                            cin >> ws;
                            getline(cin, dd2);
                            if (!dd2.empty())
                            {
                                i.d2 = dd2;
                            }
                            cout << "Enter new price to replace " << i.Pd2 << " : ";
                            cin >> ws;
                            getline(cin, pp2);
                            if (!pp2.empty())
                            {
                                i.Pd2 = pp2;
                            }
                            break;

                        case 3:
                            cout << "Enter new name for " << i.d3 << " : ";
                            cin >> ws;
                            getline(cin, dd3);
                            if (!dd3.empty())
                            {
                                i.d3 = dd3;
                            }
                            cout << "Enter new price to replace " << i.Pd3 << " : ";
                            cin >> ws;
                            getline(cin, pp3);
                            if (!pp3.empty())
                            {
                                i.Pd3 = pp3;
                            }
                            break;

                        case 4:
                            savefile();

                            return;
                            break;

                        default:
                            cout << "Invalid user input !!" << endl;
                            break;
                        }
                   }
                    

                }
                else
                {
                    cout << "No stores are there with this name!!" << endl;
                }

            }
        }
        else
        {
            cout << "NO STORES ADDED YET!!" << endl;
        }
        
   }

   void billgeneration()
   {
       system("cls");
       string namebyC;
       int choice;
       int quan;
       
       cout << "\t\t\t\t =====================================================" << endl;
       cout << "\t\t\t\t                     WELCOME TO                       " << endl;
       cout << "\t\t\t\t                   CONSUMER PORTAL                    " << endl;
       cout << "\t\t\t\t =====================================================" << endl;
       cout << endl << endl;

       
       if (!store.empty())
       {
           cout << "Enter the Store Name you need to go : " << endl;
           cin >> ws;
           getline(cin, namebyC);
           for (const auto& i : store)
           {
               if (i.Sname.find(namebyC) != string::npos)
               {
                   cout << i.Sname   <<"         " <<  i.Sno<< endl;
                   cout << " ========================================================" << endl;
                   cout << endl;
                   
                   while (1)
                   {
                       cout << "1) " << i.d1 << "               ₹" << i.Pd1 << endl;
                       cout << "2) " << i.d2 << "               ₹" << i.Pd2 << endl;
                       cout << "3) " << i.d3 << "               ₹" << i.Pd3 << endl;
                       cout << "4) to get Bill " << endl;
                       cout << endl;
                       cin >> choice;
                       switch (choice)
                       {
                       case 1:
                           cout << "quantity: ";
                           cin >> quan;
                           i.t1 + quan;
                           cout << "Your item is added !!" << endl;
                           break;

                       case 2: 
                           cout << "quantity: ";
                           cin >> quan;
                           i.t2 + quan;
                           cout << "Your item is added !!" << endl;
                           break;

                       case 3:
                           cout << "quantity: ";
                           cin >> quan;
                           i.t3 + quan;
                           cout << "Your item is added !!" << endl;
                           break;

                       case 4:
                           cout << "\t\t--------------------------------" << endl;
                           cout << "\t\t              BILL              " << endl;
                           cout << "\t\t--------------------------------" << endl;
                           cout << endl;
                           if (i.t1 != 0)
                           {
                               cout << "\t\t" <<  i.d1 << "               ₹" << i.t1 * stoi(i.Pd1) << endl;
                              
                           }
                           if (i.t2 != 0)
                           {
                               cout << "\t\t" << i.d2 << "               ₹" << i.t2 * stoi(i.Pd2) << endl;

                           }
                           if (i.t3 != 0)
                           {
                               cout << "\t\t" << i.d3 << "               ₹" << i.t3 * stoi(i.Pd3) << endl;

                           }
                           cout << "\t\t thank you" << endl;
                           break;
                           
                       default:
                           cout << "Invalid input !!" << endl;
                           break;


                       }
                   }

                   
                   
               }
               else {
                   cout << "No Store found in the name!!" << endl;
                   return;
               }
           }

       }
       else
       {
           cout << "No Stores added yet!! " << endl;
           cout << endl << endl;
           return;
       }
   }

   
};


int main()
{
    string user = "user";
    int pass = 1234;
    string Uuser;
    int Ppass,choice;
    int choice2;
    two t;
    cout << "\t\t\t\t====================================================" << endl;
    cout << "\t\t\t\t                  Mall Management " << endl;
    cout << "\t\t\t\t                       System" << endl;
    cout << endl;
    t.loadfile();
    while (1)
    {
        g1:
        cout << "1) Admin" << endl;
        cout << "2) Consumer" << endl;
        cout << "3) Exit" << endl;
        cout << "4) Enter Your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter Your password : ";
            cin >> Ppass;
            if (Ppass == pass)
            {while (1)
                {
                cout << "Admin Control : " << endl;
                cout << "-----------------------------------" << endl;
                cout << endl;
                cout << "1) Add store \n";
                cout << "2) View all stores \n";
                cout << "3) Update store \n";
                cout << "4) Delete store \n";
                cout << "5) exit\n";
                cin >> choice2;
                
                    switch (choice2)
                    {
                    case 1:
                        t.addstore();
                        break;

                    case 2:
                        t.viewStores();
                        break;

                    case 3:
                        t.updatestore();
                        break;

                    case 4:
                        t.deletefile();
                        break;

                    case 5:
                        goto g1;
                        break;

                    default:
                        cout << "invalid input" << endl;
                        break;
                }

                }
                

            }
            else
            {
                cout << "wrong password :" << endl;
            }
        }
            break;
        case 2:
            t.billgeneration();
            break;
        case 3:
            cout << "\t\t\t\t===========================" << endl;
            cout << "\t\t\t\t        THANK YOU          " << endl;
            cout << "\t\t\t\t===========================" << endl;
            exit(0);
            break;
        default:
            cout << "Invalid input !!" << endl;
        }
    }
}