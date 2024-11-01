#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choice{};
	double total{};
	int pizzaCount{};
	int drinkCount{};
	int lastDrinkCost{};
	int currentCount{};

	while (true) {
		std::cout << "\n 1. Креветки со сладким чилли \n 2. Сырная \n 3. Pipiрони \n 4. Двойной цыплёнок \n 5. Ветчина и сыр \n ----- \n 6. Сухареки \n 7. Чипсеки \n 8. Блинчеки \n ----- \n 9. Imba \n 10. Молочко~ \n 11. Чаёк \n 12. Кофеёк \n 0. Выход \n";
		std::cout << "Выбор: ";
		std::cin >> choice;
		if (choice == 1)
		{
			std::cout << "Выбор: ";
			std::cin
		}
	}

}