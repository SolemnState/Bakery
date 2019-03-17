#include "stdafx.h"
#include "Bakery.h"
#include "Product.h"
#include "Builder.h"
#include "BreadBuilder.h"
#include "BaguetteBuilder.h"
#include "CiabattaBuilder.h"
#include "CakeBuilder.h"
#include "PieBuilder.h"
#include "LoafBuilder.h"
using namespace std;

void printMenu();

int main()
{
	Bakery B;
	BreadBuilder breadB;
	BaguetteBuilder baguetteB;
	CiabattaBuilder ciabattaB;
	PieBuilder pieB;
	CakeBuilder cakeB;
	LoafBuilder loafB;
	printMenu();
	while (true)
	{
		switch (getchar())
		{
		case '1':
			B.setProductBuilder(&breadB);
			B.bakeProduct();
			B.getNewProduct();
			break;

		case '2':
			B.setProductBuilder(&baguetteB);
			B.bakeProduct();
			B.getNewProduct();
			break;
		case '3':
			B.setProductBuilder(&ciabattaB);
			B.bakeProduct();
			B.getNewProduct();
			break;

		case '4':
			B.setProductBuilder(&pieB);
			B.bakeProduct();
			B.getNewProduct();
			break;
		case '5':
			B.setProductBuilder(&cakeB);
			B.bakeProduct();
			B.getNewProduct();
			break;
		case '6':
			B.setProductBuilder(&loafB);
			B.bakeProduct();
			B.getNewProduct();
			break;
		case '7':
			B.writeLog();
			break;
		case '8':
			B.readLog();
			break;
		case '9':
			cout << "Esc" << endl;
			exit(EXIT_SUCCESS);
			break;
		case '0':
			printMenu();
			break;
		}
	}


    return 0;
}

void printMenu()
{
	cout << "Welcome to Bakery! What would you like to do?" << endl << "1. Bake bread" << endl
		<< "2. Bake baguette" << endl << "4. Bake ciabatta" << endl << "5. Bake pie" << endl
		<< "6. Bake cake" << endl << "7. Save all of the products" << endl
		<< "8. See all history" << endl << "9. Exit" << endl<<"0. Show menu"<<endl;
}