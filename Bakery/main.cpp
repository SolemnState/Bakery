#include "stdafx.h"
#include "Bakery.h"
#include "Product.h"
#include "Builder.h"
#include "BreadBuilder.h"
using namespace std;


int main()
{
	Bakery B;
	BreadBuilder* BB;
	BB = new BreadBuilder;
	B.setProductBuilder(BB);
	B.bakeProduct();
	B.getNewProduct();
	B.printProductList();

    return 0;
}

