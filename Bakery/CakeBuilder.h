#pragma once
#include "Builder.h"
class CakeBuilder :
	public Builder
{
public:
	CakeBuilder();
	~CakeBuilder();
	void buildName() override;
	void buildRyeFlour() override;
	void buildWheatFlour() override;
	void buildEggs() override;
	void buildMilk() override;
	void buildCream() override;
	void buildCustard() override;
	void buildSourCream() override;
	void buildWater() override;
};

