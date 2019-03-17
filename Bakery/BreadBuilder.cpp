#include "stdafx.h"
#include "BreadBuilder.h"


BreadBuilder::BreadBuilder()
{
}


BreadBuilder::~BreadBuilder()
{
}

void BreadBuilder::buildRyeFlour()
{
	product->setRyeFlour("400");
}

void BreadBuilder::buildWheatFlour()
{
	product->setWheatFlour("-");
}

void BreadBuilder::buildEggs()
{
	product->setEggs("4");
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
