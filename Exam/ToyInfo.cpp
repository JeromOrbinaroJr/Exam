#include "ToyInfo.h"

//Constructors
ToyInfo::ToyInfo() :
	m_titleToy(""), m_typeOfToy(""), m_materialOfToy("") {}

ToyInfo::ToyInfo(const Toy& toy, const std::string& titleToy, const std::string& typeOfToy, const std::string& materialOfToy) :
	Toy(toy.getFirm(), toy.getCost(), toy.getAgeLimitsKids()), m_titleToy(titleToy), m_typeOfToy(typeOfToy), m_materialOfToy(materialOfToy) {}

ToyInfo::ToyInfo(const ToyInfo& other) :
	Toy(other), m_titleToy(other.m_titleToy), m_typeOfToy(other.m_typeOfToy), m_materialOfToy(other.m_materialOfToy) {}

//Getters
const std::string& ToyInfo::getTitleToy() const { return m_titleToy; }
const std::string& ToyInfo::getTypeOfToy() const { return m_typeOfToy; }
const std::string& ToyInfo::getMaterialOfToy() const { return m_materialOfToy; }

//Setters
void ToyInfo::setTitleToy(const std::string& titleToy) { m_titleToy = titleToy; }
void ToyInfo::setTypeOfToy(const std::string& typeOfToy) { m_typeOfToy = typeOfToy; }
void ToyInfo::setMaterialOfToy(const std::string& materialOfToy) { m_materialOfToy = materialOfToy; }

//Methods
void ToyInfo::printInfo() {
	std::cout << "Toy Info" << std::endl;
	std::cout << "Title toy: " << m_titleToy << std::endl;
	std::cout << "Type of toy: " << m_typeOfToy << std::endl;
	std::cout << "Material of toy: " << m_materialOfToy << std::endl;
}

//Operators Overloading 
std::ostream& operator<<(std::ostream& os, const ToyInfo& toyInfo) {
	os << toyInfo.m_firm << " " << toyInfo.m_cost << " " << toyInfo.m_titleToy
		<< " " << toyInfo.m_typeOfToy << " " << toyInfo.m_materialOfToy;
	
	return os;
}

std::istream& operator>>(std::istream& is, ToyInfo& toyInfo) {
	std::cout << "Enter firm: ";
	is >> toyInfo.m_firm;
	std::cout << "Enter cost: ";
	is >> toyInfo.m_cost;
	std::cout << "Enter title toy: ";
	is >> toyInfo.m_titleToy;
	std::cout << "Enter type of toy: ";
	is >> toyInfo.m_typeOfToy;
	std::cout << "Enter material of toy: ";
	is >> toyInfo.m_materialOfToy;
	return is;
}