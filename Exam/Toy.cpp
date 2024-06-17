#include "Toy.h"

//Constructors

AgeLimits::AgeLimits(int startLimitAge, int endLimitAge) :
	m_startLimitAge(startLimitAge), m_endLimitAge(endLimitAge) {}

Toy::Toy() :
	m_firm(""), m_cost(0), m_ageLimitsKids(0, 0) {}

Toy::Toy(const std::string& firm, const int cost, AgeLimits ageLimitsKids) :
	m_firm(firm), m_cost(cost), m_ageLimitsKids() {}

Toy::Toy(const Toy& other) :
	m_firm(other.m_firm), m_cost(other.m_cost), m_ageLimitsKids(other.m_ageLimitsKids) {}

//Getters
const std::string& Toy::getFirm() const { return m_firm; }
const int Toy::getCost() const { return m_cost; }
const AgeLimits& Toy::getAgeLimitsKids() const { return m_ageLimitsKids; }

//Setters
void Toy::setFirm(const std::string& firm) { m_firm = firm; }
void Toy::setCost(const int cost) { m_cost = cost; }
void Toy::setAgeLimitsKids(const AgeLimits& ageLimitsKids) { m_ageLimitsKids = ageLimitsKids; }

//Methods
void Toy::findFirmCostByAgeLimits(const AgeLimits ageLimits) {
	AgeLimits mainAgeLimits = getAgeLimitsKids();
	if ((mainAgeLimits.m_startLimitAge == ageLimits.m_startLimitAge) && (mainAgeLimits.m_endLimitAge == ageLimits.m_endLimitAge)) {
		std::cout << "Firm name: " << getFirm() << std::endl;
		std::cout << "Cost: " << getCost() << std::endl;
	}
}

void Toy::printInfo() {
	std::cout << "Main Info Toy" << std::endl;
	std::cout << "Firm: " << m_firm << std::endl;
	std::cout << "Cost: " << m_cost << std::endl;
	std::cout << "Age Limits Kids: " << m_ageLimitsKids.m_startLimitAge << " - " << m_ageLimitsKids.m_endLimitAge << std::endl;
}

void Toy::saveToyToFile(const Toy& toy, const std::string& filename) {
	std::ofstream file(filename);
	if (!file.is_open()) { throw std::runtime_error("File is not open!"); }
	file << toy;
	file.close();
}

//Operator Overloading 
std::ostream& operator<<(std::ostream& os, const Toy& toy) {
	os << toy.getFirm() << " " << toy.getCost() << " " << toy.getAgeLimitsKids().m_startLimitAge << "-" << toy.getAgeLimitsKids().m_endLimitAge;

	return os;
}