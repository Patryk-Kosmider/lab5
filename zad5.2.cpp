#include <iostream>
#include <vector>
#include <array>
#include <iomanip>

using namespace std;

int main() {

	cout << "Podaj rozmiar tablicy : " << endl;
	int x;
	cin >> x;

	vector <int> tab(x);

	cout << "Podaj elementy: " << endl;


	int el;

	for (int i = 0; i < x; i++) {
		cin >> el;
		tab[i] = el;
	}

	int dl = size(tab);

	int pol = dl / 2;
	int pom;

	cout << "Tablica wejsciowa: " << endl;

	for(int i = 0; i < pol; i++)
	{
		cout << tab[i] << setw(5) << tab[i + pol] << endl;
	}

	for(int i = 0 ; i < pol; i++)
	{
		pom = tab[i];
		tab[i] = tab[i + pol];
		tab[i + pol] = pom;
	}

	cout << "Tablica wyjsciowa: " << endl;

	for (int i = 0; i < pol; i++)
	{
		cout << tab[i] << setw(5) << tab[i + pol] << endl;
	}





	return 0;

}