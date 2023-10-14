module;
#include <cmath>

module Kokurin1bib21045;
namespace RBPO {
	namespace Lab2 {
		namespace Variant12 {
			namespace Task3 {
				double a(int);
			};
		};
	};
};

double RBPO::Lab2::Variant12::Task3::a(int i) {
	return (i % 2 == 0 ? 1 : -1)  / double(i * i + pow(2,i));
};
