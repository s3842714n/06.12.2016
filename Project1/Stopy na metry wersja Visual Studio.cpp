#include <iostream>

using namespace std;

int main()
{
	int 	stopy;
	double	metry;
	double przelicznik = 0.3;

	std::cout << "Podaj wysokoœæ w stopach: ";
	std::cin >> stopy;

	metry = stopy*przelicznik;

	std::cout << "\n";

	std::cout << stopy << "stop - to jest;" << metry << "metrow\n";
	system("pause"); system("pause"); system("pause");
}
