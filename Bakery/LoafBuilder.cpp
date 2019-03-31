#include "stdafx.h"
#include "LoafBuilder.h"


LoafBuilder::LoafBuilder()
{}


LoafBuilder::~LoafBuilder()
{}

void LoafBuilder::buildName()
{
	product->setName("Loaf");
}

void LoafBuilder::buildRyeFlour()
{
	product->setRyeFlour("100");
}

void LoafBuilder::buildWheatFlour()
{
	product->setWheatFlour("600");
}

void LoafBuilder::buildEggs()
{
	product->setEggs("10");
}

void LoafBuilder::buildMilk()
{
	product->setMilk("200");
}

void LoafBuilder::buildCream()
{
	product->setCream("100");
}

void LoafBuilder::buildCustard()
{
	product->setCustard("-");
}

void LoafBuilder::buildSourCream()
{
	product->setSourCream("0");
}

void LoafBuilder::buildWater()
{
	product->setWater("200");
}
