module;
#include <cmath>

module Kokurin1bib21045;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task3 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task3::f2(double x) {
	return x <= 0 ? abs(-x*x + 3*x + 8) : sqrt(x * x + 1/x);
};
