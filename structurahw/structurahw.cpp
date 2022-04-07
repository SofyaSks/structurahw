#include <iostream>
#include <string>
using namespace std;

struct movies {
	string title;
	int year = 0;
	string genre;
	int duration = 0;
	int price = 0;
} a, b, c;

void showmovie(movies& n) {
	cout << "The movie \"" << n.title << "\" was released in " << n.year << " year. ";
	cout << "The genre is " << n.genre << " and duration is " << n.duration << " hours. ";
	cout << "Price for one CD is " << n.price << " rubles.\n\n";
}
int expensive(movies& a, movies& b, movies& c) {
	if (a.price > b.price && a.price > c.price)
		return a.price;
	else
		if (b.price > a.price && b.price > c.price)
			return b.price;
		else 
			if (c.price > a.price && c.price > b.price)
				return c.price;
}
void updateinfo(movies &n) {
	int num;
	cout << "Выберите информацию, которую хотите обновить:\n";
	cout << "1.Название;\n2.Год выхода;\n3.Жанр;\n4.Продолжительность;\n5.Цена за диск;\nВвод ->";
	cin >> num;
		if (num == 1) {
			cout << "Введите новое название: ";
			string str1;
			getline(cin, str1);
			n.title = str1;
			cout << "Вы изменили название фильма на \"" << n.title << "\"\n";
		}
		else
			if (num == 2) {
				cout << "Введите новый год выхода: ";
				int nyear;
				cin >> nyear;
				n.year = nyear;
				cout << "Вы изменили год на " << n.year << "\n\n";
			}
			else
				if (num == 3) {
					string str2;
					cout << "Введите  жанр: ";
					getline(cin, str2);
					n.genre = str2;
					cout << "Вы изменили жанр на " << n.genre << "\n\n";
				}
				else
					if (num == 4) {
						cout << "Введите продолжительность: ";
						int d;
						cin >> d;
						n.duration = d;
						cout << "Вы изменили продолжительность на " << n.duration << "\n\n";
					}
					else
						if (num == 5) {
							cout << "Введите новую цену: ";
							int p;
							cin >> p;
							n.price = p;
							cout << "Вы изменили цену на " << n.price << "\n\n";
						}
						else
							cout << "ОШИБКА";

}

int main() {
	setlocale(LC_ALL, "ru");

	a = { "Titanic", 1995, "romance", 2, 100 };
	b = { "Spiderman", 2002, "action", 3, 200 };
	c = { "Hatiko", 2000, "drama", 3, 150 };


	showmovie(c);
	cout << expensive(a, b, c);
	cout << endl << endl;
	updateinfo(a);
	


return 0;
}