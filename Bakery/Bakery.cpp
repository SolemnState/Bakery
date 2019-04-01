#include "stdafx.h"
#include "Bakery.h"
#include "Builder.h"


using namespace std;

Bakery::Bakery()
{}


Bakery::~Bakery()
{}

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

void Bakery::writeJson()
{
	if (!productList.empty())
	{
		ifstream file;
		file.open("Log.json");
		json list = json::array();
		file.seekg(0,ios::end);
		if (int(file.tellg()) != 0)
		{
			file.seekg(0, ios::beg);
			json temp = json::array();
			file>>temp;
			for (auto& element : temp)
			{
				list.push_back(element);
			}
		}
		file.close();
		ofstream newFile("Log.json", ios::out | ios::trunc);
			for (auto P : productList)
				list.push_back(P->getJson());
		
		newFile << setw(2) << list;
		productList.erase(productList.begin(), productList.end());
		newFile.close();
	}
	else cout << "Can't write info. Bake something first!" << endl;
	
}

void Bakery::readJson()
{
	ifstream file;
	file.exceptions(ifstream::failbit);
	try
	{
		file.open("Log.json");
		file.seekg(0, ios::end);
		if (int(file.tellg()) != 0)
		{
			file.seekg(0, ios::beg);
			json j;
			file >> j;
			for (auto& prod : j)
				productList.push_back(createProduct(prod));
			this->printProductList();
			productList.erase(productList.begin(), productList.end());
		}
		else cout << "Nothing here!" << endl;
		file.close();
	}
	catch (const ifstream::failure& exc)
	{
		cout << "ERror while opening file: Cant read Log file" << endl;
	}
}

Product* Bakery::createProduct(json js)
{
	Product* P = new Product;
	vector<string> list;
	for (auto element : js.items())
		list.push_back(element.value());
	P->setFields(list);
	return P;
}
