module;
#include <cmath>

module Kokurin1bib21045;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task3 {
				double f4(double);
				double a(int);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task3::f4(double eps) {
	double sum = a(0), temp = a(1), temp1 = a(2); int i = 2;
	do {
		sum += temp, temp = temp1, temp1 = a(++i);
	} while (eps < std::abs(temp - temp1));
	return sum;
};
