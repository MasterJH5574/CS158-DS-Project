#include "vector.hpp"

#include "class-integer.hpp"
#include "class-matrix.hpp"
#include "class-bint.hpp"

#include <iostream>
#include <fstream>
#include <string>

void TestInteger()
{
	std::cout << "Test for classes without default constructor..." << std::endl;
	sjtu::vector<Integer> vInt;
	for (int i = 1; i <= 100; ++i) {
		vInt.push_back(Integer(i));
	}
	std::cout << "Test OK..." << std::endl;
}

void TestMatrix()
{
	std::cout << "Test for my Matrix..." << std::endl;
	sjtu::vector<Diamond::Matrix<double>> vM;
	for (int i = 1; i <= 10; ++i) {
		vM.push_back(Diamond::Matrix<double>(i, i, i));
	}
	for (size_t i = 0; i < vM.size(); ++i) {
		std::cout << vM[i] << std::endl;
	}
}

void TestBint()
{
	std::cout << "Test for big integer" << std::endl;
	sjtu::vector<Util::Bint> vBint;
	for (long long i = 1LL << 50; i < (1LL << 50) + 10; ++i) {
		vBint.push_back(Util::Bint(i) * i);
	}
	for (sjtu::vector<Util::Bint>::iterator it = vBint.begin(); it != vBint.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main()
{
	TestInteger();
	TestMatrix();
	TestBint();
}