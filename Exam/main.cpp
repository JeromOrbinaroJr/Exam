#include <iostream>
#include "Toy.h"
#include "Constructor.h"
#include "ToyInfo.h"
#include "AverageCost.h"

int main() {
	try {
		AgeLimits limitsFirst(8, 16);
		Toy toyFirst("Firm1", 150, limitsFirst);

		//#1
		std::cout << "(1)Find Firm and Cost by Age Limits kid: " << std::endl;
		toyFirst.findFirmCostByAgeLimits(limitsFirst);

		//#2
		std::cout << "(2)Find Number Of Parts and Cost by Title: " << std::endl;
		Constructor constructorFirst(toyFirst, "Constru", 50);
		constructorFirst.findNumberOfPartsCostByTitle("Constru");

		ToyInfo toyInfoFirst(toyFirst, "Costruct", "Lego", "Plastic");
		//#3
		std::cout << "(3)Print All information: " << std::endl;
		toyFirst.printInfo();
		std::cout << std::endl;
		constructorFirst.printInfo();
		std::cout << std::endl;
		toyInfoFirst.printInfo();

		//#4
		std::cout << "(4)Overloading operators: " << std::endl;
		int costToy = toyFirst.getCost();
		std::cout << toyInfoFirst << std::endl;

		constructorFirst + costToy;
		std::cout << constructorFirst.getNumberOfParts() << std::endl;

		std::string allFields;
		constructorFirst += allFields;
		std::cout << allFields << std::endl;

		//#5
		std::cout << "(5)Average cost:" << std::endl;
		Costs averageCost;
		std::vector<int>costINT = { 10, 30, 160, 20 };
		std::vector<double>costDOUBLE = { 10.2, 50.4, 150.18, 280.6 };
		std::cout << averageCost.average(costINT) << std::endl;
		std::cout << averageCost.average(costDOUBLE) << std::endl;

		//#6	
		std::cout << "(6)Save to file:" << std::endl;
		toyFirst.saveToyToFile(toyFirst, "ToyDataBase.txt");
	}
	catch (const std::exception& ex) {
		std::cout << "Error: " << ex.what() << std::endl;
	}

	return 0;
}