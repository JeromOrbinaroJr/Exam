#pragma once
#include "Toy.h"

class AverageCost : public Toy {
public:
	void addCost(int cost) { costs.push_back(cost); }

	template <typename T>
	T average(std::vector<T>costs) {
		T sum = 0;
		for (const T& cost : costs) {
			sum += cost;
		}
		return (sum / costs.size());
	}

private:
	std::vector<int>costs;
};