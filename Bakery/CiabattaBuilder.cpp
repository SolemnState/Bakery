#include "stdafx.h"
#include "CiabattaBuilder.h"


CiabattaBuilder::CiabattaBuilder()
{}


CiabattaBuilder::~CiabattaBuilder()
{}

void CiabattaBuilder::buildName()
{
	product->setName("Ciabatta");
}

void CiabattaBuilder::buildRyeFlour()
{
	product->setRyeFlour("-");
}

void CiabattaBuilder::buildWheatFlour()
{
	product->setWheatFlour("500");
}

void CiabattaBuilder::buildEggs()
{
	product->setEggs("1");
}

void CiabattaBuilder::buildMilk()
{
	product->setMilk("76");
}

void CiabattaBuilder::buildCream()
{
	product->setCream("-");
}

void CiabattaBuilder::buildCustard()
{
	product->setCustard("-");
}

void CiabattaBuilder::buildSourCream()
{
	product->setSourCream("-");
}

void CiabattaBuilder::buildWater()
{
	product->setWater("100");
}
