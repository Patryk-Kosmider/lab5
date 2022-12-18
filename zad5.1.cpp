#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {

	cout << "Podaj ilosc elementow : " << endl;
	int x;
	cin >> x;

	vector <int> tab(x);

	cout << "Podaj elementy: " << endl;


	int el;

	for (int i = 0; i < x; i++) {
		cout << "Podaj " << i << " element: " << endl;
		cin >> el;
		tab[i] = el;
	}

	int max = tab[0];

	for (int i = 0; i < x; i++) {
		if (max < tab[i]) {
			max = tab[i];
		}
	}

	int pozycja;

	for (int i = 0; i < x; i++) {
		if (max == tab[i]) {
			pozycja = i;
		
		}

	}



	cout << "Najwiekszy element to: " << max << endl;
	cout << "Na pozycji: " << pozycja << endl;











	return 0;

}