module Kokurin1bib21045:F1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task4 {
				double f1(double);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task4::f1(double x) {
	return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
};
