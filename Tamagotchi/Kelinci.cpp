#include "pch.h"
#include "Kelinci.h"
#include <fstream>
#include <windows.h>


Kelinci::Kelinci(string name)
	:Pet::Pet(name) {
}


void Kelinci::activities() {
	while (1) {
		ifstream file("rabbitStand.txt");
		cout << file.rdbuf() << endl;
		cout << "====================================" << endl;
		cout << "	Pet Status" << endl;
		cout << "====================================" << endl;
		cout << "Nama Kelinci	: " << Kelinci::getName() << endl;
		cout << "Hungry level	: " << Kelinci::printStatHungry() << endl;
		cout << "Happiness level	: " << Kelinci::printStatHappy() << endl;
		cout << "Status		: " << Kelinci::printStat() << endl;
		cout << "====================================" << endl;
		cout << endl;

		int in;
		cout << "Ajak " << Kelinci::getName() << " untuk :" << endl;
		cout << "1. Tidur" << endl;
		cout << "2. Bermain" << endl;
		cout << "3. Makan" << endl;
		cout << "9. Exit" << endl;
		cout << "Pilih : ";

		cin >> in;
		system("CLS");
		if (in == 1) {
			cout << "Z . . .";
			Sleep(800);
			system("CLS");
			cout << "Z z . . .";
			Sleep(800);
			system("CLS");
			cout << "Z z z . . .";
			Sleep(800);
			cout << endl << "Ssssssttttt...." << endl << Kelinci::getName() << " sedang tidur pulas~" << endl;
			Kelinci::modStatHungry(1);
			Kelinci::modStatHappy(1);
		}
		else if (in == 2) {
			Kelinci::play();
		}
		else if (in == 3) {
			int h;
			h = Kelinci::getStatHungry();
			if (h >= 100) {
				cout << "tidak mau makan! kenyang!" << endl;
			}
			else {
				Kelinci::eat();
			}
		}
		else if (in == 9) {
			Kelinci::really();
		}
		else {
			cin.clear();
			cout << "Tidak ada pilihan yang sesuai membuat " << Kelinci::getName() << " sedih." << endl;
		}
		system("PAUSE");
		system("CLS");
	}
}

void Kelinci::eat() {
	int pilihan;
	cout << "Pilih (nomer) makanan yang diberikan : " << endl;
	cout << "1. Sayuran" << endl;
	cout << "2. Wortel" << endl;
	cout << "3. Nasi" << endl << endl;
	cout << "9. kembali ke menu utama" << endl;
	cout << "Masukkan pilihan : ";
	cin >> pilihan;
	system("CLS");
	if (pilihan == 1) {
		cout << Kelinci::getName() << " sangat suka dengan sayuran ini." << endl;
		Kelinci::modStatHungry(2);
	}
	else if (pilihan == 2) {
		cout << "Wortel favorit " << Kelinci::getName() << endl;
		Kelinci::modStatHungry(2);
	}
	else if (pilihan == 3) {
		cout << Kelinci::getName() << " tidak suka makan nasi" << endl;
		Kelinci::modStatHappy(1);
	}
	else if (pilihan == 9) {
		Kelinci::activities();
	}
	else {
		cin.clear();
		cout << "Wah! sepertinya kamu harus membelikan jenis makanan baru untuk " << Kelinci::getName() << endl;
	}
	system("PAUSE");
	system("CLS");
	Kelinci::activities();
}

void Kelinci::play() {
	int input;
	cout << "Ajak dia bermain : " << endl;
	cout << "1. bola" << endl;
	cout << "2. tali" << endl;
	cout << "3. kotak kardus" << endl;

	cin >> input;
	system("CLS");

	if (input == 1) {
		Sleep(800);
		cout << " " << Kelinci::getName() << " sangat senang dengan bola ini." << endl;
		Kelinci::modStatHungry(1);
		Kelinci::modStatHappy(2);
	}
	else if (input == 2) {
		Sleep(800);
		cout << " Gulungan benang ini membuat " << Kelinci::getName() << " penasaran." << endl;
		Kelinci::modStatHungry(1);
		Kelinci::modStatHappy(2);
	}
	else if (input == 3) {
		Sleep(800);
		cout << " Hmm..." << endl;
		Sleep(800);
		cout << " Kemana " << Kelinci::getName() << " bersembunyi?" << endl;
		Kelinci::modStatHungry(1);
		Kelinci::modStatHappy(2);
	}
	else {
		cin.clear();
		cout << "Hmmm... sepertinya kamu harus membuat mainan baru untuk " << Kelinci::getName() << endl;
	}
	system("PAUSE");
	system("CLS");
	Kelinci::activities();
}

void Kelinci::really() {
	cout << "yakin ingin meninggalkan " << Kelinci::getName() << "??" << endl;
	int in;
	cout << "1. Ya :(" << endl;
	cout << "2. Tidak :)" << endl;
	cin >> in;
	if (in == 1) {
		system("CLS");
		cout << ". ";
		Sleep(1000);
		system("CLS");
		cout << ". . ";
		Sleep(1000);
		system("CLS");
		cout << ". . . ";
		Sleep(1000);
		cout << endl;
		cout << "ByeBye~" << endl;
		Sleep(1000);
		cout << "Terimakasih telah mau bermain dengan " << Kelinci::getName() << endl;
		Sleep(1000);
		cout << ":(" << endl;
		exit(0);
	}
	else if (in == 2) {
		cin.clear();
		system("CLS");
		Kelinci::activities();
	}
	else {
		cin.clear();
		system("CLS");
		cout << "hanya ada dua pilihan di dunia ini. iya atau tidak sama sekali :)" << endl;
		cout << endl;
		Kelinci::really();
	}
}