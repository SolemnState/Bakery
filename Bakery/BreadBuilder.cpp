#include "stdafx.h"
#include "BreadBuilder.h"


BreadBuilder::BreadBuilder()
{
}


BreadBuilder::~BreadBuilder()
{
}

void BreadBuilder::buildName()
{
	product->setName("Bread");
}

void BreadBuilder::buildRyeFlour()
{
	product->setRyeFlour("-");
}

void BreadBuilder::buildWheatFlour()
{
	product->setWheatFlour("400");
}

void BreadBuilder::buildEggs()
{
	product->setEggs("-");
}

void BreadBuilder::buildMilk()
{
	product->setMilk("200");
}

void BreadBuilder::buildCream()
{
	product->setCream("-");
}

void BreadBuilder::buildCustard()
{
	product->setCustard("-");
}

void BreadBuilder::buildSourCream()
{
	product->setSourCream("-");
}

void BreadBuilder::buildWater()
{
	product->setWater("200");
}
