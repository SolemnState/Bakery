#include "stdafx.h"
#include "CakeBuilder.h"


CakeBuilder::CakeBuilder()
{}


CakeBuilder::~CakeBuilder()
{}

void CakeBuilder::buildName()
{
	product->setName("Cake");
}

void CakeBuilder::buildRyeFlour()
{
	product->setRyeFlour("-");
}

void CakeBuilder::buildWheatFlour()
{
	product->setWheatFlour("200");
}

void CakeBuilder::buildEggs()
{
	product->setEggs("4");
}

void CakeBuilder::buildMilk()
{
	product->setMilk("100");
}

void CakeBuilder::buildCream()
{
	product->setCream("100");
}

void CakeBuilder::buildCustard()
{
	product->setCustard("200");
}

void CakeBuilder::buildSourCream()
{
	product->setSourCream("100");
}

void CakeBuilder::buildWater()
{
	product->setWater("-");
}
