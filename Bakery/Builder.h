#pragma once
#include "stdafx.h"
#include "Product.h"
using namespace std;

class Builder
{
protected:
	Product* product;
public:
	Product* getProduct();
	virtual void buildName()=0;
	virtual void buildRyeFlour()=0;
	virtual void buildWheatFlour()=0;
	virtual void buildEggs()=0;
	virtual void buildMilk()=0;
	virtual void buildCream()=0;
	virtual void buildCustard()=0;
	virtual void buildSourCream()=0;
	virtual void buildWater()=0;
	void formList();
	Builder();
	virtual ~Builder();
};

