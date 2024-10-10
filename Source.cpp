#include <iostream>
#include <Windows.h>
#include <cstdlib>






int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true)
	{
		int nap = 0;
		int pizz = 0;
		int itogsum = 0;
		int zaccaz = 0;
		int zaccaz1 = 0;
		int sum = 0;
		int sum1 = 0;
		int sum2 = 0;
		int pizza = 1;
		int zacus = 1;
		int napit = 1;
		int bavar = 70;
		int gavai = 110;
		int cheeses = 120;
		int peperon = 90;
		int meet = 150;
		int ches = 80;
		int ciplen = 95;
		int fri = 50;
		int derev = 60;
		int ice = 55;
		int pirozh = 40;
		int kola = 100;
		int sprite = 150;
		int fanta = 170;
		int klubmil = 230;
		int bananmil = 230;
		int console = 100;

		std::cout << "\n\nДобро пожаловать в CUMPLAZZE\n";

		while (pizza != 0)
		{
			std::cout << "\nВвыберете пиццу (берете кусочек):\n";
			std::cout << "1) Баварская " << bavar << " рублей\n";
			std::cout << "2) Гавайская " << gavai << " рублей\n";
			std::cout << "3) 4 сыра " << cheeses << " рублей\n";
			std::cout << "4) Пеперони " << peperon << " рублей\n";
			std::cout << "5) Мясная " << meet << " рублей\n";
			std::cout << "6) Сырная " << ches << " рублей\n";
			std::cout << "7) С цыпленком " << ciplen << " рублей\n";
			std::cout << "0) если не берете ничего или закончили с выбором\n";
			std::cout << "Введите номер пиццы --> ";
			std::cin >> pizza;

			if (pizza == 1)
			{
				sum = sum + bavar;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\nВы получаете кусок баварской пиццы в подарок! (акция 4+1)\n";
					std::cout << "\nСумма пицц = " << sum;
					zaccaz = 0;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\nСумма пицц = " << sum;
				}
			}
			else if (pizza == 2)
			{
				sum = sum + gavai;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\nВы получаете кусок баварской пиццы в подарок! (акция 4+1)\n";
					std::cout << "\nСумма пицц = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\nСумма пицц = " << sum;
				}
			}
			else if (pizza == 3)
			{
				sum = sum + cheeses;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\nВы получаете кусок баварской пиццы в подарок! (акция 4+1)\n";
					std::cout << "\nСумма пицц = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\nСумма пицц = " << sum;
				}
			}
			else if (pizza == 4)
			{
				sum = sum + peperon;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\nВы получаете кусок баварской пиццы в подарок! (акция 4+1)\n";
					std::cout << "\nСумма пицц = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\nСумма пицц = " << sum;
				}
			}
			else if (pizza == 5)
			{
				sum = sum + meet;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\nВы получаете кусок баварской пиццы в подарок! (акция 4+1)\n";
					std::cout << "\nСумма пицц = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\nСумма пицц = " << sum;
				}
			}
			else if (pizza == 6)
			{
				sum = sum + ches;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\nВы получаете кусок баварской пиццы в подарок! (акция 4+1)\n";
					std::cout << "\nСумма пицц = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\nСумма пицц = " << sum;
				}
			}
			else if (pizza == 7)
			{
				sum = sum + ciplen;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\nВы получаете кусок баварской пиццы в подарок! (акция 4+1)\n";
					std::cout << "\nСумма пицц = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\nСумма пицц = " << sum;
				}
			}
			else if (pizza < 0 || pizza > 7 && pizza != 37)
			{
				std::cout << "\n\nПростите но такого нет в нашем меню =(\n\n";
				continue;
			}
			else if (pizza == 0)
			{
				std::cout << "Вы получаете " << pizz << " кусков баварской пиццы в подарок!\n";
				std::cout << "\nСумма пицц = " << sum;
				continue;
			}
			else if (pizza == 37)
			{
				while (console != 0)
				{
					system("cls");
					std::cout << "\n\nДобро пожаловать в админ мод!\n\n";
					std::cout << "Выбирете номер того чему хотите поменять цену:\n";
					std::cout << "1) пицца Баварская " << bavar << " рублей\n";
					std::cout << "2) пицца Гавайская " << gavai << " рублей\n";
					std::cout << "3) пицца 4 сыра " << cheeses << " рублей\n";
					std::cout << "4) пицца Пеперони " << peperon << " рублей\n";
					std::cout << "5) пицца Мясная " << meet << " рублей\n";
					std::cout << "6) пицца Сырная " << ches << " рублей\n";
					std::cout << "7) пицца С цыпленком " << ciplen << " рублей\n";
					std::cout << "8) Картошка фри " << fri << " рублей\n";
					std::cout << "9) Картошка по деревенски " << derev << " рублей\n";
					std::cout << "10) Мороженное " << ice << " рублей\n";
					std::cout << "11) Вишневый пирожок " << pirozh << " рублей\n";
					std::cout << "12) Кока-кола " << kola << " рублей\n";
					std::cout << "13) Спрайт " << sprite << " рублей\n";
					std::cout << "14) Фанта " << fanta << " рублей\n";
					std::cout << "15) Клубничный милк-шейк " << klubmil << " рублей\n";
					std::cout << "16) Банановый милк-шейк " << bananmil << " рублей\n";
					std::cout << "0) Выйти из админ мода\n";
					std::cout << "Введите номер --> ";
					std::cin >> console;

					if (console == 1)
					{
						std::cout << "Введите новую цену для баварской пиццы --> ";
						std::cin >> bavar;
					}
					else if (console == 2)
					{
						std::cout << "Введите новую цену для гавайской пиццы --> ";
						std::cin >> gavai;
					}
					else if (console == 3)
					{
						std::cout << "Введите новую цену для пиццы 4 сыра --> ";
						std::cin >> cheeses;
					}
					else if (console == 4)
					{
						std::cout << "Введите новую цену для пеперони пиццы --> ";
						std::cin >> peperon;
					}
					else if (console == 5)
					{
						std::cout << "Введите новую цену для мясной пиццы --> ";
						std::cin >> meet;
					}
					else if (console == 6)
					{
						std::cout << "Введите новую цену для сырной пиццы --> ";
						std::cin >> ches;
					}
					else if (console == 7)
					{
						std::cout << "Введите новую цену для пиццы с цыпленком --> ";
						std::cin >> ciplen;
					}
					else if (console == 8)
					{
						std::cout << "Введите новую цену для картошки фри --> ";
						std::cin >> fri;
					}
					else if (console == 9)
					{
						std::cout << "Введите новую цену для картошки по деревенский --> ";
						std::cin >> derev;
					}
					else if (console == 10)
					{
						std::cout << "Введите новую цену для мороженого --> ";
						std::cin >> ice;
					}
					else if (console == 11)
					{
						std::cout << "Введите новую цену для вишневого пироженого --> ";
						std::cin >> pirozh;
					}
					else if (console == 12)
					{
						std::cout << "Введите новую цену для кока-колы --> ";
						std::cin >> kola;
					}
					else if (console == 13)
					{
						std::cout << "Введите новую цену для спрайта --> ";
						std::cin >> sprite;
					}
					else if (console == 14)
					{
						std::cout << "Введите новую цену для фанты --> ";
						std::cin >> fanta;
					}
					else if (console == 15)
					{
						std::cout << "Введите новую цену для клубничного милк-шейка --> ";
						std::cin >> klubmil;
					}
					else if (console == 16)
					{
						std::cout << "Введите новую цену для бананового милк-шейка --> ";
						std::cin >> bananmil;
					}
				}

			}
		}

		while (zacus != 0)
		{
			std::cout << "\n\nВвыберете закуску:\n";
			std::cout << "1) Картошка фри " << fri << " рублей\n";
			std::cout << "2) Картошка по деревенски " << derev << " рублей\n";
			std::cout << "3) Мороженное " << ice << " рублей\n";
			std::cout << "4) Вишневый пирожок " << pirozh << " рублей\n";
			std::cout << "0) Если не берете закуску или закончили с выбором\n";
			std::cout << "Введите номер закуски --> ";
			std::cin >> zacus;
			if (zacus == 1)
			{
				sum1 = sum1 + fri;
			}
			else if (zacus == 2)
			{
				sum1 = sum1 + derev;
			}
			else if (zacus == 3)
			{
				sum1 = sum1 + ice;
			}
			else if (zacus == 4)
			{
				sum1 = sum1 + pirozh;
			}
			else if (zacus < 0 || zacus > 5)
			{
				std::cout << "\n\nПростите но такого нет в нашем меню =(\n\n";
				continue;
			}
			else if (zacus == 0)
			{
				std::cout << "\nСумма закусок = " << sum1;
				continue;
			}
		}
		
		while (napit != 0)
		{
			std::cout << "\n\nВвыберете напиток:\n";
			std::cout << "1) Кока-кола " << kola << " рублей\n";
			std::cout << "2) Спрайт " << sprite << " рублей\n";
			std::cout << "3) Фанта " << fanta << " рублей\n";
			std::cout << "4) Клубничный милк-шейк " << klubmil << " рублей\n";
			std::cout << "5) Банановый милк-шейк " << bananmil << " рублей\n";
			std::cout << "0) Если ничего не берете или закончили с выбором\n";
			std::cout << "Введите номер напитка --> ";
			std::cin >> napit;
			if (napit == 1)
			{
				sum2 = sum2 + kola;
			}
			else if (napit == 2)
			{
				sum2 = sum2 + sprite;
				zaccaz1 = zaccaz1 + 1;
				if (zaccaz1 >= 3)
				{
					nap = nap + 1;
					std::cout << "\nВы получаете колу в подарок!";
					std::cout << "\nСумма напитков = " << sum2;
					zaccaz1 = 0;
				}
				else if (zaccaz1 < 3)
				{
					std::cout << "\nСумма напитков = " << sum2;
				}
			}
			else if (napit == 3)
			{
				sum2 = sum2 + fanta;
				zaccaz1 = zaccaz1 + 1;
				if (zaccaz1 >= 3)
				{
					nap = nap + 1;
					std::cout << "\nВы получаете колу в подарок!";
					std::cout << "\nСумма напитков = " << sum2;
					zaccaz1 = 0;
				}
				else if (zaccaz1 < 3)
				{
					std::cout << "\nСумма напитков = " << sum2;
				}
			}
			else if (napit == 4)
			{
				sum2 = sum2 + klubmil;
				zaccaz1 = zaccaz1 + 1;
				if (zaccaz1 >= 3)
				{
					nap = nap + 1;
					std::cout << "\nВы получаете колу в подарок!";
					std::cout << "\nСумма напитков = " << sum2;
					zaccaz1 = 0;
				}
				else if (zaccaz1 < 3)
				{
					std::cout << "\nСумма напитков = " << sum2;
				}
			}
			else if (napit == 5)
			{
				sum2 = sum2 + bananmil;
				zaccaz1 = zaccaz1 + 1;
				if (zaccaz1 >= 3)
				{
					nap = nap + 1;
					std::cout << "\nВы получаете колу в подарок!";
					std::cout << "\nСумма напитков = " << sum2;
					zaccaz1 = 0;
				}
				else if (zaccaz1 < 3)
				{
					std::cout << "\nСумма напитков = " << sum2;
				}
			}
			else if (napit < 0 || napit > 5)
			{
				std::cout << "\n\nПростите но такого нет в нашем меню =(\n\n";
				continue;
			}
			else if (napit == 0)
			{
				std::cout << "\nВы получаете " << nap << " кол в подарок!";
				std::cout << "\nСумма напитков = " << sum2;
			}
		}
		int skid = 0;
		itogsum = sum + sum1 + sum2;

		if (itogsum > 700)
		{
			skid = itogsum / 100 * 15;
			itogsum = itogsum - skid;
		}

		if (pizz > 0 && nap > 0)
		{
			std::cout << "\n\n\nВы получаете " << pizz << " куска баварской пиццы бесплатно!\n";
			std::cout << "Вы получаете " << nap << " Колы бесплатно!\n";
			std::cout << "Итоговая сумма заказа составляет " << itogsum << " Рублей\n";
			std::cout << "Сумма скидки = " << skid << "\n\n\n";
		}
		else if (pizz > 0 && nap <= 0)
		{
			std::cout << "\n\n\nВы получаете " << pizz << " куска баварской пиццы бесплатно!\n";
			std::cout << "Итоговая сумма заказа со скидкой составляет " << itogsum << " Рублей\n";
			std::cout << "Сумма скидки = " << skid << "\n\n\n";
		}
		else if (pizz <= 0 && nap > 0)
		{
			std::cout << "\n\n\nВы получаете " << nap << " Колы бесплатно!\n";
			std::cout << "Итоговая сумма заказа составляет " << itogsum << " Рублей\n";
			std::cout << "Сумма скидки = " << skid << "\n\n\n";
		}
		else if (pizz <= 0 && nap <= 0)
		{
			std::cout << "\n\n\nИтоговая сумма заказа составляет " << itogsum << " Рублей\n";
			std::cout << "Сумма скидки = " << skid << "\n\n\n";
		}
	}

	return 0;
}