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

		std::cout << "\n\n����� ���������� � CUMPLAZZE\n";

		while (pizza != 0)
		{
			std::cout << "\n��������� ����� (������ �������):\n";
			std::cout << "1) ��������� " << bavar << " ������\n";
			std::cout << "2) ��������� " << gavai << " ������\n";
			std::cout << "3) 4 ���� " << cheeses << " ������\n";
			std::cout << "4) �������� " << peperon << " ������\n";
			std::cout << "5) ������ " << meet << " ������\n";
			std::cout << "6) ������ " << ches << " ������\n";
			std::cout << "7) � ��������� " << ciplen << " ������\n";
			std::cout << "0) ���� �� ������ ������ ��� ��������� � �������\n";
			std::cout << "������� ����� ����� --> ";
			std::cin >> pizza;

			if (pizza == 1)
			{
				sum = sum + bavar;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\n�� ��������� ����� ��������� ����� � �������! (����� 4+1)\n";
					std::cout << "\n����� ���� = " << sum;
					zaccaz = 0;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\n����� ���� = " << sum;
				}
			}
			else if (pizza == 2)
			{
				sum = sum + gavai;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\n�� ��������� ����� ��������� ����� � �������! (����� 4+1)\n";
					std::cout << "\n����� ���� = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\n����� ���� = " << sum;
				}
			}
			else if (pizza == 3)
			{
				sum = sum + cheeses;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\n�� ��������� ����� ��������� ����� � �������! (����� 4+1)\n";
					std::cout << "\n����� ���� = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\n����� ���� = " << sum;
				}
			}
			else if (pizza == 4)
			{
				sum = sum + peperon;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\n�� ��������� ����� ��������� ����� � �������! (����� 4+1)\n";
					std::cout << "\n����� ���� = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\n����� ���� = " << sum;
				}
			}
			else if (pizza == 5)
			{
				sum = sum + meet;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\n�� ��������� ����� ��������� ����� � �������! (����� 4+1)\n";
					std::cout << "\n����� ���� = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\n����� ���� = " << sum;
				}
			}
			else if (pizza == 6)
			{
				sum = sum + ches;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\n�� ��������� ����� ��������� ����� � �������! (����� 4+1)\n";
					std::cout << "\n����� ���� = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\n����� ���� = " << sum;
				}
			}
			else if (pizza == 7)
			{
				sum = sum + ciplen;
				zaccaz = zaccaz + 1;
				if (zaccaz >= 4)
				{
					pizz = pizz + 1;
					std::cout << "\n\n�� ��������� ����� ��������� ����� � �������! (����� 4+1)\n";
					std::cout << "\n����� ���� = " << sum;
				}
				else if (zaccaz < 4)
				{
					std::cout << "\n����� ���� = " << sum;
				}
			}
			else if (pizza < 0 || pizza > 7 && pizza != 37)
			{
				std::cout << "\n\n�������� �� ������ ��� � ����� ���� =(\n\n";
				continue;
			}
			else if (pizza == 0)
			{
				std::cout << "�� ��������� " << pizz << " ������ ��������� ����� � �������!\n";
				std::cout << "\n����� ���� = " << sum;
				continue;
			}
			else if (pizza == 37)
			{
				while (console != 0)
				{
					system("cls");
					std::cout << "\n\n����� ���������� � ����� ���!\n\n";
					std::cout << "�������� ����� ���� ���� ������ �������� ����:\n";
					std::cout << "1) ����� ��������� " << bavar << " ������\n";
					std::cout << "2) ����� ��������� " << gavai << " ������\n";
					std::cout << "3) ����� 4 ���� " << cheeses << " ������\n";
					std::cout << "4) ����� �������� " << peperon << " ������\n";
					std::cout << "5) ����� ������ " << meet << " ������\n";
					std::cout << "6) ����� ������ " << ches << " ������\n";
					std::cout << "7) ����� � ��������� " << ciplen << " ������\n";
					std::cout << "8) �������� ��� " << fri << " ������\n";
					std::cout << "9) �������� �� ���������� " << derev << " ������\n";
					std::cout << "10) ���������� " << ice << " ������\n";
					std::cout << "11) �������� ������� " << pirozh << " ������\n";
					std::cout << "12) ����-���� " << kola << " ������\n";
					std::cout << "13) ������ " << sprite << " ������\n";
					std::cout << "14) ����� " << fanta << " ������\n";
					std::cout << "15) ���������� ����-���� " << klubmil << " ������\n";
					std::cout << "16) ��������� ����-���� " << bananmil << " ������\n";
					std::cout << "0) ����� �� ����� ����\n";
					std::cout << "������� ����� --> ";
					std::cin >> console;

					if (console == 1)
					{
						std::cout << "������� ����� ���� ��� ��������� ����� --> ";
						std::cin >> bavar;
					}
					else if (console == 2)
					{
						std::cout << "������� ����� ���� ��� ��������� ����� --> ";
						std::cin >> gavai;
					}
					else if (console == 3)
					{
						std::cout << "������� ����� ���� ��� ����� 4 ���� --> ";
						std::cin >> cheeses;
					}
					else if (console == 4)
					{
						std::cout << "������� ����� ���� ��� �������� ����� --> ";
						std::cin >> peperon;
					}
					else if (console == 5)
					{
						std::cout << "������� ����� ���� ��� ������ ����� --> ";
						std::cin >> meet;
					}
					else if (console == 6)
					{
						std::cout << "������� ����� ���� ��� ������ ����� --> ";
						std::cin >> ches;
					}
					else if (console == 7)
					{
						std::cout << "������� ����� ���� ��� ����� � ��������� --> ";
						std::cin >> ciplen;
					}
					else if (console == 8)
					{
						std::cout << "������� ����� ���� ��� �������� ��� --> ";
						std::cin >> fri;
					}
					else if (console == 9)
					{
						std::cout << "������� ����� ���� ��� �������� �� ����������� --> ";
						std::cin >> derev;
					}
					else if (console == 10)
					{
						std::cout << "������� ����� ���� ��� ���������� --> ";
						std::cin >> ice;
					}
					else if (console == 11)
					{
						std::cout << "������� ����� ���� ��� ��������� ���������� --> ";
						std::cin >> pirozh;
					}
					else if (console == 12)
					{
						std::cout << "������� ����� ���� ��� ����-���� --> ";
						std::cin >> kola;
					}
					else if (console == 13)
					{
						std::cout << "������� ����� ���� ��� ������� --> ";
						std::cin >> sprite;
					}
					else if (console == 14)
					{
						std::cout << "������� ����� ���� ��� ����� --> ";
						std::cin >> fanta;
					}
					else if (console == 15)
					{
						std::cout << "������� ����� ���� ��� ����������� ����-����� --> ";
						std::cin >> klubmil;
					}
					else if (console == 16)
					{
						std::cout << "������� ����� ���� ��� ���������� ����-����� --> ";
						std::cin >> bananmil;
					}
				}

			}
		}

		while (zacus != 0)
		{
			std::cout << "\n\n��������� �������:\n";
			std::cout << "1) �������� ��� " << fri << " ������\n";
			std::cout << "2) �������� �� ���������� " << derev << " ������\n";
			std::cout << "3) ���������� " << ice << " ������\n";
			std::cout << "4) �������� ������� " << pirozh << " ������\n";
			std::cout << "0) ���� �� ������ ������� ��� ��������� � �������\n";
			std::cout << "������� ����� ������� --> ";
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
				std::cout << "\n\n�������� �� ������ ��� � ����� ���� =(\n\n";
				continue;
			}
			else if (zacus == 0)
			{
				std::cout << "\n����� ������� = " << sum1;
				continue;
			}
		}
		
		while (napit != 0)
		{
			std::cout << "\n\n��������� �������:\n";
			std::cout << "1) ����-���� " << kola << " ������\n";
			std::cout << "2) ������ " << sprite << " ������\n";
			std::cout << "3) ����� " << fanta << " ������\n";
			std::cout << "4) ���������� ����-���� " << klubmil << " ������\n";
			std::cout << "5) ��������� ����-���� " << bananmil << " ������\n";
			std::cout << "0) ���� ������ �� ������ ��� ��������� � �������\n";
			std::cout << "������� ����� ������� --> ";
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
					std::cout << "\n�� ��������� ���� � �������!";
					std::cout << "\n����� �������� = " << sum2;
					zaccaz1 = 0;
				}
				else if (zaccaz1 < 3)
				{
					std::cout << "\n����� �������� = " << sum2;
				}
			}
			else if (napit == 3)
			{
				sum2 = sum2 + fanta;
				zaccaz1 = zaccaz1 + 1;
				if (zaccaz1 >= 3)
				{
					nap = nap + 1;
					std::cout << "\n�� ��������� ���� � �������!";
					std::cout << "\n����� �������� = " << sum2;
					zaccaz1 = 0;
				}
				else if (zaccaz1 < 3)
				{
					std::cout << "\n����� �������� = " << sum2;
				}
			}
			else if (napit == 4)
			{
				sum2 = sum2 + klubmil;
				zaccaz1 = zaccaz1 + 1;
				if (zaccaz1 >= 3)
				{
					nap = nap + 1;
					std::cout << "\n�� ��������� ���� � �������!";
					std::cout << "\n����� �������� = " << sum2;
					zaccaz1 = 0;
				}
				else if (zaccaz1 < 3)
				{
					std::cout << "\n����� �������� = " << sum2;
				}
			}
			else if (napit == 5)
			{
				sum2 = sum2 + bananmil;
				zaccaz1 = zaccaz1 + 1;
				if (zaccaz1 >= 3)
				{
					nap = nap + 1;
					std::cout << "\n�� ��������� ���� � �������!";
					std::cout << "\n����� �������� = " << sum2;
					zaccaz1 = 0;
				}
				else if (zaccaz1 < 3)
				{
					std::cout << "\n����� �������� = " << sum2;
				}
			}
			else if (napit < 0 || napit > 5)
			{
				std::cout << "\n\n�������� �� ������ ��� � ����� ���� =(\n\n";
				continue;
			}
			else if (napit == 0)
			{
				std::cout << "\n�� ��������� " << nap << " ��� � �������!";
				std::cout << "\n����� �������� = " << sum2;
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
			std::cout << "\n\n\n�� ��������� " << pizz << " ����� ��������� ����� ���������!\n";
			std::cout << "�� ��������� " << nap << " ���� ���������!\n";
			std::cout << "�������� ����� ������ ���������� " << itogsum << " ������\n";
			std::cout << "����� ������ = " << skid << "\n\n\n";
		}
		else if (pizz > 0 && nap <= 0)
		{
			std::cout << "\n\n\n�� ��������� " << pizz << " ����� ��������� ����� ���������!\n";
			std::cout << "�������� ����� ������ �� ������� ���������� " << itogsum << " ������\n";
			std::cout << "����� ������ = " << skid << "\n\n\n";
		}
		else if (pizz <= 0 && nap > 0)
		{
			std::cout << "\n\n\n�� ��������� " << nap << " ���� ���������!\n";
			std::cout << "�������� ����� ������ ���������� " << itogsum << " ������\n";
			std::cout << "����� ������ = " << skid << "\n\n\n";
		}
		else if (pizz <= 0 && nap <= 0)
		{
			std::cout << "\n\n\n�������� ����� ������ ���������� " << itogsum << " ������\n";
			std::cout << "����� ������ = " << skid << "\n\n\n";
		}
	}

	return 0;
}