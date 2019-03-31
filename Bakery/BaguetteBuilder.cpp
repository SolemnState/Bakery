#include "stdafx.h"
#include "BaguetteBuilder.h"


BaguetteBuilder::BaguetteBuilder()
{}


BaguetteBuilder::~BaguetteBuilder()
{}

void BaguetteBuilder::buildName()
{
	product->setName("Baguette");
}

void BaguetteBuilder::buildRyeFlour()
{
	product->setRyeFlour("-");
}

void BaguetteBuilder::buildWheatFlour()
{
	product->setWheatFlour("300");
}

void BaguetteBuilder::buildEggs()
{
	product->setEggs("1");
}

void BaguetteBuilder::buildMilk()
{
	product->setMilk("-");
}

void BaguetteBuilder::buildCream()
{
	product->setCream("-");
}

void BaguetteBuilder::buildCustard()
{
	product->setCustard("-");
}

void BaguetteBuilder::buildSourCream()
{
	product->setSourCream("-");
}

void BaguetteBuilder::buildWater()
{
	product->setWater("300");
}
