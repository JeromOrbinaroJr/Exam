#include "Constructor.h"

//Constructors
Constructor::Constructor() :
	m_constructorTitle(""), m_numberOfParts(0) {}

Constructor::Constructor(const Toy& toy, const std::string& constructorTitle, const int numberOfParts) :
	Toy(toy.getFirm(), toy.getCost(), toy.getAgeLimitsKids()), m_constructorTitle(constructorTitle), m_numberOfParts(numberOfParts) {}

Constructor::Constructor(const Constructor& other) :
	Toy(other), m_constructorTitle(other.m_constructorTitle), m_numberOfParts(other.m_numberOfParts) {}

//Getters
const std::string& Constructor::getConstructorTitle() const { return m_constructorTitle; }
const int Constructor::getNumberOfParts() const { return m_numberOfParts; }

//Setters
void Constructor::setConstructorTitle(const std::string& constructorTitle) { m_constructorTitle = constructorTitle; }
void Constructor::setNumberOfParts(const int numberOfParts) { m_numberOfParts = numberOfParts; }

//Methods
void Constructor::findNumberOfPartsCostByTitle(const std::string& title) {
	if (this->m_constructorTitle == title) {
		std::cout << "Number of Parts: " << m_numberOfParts << std::endl;
		std::cout << "Cost: " << m_cost << std::endl;
	}
}

void Constructor::printInfo() {
	std::cout << "Constructor" << std::endl;
	std::cout << "Constructor title: " << m_constructorTitle << std::endl;
	std::cout << "Number of parts: " << m_numberOfParts << std::endl;
}

//Operators Overloading
Constructor& Constructor::operator+(int number) {
	m_numberOfParts += number;
	return *this;
}

const std::string& Constructor::operator+=(std::string& allFields) {
	std::ostringstream oss;
	oss << m_firm << " " << m_cost << " " << m_ageLimitsKids.m_startLimitAge << "-" << m_ageLimitsKids.m_endLimitAge << " " <<
		m_constructorTitle << " " << m_numberOfParts;
	allFields = oss.str();

	return allFields;
}