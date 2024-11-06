
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <Windows.h>


using namespace std;



int xy[2],wybor;
int prawo, lewo, gura, dol, klawisz;

int wonszx, wonszy;
int japkox, japkoy;
int kamienx, kamieny;

int dlugosc = 2, starawx[10000], starawy[10000], ile = 0;

char pole[50][50], kierunek='g';
char waz = 219, jap = 176, kam = 178, rogi[4] = { 188, 187, 201, 200 }, sciany[2] = {205, 186};

void ekranpowitalny() {
	cout << endl<< "Snake the game!!!"<< endl;
	cout << "1 - gra" << endl
		<< "2 - legenda" << endl 
		<< "3 - informacje" << endl 
		<< "4 - wyjdz" << endl;
	cin >> wybor;
}

void wymiary1() {
	cout << "Podaj szerokosc planszy od 10 do 50:\n";
	cin >> xy[ 0 ];
	if (xy[0] < 10 || xy[0] > 50)
	{
		cout << "mialo byc od 10 do 50 jeszcze raz\n";
		wymiary1();
	}
}

void wymiary2() {
	cout << "Podaj wysokosc planszy od 10 do 50:\n";
	cin >> xy[1];
	if (xy[1] < 10 || xy[1] > 50)
	{
		cout << "mialo byc od 10 do 50 jeszcze raz\n";
		wymiary2();
	}
}

void przpklawisze() {
	cout << "nacisnij klawisz kturym chcesz grac"<<endl;
	cout <<endl<< "gura";
	gura = _getch();
	if (gura == 224) gura += _getch();
	if (gura == 0) gura -= _getch();
	cout << endl << "dol";
	dol = _getch();
	if (dol == 224) dol += _getch();
	if (dol == 0) dol -= _getch();
	cout << endl << "lewo";
	prawo = _getch();
	if (prawo == 224) prawo += _getch();
	if (prawo == 0) prawo -= _getch();
	cout << endl << "prawo";
	lewo = _getch();
	if (lewo == 224) lewo += _getch();
	if (lewo == 0) lewo -= _getch();
	cout <<endl<< "klawisze przypisane!";
}

void czyszczenie(int x, int y) 
{
	HANDLE hCon;
	COORD dwPos;

	dwPos.X = x;
	dwPos.Y = y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon, dwPos);
}

void ramka() {
	czyszczenie(0, 0);
	cout << rogi[2];
	for (int i = 0; i < xy[0]; i++)
	{
		cout << sciany[0] << sciany[0];
	}
	cout << rogi[1];
	for (int i = 0; i < xy[1]; i++)
	{
		cout << endl << sciany[1];

		for (int j = 0; j < xy[0]; j++)
		{
			if (pole[j][i] == 'p') { cout << "  "; }
			if (pole[j][i] == 'w') { cout << waz << waz; }
			if (pole[j][i] == 'j') { cout << jap << jap; }
			if (pole[j][i] == 'k') { cout << kam << kam; }
		}

		cout << sciany[1];
	}

	cout << endl;
	cout << rogi[3];
	for (int i = 0; i < xy[0]; i++)
	{
		cout << sciany[0] << sciany[0];
	}
	cout << rogi[0];

	
}

void legenda() {
	cout << "legenda: " << endl
		<< "snake: " << waz << waz << endl
		<< "japko: " << jap << jap << endl
		<< "kamol: " << kam << kam << endl;
}

void info() {
	cout << "Autor: Tomasz Sobinek" << endl
		<< "Co zorbilem sam: wiekszosc kodu" << endl
		<< "Co zacyganilem od hindusa z internetu: plynne odswierzanie snake'a (funkcje czyszczenie) i wyglad snake'a" << endl;
}

void snake() {

	for (int i = 0; i < xy[1]; i++)
	{

		for (int j = 0; j < xy[0]; j++)
		{
			pole[j][i] = 'p';
		}

	}
	srand(time(NULL));

	wonszx = rand() % xy[0];
	wonszy = rand() % xy[1];

	pole[wonszx][wonszy] = 'w';

	do {
		japkox = rand() % xy[0];
		japkoy = rand() % xy[1];

	} while (pole[japkox][japkoy] != 'p');

	pole[japkox][japkoy] = 'j';

	do {
		kamienx = rand() % xy[0];
		kamieny = rand() % xy[1];

	} while (pole[kamienx][kamieny] != 'p');

	pole[kamienx][kamieny] = 'k';

	system("CLS");
	ramka();

	for (;;) {
		ile++;
		starawx[ile] = wonszx;
		starawy[ile] = wonszy;







		Sleep(120);
		if (_kbhit())
		{
			klawisz = _getch();
			if (klawisz == 224)klawisz += _getch();
			if (klawisz == 0)klawisz -= _getch();

			if (klawisz == gura && (kierunek == 'l' || kierunek == 'p')) kierunek = 'g';
			if (klawisz == dol && (kierunek == 'l' || kierunek == 'p')) kierunek = 'd';
			if (klawisz == prawo && (kierunek == 'g' || kierunek == 'd')) kierunek = 'p';
			if (klawisz == lewo && (kierunek == 'g' || kierunek == 'd')) kierunek = 'l';

		}



		if (kierunek == 'g') wonszy--;
		if (kierunek == 'd') wonszy++;
		if (kierunek == 'p') wonszx--;
		if (kierunek == 'l') wonszx++;



		if (wonszx == xy[0]) wonszx = 0;
		if (wonszx == -1) wonszx = xy[0] - 1;
		if (wonszy == xy[1]) wonszy = 0;
		if (wonszy == -1) wonszy = xy[1] - 1;


		if (pole[wonszx][wonszy] == 'w' || pole[wonszx][wonszy] == 'k') {
			czyszczenie(0, xy[1] + 4);
			cout << endl << "przegrales twoj wynik to: " << dlugosc - 2 << endl;

			break;
		}


		if (pole[wonszx][wonszy] == 'j') {
			dlugosc++;
			do {
				kamienx = rand() % xy[0];
				kamieny = rand() % xy[1];

			} while (pole[kamienx][kamieny] != 'p');

			pole[kamienx][kamieny] = 'k';
			czyszczenie(kamienx * 2 + 1, kamieny + 1);
			cout << kam << kam;
			do {
				japkox = rand() % xy[0];
				japkoy = rand() % xy[1];

			} while (pole[japkox][japkoy] != 'p');

			pole[japkox][japkoy] = 'j';
			czyszczenie(japkox * 2 + 1, japkoy + 1);
			cout << jap << jap;

		}


		else {
			pole[starawx[ile - dlugosc]][starawy[ile - dlugosc]] = 'p';
			czyszczenie(starawx[ile - dlugosc] * 2 + 1, starawy[ile - dlugosc] + 1);
			cout << "  ";
		}

		pole[wonszx][wonszy] = 'w';
		czyszczenie(wonszx * 2 + 1, wonszy + 1);
		cout << waz << waz;


	}
	cout << "nacisnij dowolny klawisz aby kontynuowac";
	_getch();
}

int main()
{
	for (;;) {
		ekranpowitalny();

		switch (wybor)
		{
		case 1:
			wymiary1();
			wymiary2();
			cout << "wymiary planszy to: " << xy[0] << "x" << xy[1] << endl;
			przpklawisze();
			Sleep(500);
			snake();
			system("CLS");
			break;
		case 2:
			system("CLS");
			legenda();
			break;
		case 3:
			system("CLS");
			info();
			break;
		case 4:
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}
