module Kokurin1bib21045:F3;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task4 {
				double f3(int);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task4::f3(int n) {
	double sum = a(0);
	for (int i = 0; i < n; sum += a(++i));
	return sum;
};
