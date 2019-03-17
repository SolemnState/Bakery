#pragma once
#include "Builder.h"

class BaguetteBuilder :
	public Builder
{
public:
	BaguetteBuilder();
	~BaguetteBuilder();
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

