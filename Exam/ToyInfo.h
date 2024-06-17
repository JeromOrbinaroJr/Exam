#pragma once
#include "Toy.h"
#include "Constructor.h"

class ToyInfo : public Toy{
public:
	//Constructors
	ToyInfo();
	ToyInfo(const Toy& toy, const std::string& titleToy, const std::string& typeOfToy, const std::string& materialOfToy);
	ToyInfo(const ToyInfo& other);

	//Destructor
	~ToyInfo() override = default;

	//Getters
	const std::string& getTitleToy() const;
	const std::string& getTypeOfToy() const;
	const std::string& getMaterialOfToy() const;

	//Setters
	void setTitleToy(const std::string& titleToy);
	void setTypeOfToy(const std::string& typeOfToy);
	void setMaterialOfToy(const std::string& materialOfToy);

	//Methods
	void printInfo() override;

	//Operator Overloading
	friend std::ostream& operator<<(std::ostream& os, const ToyInfo& toyInfo);
	friend std::istream& operator>>(std::istream& is, ToyInfo& toyInfo);


private:
	std::string m_titleToy;
	std::string m_typeOfToy;
	std::string m_materialOfToy;
};