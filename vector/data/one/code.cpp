#include "vector.hpp"

#include <iostream>
#include <iomanip>
#include <vector>

void TestConstructor()
{
	std::cout << "Testing constructors and assignment operator..." << std::endl;
	sjtu::vector<int> v;
	for (int i = 1; i <= 10; ++i) {
		v.push_back(i);
	}
	const sjtu::vector<int> vc(v);
	for (size_t i = 0; i < vc.size(); ++i) {
		std::cout << vc[i] << " ";
	}
	std::cout << std::endl;
	sjtu::vector<int> vv;
	for (int i = 0; i < 10; ++i) {
		vv.push_back(i);
	}
	for (size_t i = 0; i < vv.size(); ++i) {
		std::cout << vv[i] << " ";
	}
	std::cout << std::endl;
	vv = v;
	for (size_t i = 0; i < vv.size(); ++i) {
		std::cout << vv[i] << " ";
	}
	std::cout << std::endl;
}

void TestIterators()
{
	std::cout << "Testing iterators..." << std::endl; 
	sjtu::vector<int> v;
	for (int i = 1; i <= 20; ++i) {
		v.push_back(i);
	}
	for (sjtu::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	const sjtu::vector<int> vc(v);
	for (sjtu::vector<int>::const_iterator it = vc.cbegin(); it != vc.cend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void TestAccessingMethod()
{
	std::cout << "Testing accessing methods..." << std::endl;
	sjtu::vector<long long> vd;
	for (long long i = 0; i < 50; ++i) {
		vd.push_back(1LL << i);
	}
	for (size_t i = 0; i < vd.size(); ++i) {
		std::cout << vd[i] << std::endl;
	}
	try {
		std::cout << vd.at(100) << std::endl;
	} catch(...) {
		std::cout << "exceptions thrown correctly." << std::endl;
	}
}

void TestPush_Pop()
{
	std::cout << "Testing push_back and pop_back..." << std::endl;
	sjtu::vector<double> vd;
	for (double i = 0.0; i < 10.0; i += 1.0) {
		vd.push_back(i);
	}
	std::cout << vd.back() << std::endl;
	for (double i = 20.0; i < 23.0; i += 1.0) {
		vd.push_back(i);
	}
	std::cout << vd.back() << std::endl;
	vd.pop_back();
	std::cout << vd.back() << std::endl;
	vd.pop_back();
	std::cout << vd.back() << std::endl;
	for (int i = 0; i < 5; ++i) {
		vd.pop_back();
	}
	std::cout << vd.back() << std::endl;
}

void TestInsert()
{
	std::cout << "Testing insert functions" << std::endl;
	sjtu::vector<int> v;
	for (int i = 0; i < 10; ++i) {
		v.push_back(i);
	}
	v.insert(v.begin() + 3, 100);
	v.insert(v.begin() + 5, 200);
	for (sjtu::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void TestErase()
{
	std::cout << "Testing erase functions" << std::endl;
	sjtu::vector<int> v;
	for (int i = 0; i < 10; ++i) {
		v.push_back(i);
	}
	v.insert(v.begin() + 3, 100);
	v.insert(v.begin() + 5, 200);
	v.erase(v.begin() + 5);
	v.erase(v.begin() + 3);
	for (sjtu::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
	TestConstructor();
	TestIterators();
	TestAccessingMethod();
	TestPush_Pop();
	TestInsert();
	TestErase();
	return 0;
}