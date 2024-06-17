#pragma once
#include "Toy.h"
#include <sstream>

class Constructor : public virtual Toy {
public:
	//Constructor
	Constructor();
	Constructor(const Toy& toy, const std::string& constructorTitle, const int numberOfParts);
	Constructor(const Constructor& other);

	//Destructor
	~Constructor() override = default;	

	//Getters
	const std::string& getConstructorTitle() const;
	const int getNumberOfParts() const;

	//Setters
	void setConstructorTitle(const std::string& constructorTitle);
	void setNumberOfParts(const int numberOfParts);

	//Methods
	void findNumberOfPartsCostByTitle(const std::string& title);

	void printInfo() override;

	//Operators Overloading
	Constructor& operator+(int number);

	const std::string& operator+=(std::string& allFields);

private:
	std::string m_constructorTitle;
	int m_numberOfParts;
};
