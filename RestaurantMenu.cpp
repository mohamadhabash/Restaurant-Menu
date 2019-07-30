#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <thread>
#include <windows.h>
using namespace std;
void main()
{
	{
		int choice, choice2;
		double bill = 0;
		system("color 4B");
		cout << "Code written by:Mohammed Habash" << endl << endl << endl;
		cout << "H   H    EEEEE   L       L        OOOOO" << endl;
		cout << "H   H    E       L       L       O     O " << endl;
		cout << "H   H    E       L       L       O     O " << endl;
		cout << "HHHHH    EEEEE   L       L       O     O " << endl;
		cout << "H   H    E       L       L       O     O " << endl;
		cout << "H   H    E       L       L       O     O" << endl;
		cout << "H   H    EEEEE   LLLLL   LLLLL    OOOOO" << endl;
		std::this_thread::sleep_for(3s);
		system("cls");
		cout << "\a";
		cout << "Please choose background and font colors:\n1-Blue and white\n2-Black and yellow\n";
		cin >> choice;
		Beep(440, 500);
		switch (choice)
		{
		case 1: system("color 1F "); break;
		case 2: system("color 0E"); break;
		default:cout << "Wrong choice! I will set the colors for you";
			system("color 3D");
			std::this_thread::sleep_for(3s);
		}
		system("cls");
		cout << "After you finish your order:PLease insert 0 to show your bill\n\n";
		while (choice != 0)
		{

			cout << "Please choose one of the following:\n1-Food\n2-Drinks\n3-Desserts\n";
			cin >> choice;
			cout << "\a";
			switch (choice)
			{
			case 1:
				cout << "Please choose one of the following:\n1-Mansaf (5JD)\n2-Kabseh (5JD)\n3-Musakhan (5JD)\n4-Makloobeh (5JD)\n";
				cin >> choice;
				cout << "\a";
				if (choice == 1) bill += 5;
				else if (choice == 2) bill += 5;
				else if (choice == 3) bill += 5;
				else if (choice == 4) bill += 5;
				else {
					cout << "You have not chosen a number of the previous.\n";
					break;
				}
				if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
					cout << "Do you want extra chicken with your food? (2 JD)\n1-Yes\n2No\n";
				cin >> choice2;
				if (choice2 == 1) bill += 2;
				else if (choice2 == 2) bill = bill;
				else cout << "You have not chosen any number of the previous.\n";
				break;

			case 2:
				cout << "Please choose one of the following:\n1-Pepsi (1 JD)\n2-Tea (0.50 JD)\n3-Coffee(0.75 JD)\n4-Milkshake (2 JD)\n";
				cin >> choice;
				cout << "\a";
				if (choice == 1) bill += 1;
				else if (choice == 2) bill += 0.50;
				else if (choice == 3) bill += 0.75;
				else if (choice == 4) bill += 2;
				else {
					cout << "You have not chosen a number of the previous.\n";
					break;
				}
				if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
					cout << "Do you want extra sugar with you drink? (0.25JD)\n1-Yes\n2-No\n";
				cin >> choice2;
				if (choice2 == 1) bill += 0.25;
				else if (choice2 == 2) bill = bill;
				else cout << "You have not chosen a number of the previous.\n";
				break;
			case 3:
				cout << "Please choose one of the following:\n1-Cupcakes (2 JD)\n2-Waffle (3 JD)\n3-Kunafah (1.50 JD)\n4-Hareeseh (1 JD)\n";
				cin >> choice;
				cout << "\a";
				if (choice == 1) bill += 2;
				else if (choice == 2) bill += 3;
				else if (choice == 3) bill += 1.50;
				else if (choice == 4) bill += 1;
				else cout << "You have not chosen a number of the previous.\n";
				break;
			case 0: break;
			default: cout << "You have not chosen a number of the previous.\n";
			}
		}
		cout << "Your bill is : " << setprecision(2) << fixed << bill << " JD.\n";
		cout << "Thank you very much for choosing us! Have a nice meal!";
	}

}
