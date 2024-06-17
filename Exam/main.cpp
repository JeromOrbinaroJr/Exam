#include <iostream>
#include "Toy.h"
#include "Constructor.h"
#include "ToyInfo.h"
#include "AverageCost.h"

int main() {
	AgeLimits limitsFirst(8, 16);
	Toy toyFirst("Firm1", 150, limitsFirst);

	//#1
	AgeLimits limitsExample(8, 16);
	toyFirst.findFirmCostByAgeLimits(limitsExample);

	//#2
	Constructor constructorFirst(toyFirst, "Constru", 50);
	//constructorFirst.findNumberOfPartsCostByTitle("Constru");

	ToyInfo toyInfoFirst(toyFirst, "Costruct", "Lego", "Plastic");

	//#3
	/*toyFirst.printInfo();
	std::cout << std::endl;
	constructorFirst.printInfo();
	std::cout << std::endl;
	toyInfoFirst.printInfo();*/

	//#4
	/*int costToy = toyFirst.getCost();
	std::cout << toyInfoFirst;

	constructorFirst + costToy;
	std::cout << constructorFirst.getNumberOfParts();*/

	/*std::string allFields;
	constructorFirst += allFields;
	std::cout << allFields << std::endl;*/

	//#5
	/*AverageCost averageCost;
	std::vector<int>costINT = { 10, 30, 160, 20 };
	std::vector<double>costDOUBLE = { 10.2, 50.4, 150.18, 280.6 };
	std::cout << averageCost.average(costINT) << std::endl;
	std::cout << averageCost.average(costDOUBLE) << std::endl;*/

	//#6
	//toyFirst.saveToyToFile(toyFirst, "ToyDataBase.txt");

	return 0;
}