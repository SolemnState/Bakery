#include "stdafx.h"
#include "Product.h"

using namespace std;

Product::Product()
{
	 name="";
	 ryeFlour = ""; // ������ ����
	 wheatFlour = ""; // ��������� ����
	 eggs = "";
	 milk = "";
	 cream = ""; // ������
	 custard = ""; // ����
	 sourCream = ""; // �������
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
	ingridientsList = "�������� �������: " + name + '\n' + "��������� ����: " + ryeFlour + " ��. \n"
		+ "������ ����: " + wheatFlour + " ��. \n" + "����: " + eggs + " ��. \n" + "������: "
		+ milk + " ��. \n" + "������: " + cream + " ��. \n" + "����: " + custard + " ��. \n"
		+ "�������: " + sourCream + " ��. \n" + "����: " + water + " ��. \n";
}

void Product::printList()
{
	cout << ingridientsList << endl;
}
