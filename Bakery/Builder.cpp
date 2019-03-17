#include "stdafx.h"
#include "Builder.h"


void Builder::formList()
{
	product->makeIngridientsList();
}

Builder::Builder()
{
	product = new Product;
}


Builder::~Builder()
{
	delete product;
}

Product* Builder::getProduct()
{
	return product;
}
