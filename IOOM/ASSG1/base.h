#ifndef BASE_H
#define BASE_H

#include <bits/stdc++.h>
using namespace std;
class Account
{
	public:
		Account(string ,string ,long);
		Account(string ,string);
		Account(const Account&);
		~Account();
		//void show();
		//void update(double);

	protected:
		string customer_name;
		string account_number;
		long account_balance;
		string account_type;
};	

class Current_Account : public Account
{
	public:
		Current_Account(string ,string ,long,long,long);
		Current_Account(string ,string);
		Current_Account(const Current_Account&);
		~Current_Account();
		void depositMoney(long);
		void withdrawMoney(long);
		void showTotalPenalty();
		void show();
		// overridde show function
	private:
		long minimum_balance;
		long penalty_fees;
		long total_penalty;
};			

class Saving_Account : public Account
{
	public:
		Saving_Account(string , string, long,double);
		Saving_Account(string , string);
		Saving_Account(const Saving_Account&);
		~Saving_Account();	
		void depositMoney(long);
		void withdrawMoney(long);
		void showInterest();
		void show();
		// overridde show function
	private:
		double rate_of_interest;	
		long interest_earned;
};

// class Customer
// {
// 	public:
// 		Current_Account C;
// 		Saving_Account S;
// };
#endif