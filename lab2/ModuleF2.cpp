module Kokurin1bib21045:F2;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task4 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task4::f2(double x) {
	return x < 4 ? cos(abs(2 + x)) : sqrt(x * x + 4);
};
