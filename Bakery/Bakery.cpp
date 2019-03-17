#include "stdafx.h"
#include "Bakery.h"
#include "Builder.h"


using namespace std;

Bakery::Bakery()
{
	
}


Bakery::~Bakery()
{
}

void Bakery::bakeProduct()
{
	builder->buildName();
	builder->buildRyeFlour();
	builder->buildWheatFlour();
	builder->buildEggs();
	builder->buildMilk();
	builder->buildCream();
	builder->buildCustard();
	builder->buildSourCream();
	builder->buildWater();
	builder->formList();
}

void Bakery::setProductBuilder(Builder* b)
{
	builder = b;
}

void Bakery::getNewProduct()
{
	productList.push_back(builder->getProduct());
}

void Bakery::printProductList()
{
	for ( auto P : productList)
	{
		P->printList();
	}
}

void Bakery::writeLog()
{
	ofstream file("Log.txt", ios::app);
	for (auto P : productList)
		file <<endl<< P->getList()<<"-----------------------------------------------------";
	productList.erase(productList.begin(), productList.end());
	file.close();
}

void Bakery::readLog()
{
	ifstream fileR;
	fileR.exceptions(ifstream::failbit);
	try
	{
		fileR.open("Log.txt");
		while (!fileR.eof())
		{
			string buf;
			getline(fileR, buf);
			cout << buf << endl;
		}
		fileR.close();
	}
	catch (const ifstream::failure& exc)
	{
		cout << "ERror while opening file: Cant read Log file" << endl;
	}
}
