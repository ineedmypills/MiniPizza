#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice{};
    double total{};
    int pizzaCount{};
    int drinkCount{};
    int freeDrinkCost{ 70 };
    int bonusDrinkCount{};
    int currentCount{};
    double discount{ 2000 };
    double pizza1{ 629 }, pizza2{ 339 }, pizza3{ 339 }, pizza4{ 459 }, pizza5{ 459 }, snack1{ 55 }, snack2{ 55 }, snack3{ 100 }, drink1{ 60 }, drink2{ 45 }, drink3{ 70 }, drink4{ 90 };

    while (true) {
        std::cout << "\n 1. �������� �� ������� ����� \n 2. ������ \n 3. Pipi���� \n 4. ������� ������� \n 5. ������� � ��� \n ----- \n 6. �������� \n 7. ������� \n 8. �������� \n ----- \n 9. IMBA \n 10. �������~ \n 11. ��� \n 12. ����� \n 0. ����� \n";
        std::cout << "�����: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 5) {
            std::cout << "����������: ";
            std::cin >> currentCount;
            double pizzaPrice = 0;

            switch (choice) {
            case 1: pizzaPrice = pizza1; break;
            case 2: pizzaPrice = pizza2; break;
            case 3: pizzaPrice = pizza3; break;
            case 4: pizzaPrice = pizza4; break;
            case 5: pizzaPrice = pizza5; break;
            }

            for (int i = 0; i < currentCount; i++) {
                if (pizzaCount % 5 != 0) {
                    total += pizzaPrice;
                }
                pizzaCount++;
            }
        }
        else if (choice >= 6 && choice <= 8) {
            std::cout << "����������: ";
            std::cin >> currentCount;
            double snackPrice = 0;

            switch (choice) {
            case 6: snackPrice = snack1; break;
            case 7: snackPrice = snack2; break;
            case 8: snackPrice = snack3; break;
            }

            total += currentCount * snackPrice;
        }
        else if (choice >= 9 && choice <= 12) {
            std::cout << "����������: ";
            std::cin >> currentCount;
            double drinkPrice = 0;

            switch (choice) {
            case 9: drinkPrice = drink1; break;
            case 10: drinkPrice = drink2; break;
            case 11: drinkPrice = drink3; break;
            case 12: drinkPrice = drink4; break;
            }

            for (int i = 0; i < currentCount; i++) {
                if (bonusDrinkCount < 4 && drinkPrice >= freeDrinkCost) {
                    bonusDrinkCount++;
                }
                total += drinkPrice;
            }
        }
        else if (choice == 0) {
            std::cout << "\n�����: " << total;
            if (total >= discount) {
                std::cout << "\n������! ����� �� �������: " << total * 0.85;
            }
            break;
        }
        else {
            std::cout << "�������� �����. ����������, ���������� �����.";
        }
    }

    return 0;
}