#include "stdafx.h"
#include "Product.h"

using namespace std;

Product::Product()
{
	 name="";
	 ryeFlour = "";
	 wheatFlour = "";
	 eggs = "";
	 milk = "";
	 cream = "";
	 custard = "";
	 sourCream = "";
	 water = "";
	 ingridientsList = "";
	 ingridients = {
		 { "name","-" },
	 { "ryeFlour", "-" },
	 { "wheatFlour", "-" },
	 { "eggs", "-" },
	 { "milk", "-" },
	 { "cream", "-" },
	 { "custard", "-" },
	 { "sourCream", "-" },
	 { "water","-" }
	 }; 
}


Product::~Product()
{
}

void Product::setName(string n)
{
	name = n;
}

void Product::setRyeFlour(string RF)
{
	ryeFlour = RF;
}

void Product::setWheatFlour(string WF)
{
	wheatFlour = WF;
}

void Product::setEggs(string E)
{
	eggs = E;
}

void Product::setMilk(string M)
{
	milk = M;
}

void Product::setCream(string Cr)
{
	cream = Cr;
}

void Product::setCustard(string Cu)
{
	custard = Cu;
}

void Product::setSourCream(string SC)
{
	sourCream = SC;
}

void Product::setWater(string W)
{
	water = W;
}

void Product::makeIngridientsList()
{
	ingridientsList = "Name of the product: " + name + '\n' + "Wheat Flour: " + wheatFlour + " g. \n" +
		"Rye Flour: " + ryeFlour + " g. \n" + "Eggs: " + eggs + "  \n" + "Milk: "
		+ milk + " ml. \n" + "Cream: " + cream + "ml. \n" + "Custard: " + custard + " ml. \n"
		+ "Sour Cream: " + sourCream + " ml. \n" + "Water: " + water + " ml. \n";
}

void Product::printList()
{
	cout << ingridientsList <<"-----------------------------------------------------"<< endl;
}

void Product::makeJson()
{
	ingridients["name"] = name;
	ingridients["ryeFlour"] = ryeFlour;
	ingridients["wheatFlour"] = wheatFlour;
	ingridients["eggs"] = eggs;
	ingridients["milk"] = milk;
	ingridients["cream"] = cream;
	ingridients["custard"] = custard;
	ingridients["sourCream"] = sourCream;
	ingridients["water"] = water;
}

void Product::setFields(vector<string> v)
{
	cream = v.at(0);
	custard = v.at(1);
	eggs = v.at(2);
	milk = v.at(3);
	name = v.at(4);
	ryeFlour = v.at(5);
	sourCream = v.at(6);
	water = v.at(7);
	wheatFlour = v.at(8);
	this->makeIngridientsList();
	this->makeJson();
}

json Product::getJson()
{
	return ingridients;
}


string Product::getList()
{
	return ingridientsList;
}
