#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

struct AgeLimits {
	int m_startLimitAge;
	int m_endLimitAge;

	AgeLimits() = default;
	AgeLimits(int startLimitAge, int endLimitAge);
};

class Toy {
public:
	//Constructors
	Toy();
	Toy(const std::string& firm, const int cost, AgeLimits ageLimitsKids);
	Toy(const Toy& other);

	//Destructor
	virtual ~Toy() = default;

	//Getters
	const std::string& getFirm() const;
	const int getCost() const;
	const AgeLimits& getAgeLimitsKids() const;

	//Setters
	void setFirm(const std::string& firm);
	void setCost(const int cost);
	void setAgeLimitsKids(const AgeLimits& ageLimitsKids);

	//Methods
	void findFirmCostByAgeLimits(AgeLimits ageLimits);

	virtual void printInfo();

	void saveToyToFile(const Toy& toy, const std::string& filename);

	//Operator Overloading 
	friend std::ostream& operator<<(std::ostream& os, const Toy& toy);

protected:
	std::string m_firm;
	int m_cost;
	AgeLimits m_ageLimitsKids;
};