#pragma once
#include "Builder.h"
class BreadBuilder :
	public Builder
{
public:
	BreadBuilder();
	~BreadBuilder();
	void buildRyeFlour() override;
	void buildWheatFlour() override;
	void buildEggs() override;
	void buildMilk() override;
	void buildCream() override;
	void buildCustard() override;
	void buildSourCream() override;
	void buildWater() override;
};

