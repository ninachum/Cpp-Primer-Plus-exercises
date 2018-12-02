#pragma once
#include <iostream>

class Stock
{
private :
	static const int MONTHS = 12;
	char * company;
	int len;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public :
	Stock(); // default constructor
	Stock(const char * co, long n, double pr = 0.0);
	Stock(const Stock & s);
	~Stock(); // destructor
	Stock & operator=(const Stock &s);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	const Stock & topval(const Stock & s) const;
	friend std::ostream & operator<<(std::ostream & os, const Stock & s);
};