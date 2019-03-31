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
	ofstream file("Log.json",ios::app);
	for (auto P : productList)
	{
		file << P->getJson() << endl;
	}
	file << " ";
	productList.erase(productList.begin(), productList.end());
	file.close();
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
			while (!file.eof())
			{
				string buf;
				getline(file, buf);
				if (buf != " ")
				{
					json js = json::parse(buf);
					productList.push_back(createProduct(js));
				}
			}
			this->printProductList();
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
