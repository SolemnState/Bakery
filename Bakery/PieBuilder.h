#pragma once
#include "Builder.h"
class PieBuilder :
	public Builder
{
public:
	PieBuilder();
	~PieBuilder();
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

