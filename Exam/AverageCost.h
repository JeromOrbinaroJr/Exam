#pragma once
#include "Constructor.h"
#include "ToyInfo.h"

class Costs : public Constructor, public ToyInfo {
public:
	void addCost(int cost) { costs.push_back(cost); }

	template <typename T>
	T average(std::vector<T>costs) {
		if (costs.empty()) { throw std::runtime_error("Is empty."); }
		T sum = 0;
		for (const T& cost : costs) {
			sum += cost;
		}
		return (sum / costs.size());
	}

private:
	std::vector<int>costs;
};