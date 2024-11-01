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
	int freeDrinkCost{70};
	int bonusDrinkCount{};
	int currentCount{};
	double discount{2000};
	double pizza1{629}, pizza2{339}, pizza3{339}, pizza4{459}, pizza5{459}, snack1{55}, snack2{55}, snack3{100}, drink1{60}, drink2{45}, drink3{70}, drink4{90};

	while (true) {
		std::cout << "\n 1. �������� �� ������� ����� \n 2. ������ \n 3. Pipi���� \n 4. ������� ������� \n 5. ������� � ��� \n ----- \n 6. �������� \n 7. ������� \n 8. �������� \n ----- \n 9. IMBA \n 10. �������~ \n 11. ��� \n 12. ����� \n 0. ����� \n";
		std::cout << "�����: ";
		std::cin >> choice;
		if (choice == 1)
		{
			std::cout << "���������� \"�������� �� ������� �����\": ";
			std::cin >> currentCount;
			for (int i = 0; i < currentCount; i++)
			{
				if (pizzaCount % 5 != 0) {
					total += currentCount * pizza1;
					pizzaCount++;
				}
				else {
					pizzaCount = 0;
				}
			}
		}
		else if (choice == 2)
		{
			std::cout << "���������� \"������\": ";
			std::cin >> currentCount;
			for (int i = 0; i < currentCount; i++)
			{
				if (pizzaCount % 5 != 0) {
					total += currentCount * pizza2;
					pizzaCount++;
				}
				else {
					pizzaCount = 0;
				}
			}
		}
		else if (choice == 3)
		{
			std::cout << "���������� \"Pipi����\": ";
			std::cin >> currentCount;
			for (int i = 0; i < currentCount; i++)
			{
				if (pizzaCount % 5 != 0) {
					total += currentCount * pizza3;
					pizzaCount++;
				}
				else {
					pizzaCount = 0;
				}
			}
		}
		else if (choice == 4)
		{
			std::cout << "���������� \"������� �������\": ";
			std::cin >> currentCount;
			for (int i = 0; i < currentCount; i++)
			{
				if (pizzaCount % 5 != 0) {
					total += currentCount * pizza4;
					pizzaCount++;
				}
				else {
					pizzaCount = 0;
				}
			}
		}
		else if (choice == 5)
		{
			std::cout << "���������� \"������� � ���\": ";
			std::cin >> currentCount;
			for (int i = 0; i < currentCount; i++)
			{
				if (pizzaCount % 5 != 0) {
					total += currentCount * pizza5;
					pizzaCount++;
				}
				else {
					pizzaCount = 0;
				}
			}
		}
		else if (choice == 6)
		{
			std::cout << "���������� \"��������\": ";
			std::cin >> currentCount;
			total += currentCount * snack1;
	
		}
		else if (choice == 7)
		{
			std::cout << "���������� \"�������\": ";
			std::cin >> currentCount;
			total += currentCount * snack2;

		}

		else if (choice == 8)
		{
			std::cout << "���������� \"��������\": ";
			std::cin >> currentCount;
			total += currentCount * snack3;
		}
		else if (choice == 9)
		{
			std::cout << "���������� \"IMBA\": ";
			std::cin >> currentCount;
			lastDrinkCost = drink1;
			for (int i = 0; i < currentCount; i++)
			{
				if (drink1 >= freeDrinkCost) {
					bonusDrinkCount++;
					total += drink1;
				}
			}
		}

		else if (choice == 10)
		{
			std::cout << "���������� \"�������~\": ";
			std::cin >> currentCount;
			lastDrinkCost = drink1;
			for (int i = 0; i < currentCount; i++)
			{
				if (bonusDrinkCount != 4) {
					if (drink2 >= freeDrinkCost) {
						bonusDrinkCount++;
						total += drink2;
					}
				}
			}
		}

		else if (choice == 11)
		{
			std::cout << "���������� \"���\": ";
			std::cin >> currentCount;
			lastDrinkCost = drink1;
			for (int i = 0; i < currentCount; i++)
			{
				if (bonusDrinkCount != 4) {
					if (drink3 >= freeDrinkCost) {
						bonusDrinkCount++;
						total += drink3;
					}
				}
			}
		}

		else if (choice == 12)
		{
			std::cout << "���������� \"�����\": ";
			std::cin >> currentCount;
			lastDrinkCost = drink1;
			for (int i = 0; i < currentCount; i++)
			{
				if (bonusDrinkCount != 4) {
					if (drink4 >= freeDrinkCost) {
						bonusDrinkCount++;
						total += drink4;
					}
				}
			}
		}
		else if (choice == 0)
		{
			std::cout << "\n�����: " << total;
			if (total >= discount) {
				std::cout << "\n������! ����� �� �������: " << total * 0.85;
			}
			break;
		}
	}
}