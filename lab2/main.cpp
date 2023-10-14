#include <iostream>

import Kokurin1bib21045;
enum Choice {
	Task1 = '1', Task2 = '2', Task3 = '3', Task4 = '4', Task5 = '5'
};

int main() {
	char q;
	do
	{
		std::cout << "1 task:\t\'1\'\
					\n2 task:\t\'2\'\
					\n3 task:\t\'3\'\
					\n4 task:\t\'4\'\
					\n5 task:\t\'5\'\
					\nExit:\t\'0\'" << std::endl;
		std::cin >> q;
		switch ((Choice)q) {
			int n; double x, eps;
		case Task1:
			std::cout << "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task1::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task1::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task1::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task1::f4(eps) << std::endl;
			break;
		case Task2:
			std::cout << "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task2::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task2::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task2::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task2::f4(eps) << std::endl;
			break;
		case Task3:
			std::cout << "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task3::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task3::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task3::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task3::f4(eps) << std::endl;
			break;
		case Task4:
			std::cout << "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task4::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task4::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task4::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task4::f4(eps) << std::endl;
			break;
		case Task5:
			std::cout << "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant12::Task5::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant12::Task5::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant12::Task5::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant12::Task5::f4(eps) << std::endl;
			break;
		case '0':
			break;
		default:
			std::cout << "Inputed data is incorrect!" << std::endl;
			break;
		}
	} while (q != '0');
	return 0;
};