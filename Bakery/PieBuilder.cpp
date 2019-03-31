#include "stdafx.h"
#include "PieBuilder.h"


PieBuilder::PieBuilder()
{}


PieBuilder::~PieBuilder()
{}

void PieBuilder::buildName()
{
	product->setName("Pie");
}

void PieBuilder::buildRyeFlour()
{
	product->setRyeFlour("-");
}

void PieBuilder::buildWheatFlour()
{
	product->setWheatFlour("500");
}

void PieBuilder::buildEggs()
{
	product->setEggs("1");
}

void PieBuilder::buildMilk()
{
	product->setMilk("100");
}

void PieBuilder::buildCream()
{
	product->setCream("-");
}

void PieBuilder::buildCustard()
{
	product->setCustard("-");
}

void PieBuilder::buildSourCream()
{
	product->setSourCream("100");
}

void PieBuilder::buildWater()
{
	product->setWater("200");
}
