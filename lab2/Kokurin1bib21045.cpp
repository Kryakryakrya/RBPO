module;
#include <cmath>

module Kokurin1bib21045;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(int);
				double f4(double);
				double a(int);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task2::f1(double x) {
	return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
};

double RBPO::Lab2::Variant12::Task2::f2(double x) {
	if (x < 4)
		return cos(abs(2 + x));
	return sqrt(x * x + 4);
};

double RBPO::Lab2::Variant12::Task2::a(int i) {
	return (i % 2 == 0 ? 1 : -1) * (i + 1) / double(i * i + 2 * i + 1);
};

double RBPO::Lab2::Variant12::Task2::f3(int n) {
	double sum = a(0); int i = 0;
	while (i < n)
		sum += a(++i);
	return sum;
};

double RBPO::Lab2::Variant12::Task2::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); int i = 2;
	while (eps < abs(temp - temp1))
		sum += temp, temp = temp1, temp1 = a(++i);
	return sum;
};

