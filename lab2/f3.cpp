module Kokurin1bib21045;

namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task3 {
				double f3(int);
				double a(int);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task3::f3(int n) {
	double sum = 0; int i = 0;
	do {
		sum += a(i);
	} while (i++ < n);
	return sum;
};
