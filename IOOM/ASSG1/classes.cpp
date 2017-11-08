#include "base.h"

//-----------------------------------------BASE ACCOUNT FUNCTIONS---------------------------------------------------------------------/
Account :: Account(string cn, string an, long ab)
{
	customer_name=cn;
	account_number = an;
	account_balance = ab;
	account_type = "default";
}

Account :: Account(string cn, string an)
{
	customer_name=cn;
	account_number = an;
	account_balance = 0;
	account_type = "default";
}

Account :: Account(const Account& a)
{
	customer_name=a.customer_name;
	account_number = a.account_number;
	account_balance = a.account_balance;
	account_type = "default";
}

Account:: ~Account()
{
	// nothing	
}

// void Account::show()
// {
// 	cout<<"Customer Name is\t"<<customer_name<<endl;
// 	cout<<"Account Number is\t"<<account_number<<endl;
// 	cout<<"Account Balance is\t"<<account_balance<<endl;
// 	cout<<"Account Type is\t"<<account_type<<endl<<endl;
// }
	
//-----------------------------------------CURRENT ACCOUNT FUNCTIONS---------------------------------------------------------------------/
// Current_Account::Current_Account()
// {

// }

Current_Account :: Current_Account(string cn, string an , long ab,long mb,long pf) : Account(cn,an,ab)
{
	account_type = "Current_Account";
	minimum_balance=mb;
	penalty_fees=pf;
	total_penalty=0;
}

Current_Account :: Current_Account(string cn, string an) : Account(cn,an)
{
	account_type = "Current_Account";
	minimum_balance=0;
	penalty_fees=0;
	total_penalty=0;
}

Current_Account :: Current_Account(const Current_Account& a):Account(a)
{
	account_type = "Current_Account";
	minimum_balance=a.minimum_balance;
	penalty_fees=a.penalty_fees;
	total_penalty=a.total_penalty;
}

Current_Account:: ~Current_Account()
{
	// nothing	
}

void Current_Account :: withdrawMoney(long wd)
{
	if(account_balance-wd>=minimum_balance)
	{
			account_balance-=wd;
	}
	else
	{
		account_balance-=wd+penalty_fees;
		total_penalty+=penalty_fees;
		if(account_balance<0)
		{
			account_balance=0;
		}
	}
}

void Current_Account::depositMoney(long dm)
{
	account_balance+=dm;
}

void Current_Account::show()
{
	cout<<"Customer Name is\t"<<customer_name<<endl;
	cout<<"Account Number is\t"<<account_number<<endl;
	cout<<"Account Balance is\t"<<account_balance<<endl;
	cout<<"Account Type is\t"<<account_type<<endl<<endl;
	cout<<"Show total penalty\t"<<total_penalty<<endl;
}

void Current_Account :: showTotalPenalty()
{
	cout<<"Show total penalty\t"<<total_penalty<<endl;
}


//-----------------------------------------SAVINGS ACCOUNT FUNCTIONS---------------------------------------------------------------------/
// Saving_Account::Saving_Account()
// {

// }

Saving_Account :: Saving_Account(string cn, string an , long ab,double roi) : Account(cn,an,ab)
{
	account_type = "Saving_Account";
	rate_of_interest=roi;
	//account_balance=ab;
	interest_earned=0;//account_balance*rate_of_interest;
}

Saving_Account :: Saving_Account(string cn, string an) : Account(cn,an)
{
	rate_of_interest=0.1;
	account_balance=0;
	account_type = "Saving_Account";
	interest_earned=account_balance*rate_of_interest;
}

Saving_Account :: Saving_Account(const Saving_Account& a): Account(a)
{
	account_type = "Saving_Account";
	rate_of_interest=a.rate_of_interest;
	//interest_earned=a.interest_earned;
}

Saving_Account:: ~Saving_Account()
{
	// nothing	
}

void Saving_Account :: depositMoney (long dm)
{
	account_balance+=dm;
	cout<<dm<<endl;
	cout<<dm*rate_of_interest<<endl;
	interest_earned+=static_cast<long>(rate_of_interest*dm);
	account_balance+=interest_earned;
	cout<<interest_earned<<endl;
}

void Saving_Account :: withdrawMoney(long wv)
{
	//int ret=1;
	account_balance-=wv;
	if(account_balance<0)
	{
		account_balance=0;
	}
}

void Saving_Account :: showInterest()
{
	cout << " The interest earned is equal to "<< interest_earned<< endl;
}

void Saving_Account::show()
{
	cout<<"Customer Name is\t"<<customer_name<<endl;
	cout<<"Account Number is\t"<<account_number<<endl;
	cout<<"Account Balance is\t"<<account_balance<<endl;
	cout<<"Account Type is\t"<<account_type<<endl<<endl;
	cout<<"Show total interest\t"<<interest_earned<<endl;
	cout<<"Rate of Interest\t"<<rate_of_interest<<endl;
}


///----------------------------------------------------------------------------------
// Customer::Customer(string name)
// {
// 	C(name,"");
// 	S(name,"");
// }
