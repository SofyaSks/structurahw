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
	cout << "�������� ����������, ������� ������ ��������:\n";
	cout << "1.��������;\n2.��� ������;\n3.����;\n4.�����������������;\n5.���� �� ����;\n���� ->";
	cin >> num;
		if (num == 1) {
			cout << "������� ����� ��������: ";
			string str1;
			getline(cin, str1);
			n.title = str1;
			cout << "�� �������� �������� ������ �� \"" << n.title << "\"\n";
		}
		else
			if (num == 2) {
				cout << "������� ����� ��� ������: ";
				int nyear;
				cin >> nyear;
				n.year = nyear;
				cout << "�� �������� ��� �� " << n.year << "\n\n";
			}
			else
				if (num == 3) {
					string str2;
					cout << "�������  ����: ";
					getline(cin, str2);
					n.genre = str2;
					cout << "�� �������� ���� �� " << n.genre << "\n\n";
				}
				else
					if (num == 4) {
						cout << "������� �����������������: ";
						int d;
						cin >> d;
						n.duration = d;
						cout << "�� �������� ����������������� �� " << n.duration << "\n\n";
					}
					else
						if (num == 5) {
							cout << "������� ����� ����: ";
							int p;
							cin >> p;
							n.price = p;
							cout << "�� �������� ���� �� " << n.price << "\n\n";
						}
						else
							cout << "������";

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