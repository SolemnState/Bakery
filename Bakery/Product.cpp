#include "stdafx.h"
#include "Product.h"

using namespace std;

Product::Product()
{
	 name="";
	 ryeFlour = ""; // ржаная мука
	 wheatFlour = ""; // пшеничная мука
	 eggs = "";
	 milk = "";
	 cream = ""; // сливки
	 custard = ""; // крем
	 sourCream = ""; // сметана
	 water = "";
	 ingridientsList = "";
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
	ingridientsList = "Название изделия: " + name + '\n' + "Пшеничная мука: " + ryeFlour + " гр. \n"
		+ "Ржаная мука: " + wheatFlour + " гр. \n" + "Яица: " + eggs + " шт. \n" + "Молоко: "
		+ milk + " мл. \n" + "Сливки: " + cream + " мл. \n" + "Крем: " + custard + " мл. \n"
		+ "Сметана: " + sourCream + " мл. \n" + "Вода: " + water + " мл. \n";
}

void Product::printList()
{
	cout << ingridientsList << endl;
}
