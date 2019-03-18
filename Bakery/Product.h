#pragma once
#include "stdafx.h"

using namespace std;

class Product
{
	string name;
	string ryeFlour; 
	string wheatFlour; 
	string eggs;
	string milk;
	string cream; 
	string custard; 
	string sourCream; 
	string water;
	string ingridientsList;
public:
	Product();
	~Product();
	
	void setName(string n);
	void setRyeFlour(string RF);
	void setWheatFlour(string WF);
	void setEggs(string E);
	void setMilk(string M);
	void setCream(string Cr);
	void setCustard(string Cu);
	void setSourCream(string SC);
	void setWater(string W);
	void makeIngridientsList();
	void printList();
	string getList();
	
};

