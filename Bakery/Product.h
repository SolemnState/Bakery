#pragma once
#include "stdafx.h"

using namespace std;

class Product
{
	string name;
	string ryeFlour; // ржаная мука
	string wheatFlour; // пшеничная мука
	string eggs;
	string milk;
	string cream; // сливки
	string custard; // крем
	string sourCream; // сметана
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
	void build();
	void makeIngridientsList();
	void printList();
	string getList();
	
};

