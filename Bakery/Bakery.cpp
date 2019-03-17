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

void Bakery::setProductBuilder(Builder * b)
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
