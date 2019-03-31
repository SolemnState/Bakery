#pragma once
#include "stdafx.h"
#include "Builder.h"
#include "Product.h"

class Bakery
{
private:
	Builder * builder;
	std::vector<Product*> productList;
public:
	Bakery();
	~Bakery();
	void bakeProduct();
	void setProductBuilder(Builder* b);
	void getNewProduct();
	void printProductList();
	void writeJson();
	void readJson();
	Product* createProduct(json js);
};

