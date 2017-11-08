/***---------------------------------------------------------
Assignment -I - Introduction to Object Oriented Methodology
Name :- Anish Kelkar 
Roll No:- BT15CSE040
Date of Submission - August 11th , 2017
---------------------------------------------------------***/

#include "base.h"

 double roi =0.1;
 long penalty_fee =1000;
 long min_balance = 5000;

int main()
{
	// Account a("a","sdsd",323);
	// Saving_Account b("b","sdasdaf",3480);
	// Current_Account c("csd","xfd",9743);
	// a.show();
	// b.show();
	// c.show();

	//vector<Customer>customers(3);
	vector<Saving_Account>sa;
	vector<Current_Account>ca;
	for(int i=0;i<1;i++)
	{
		cout<<"Enter the customer name"<<endl;
		string name;
		getline(cin,name);
		cout<<"Enter the account number"<<endl;
		string ac_num;
		cin >> ac_num;
		cout<< " Enter the value to be deposited in the Saving's Account"<<endl;
		long balance;
		cin >> balance;
		// Saving_Account temps(name,ac_num,balance,roi);
		// sa[i]=temps;
		Saving_Account temps(name,ac_num,balance,roi);
		sa.push_back(Saving_Account(name,ac_num,balance,roi));
		cout<<"Enter the account number"<<endl;
		//string ac_num;
		cin >> ac_num;
		cout<< " Enter the value to be deposited in the Current_Account"<<endl;
		//long balance;
		cin >> balance;
		//Current_Account temps(name,ac_num,balance,roi);
		ca.push_back(Current_Account(name,ac_num,balance,min_balance,penalty_fee));
		// Current_Account tempc(name,ac_num,balance,roi);
		// ca[i]=tempc;
	}
	while(1)
	{
		cout<<"Select the customer (0-2)"<<endl;cin.ignore();
		int customer_id;
		cin>>customer_id;	
		if(customer_id<=2 && customer_id>=0)
		{
			cout << "to select saving's account press 1 else press 2"<<endl;
			int ac_flag;
			cin >> ac_flag;
			cout<<"PRESS x for the following \n\  
				    1. To display the content \n\
				    2. To deposit money \n\
				    3. To withdraw money\n";
			if(ac_flag==1)
			{
				cout<< "4.To display the interest \n ";
			}
			else
			{
				cout<< "4.To display the total penalty faced \n ";
			}
			int type;
			cin>> type;
			switch(type)
			{
				case 1:
					if(ac_flag==1)
					{
						sa[customer_id].show();
					}
					else
					{
						ca[customer_id].show();
					}
					break;
				case 2:
					cout<<"Enter the amount to be deposited"<<endl;
					long dm;
					cin >> dm;
					if(ac_flag==1)
					{
						sa[customer_id].depositMoney(dm);
					}
					else
					{
						ca[customer_id].depositMoney(dm);
					}
					break;
				case 3:
					cout<<"Enter the amount to be withdrawn"<<endl;
					//long dm;
					cin >> dm;
					if(ac_flag==1)
					{
						sa[customer_id].withdrawMoney(dm);
					}
					else
					{
						ca[customer_id].withdrawMoney(dm);
					}
					break;
				case 4:
					if(ac_flag==1)
					{
						sa[customer_id].showInterest();
					}
					else
					{
						ca[customer_id].showTotalPenalty();
					}
			}

		}
		else
		{
			break;
		}
	}


	
	return 0;
}