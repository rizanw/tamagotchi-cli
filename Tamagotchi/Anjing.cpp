#include "pch.h"
#include "Anjing.h"
#include <fstream>
#include <windows.h>


Anjing::Anjing(string name)
	:Pet::Pet(name) {
}


void Anjing::activities() {
	while (1) {
		ifstream file("dogStand.txt");
		cout << file.rdbuf() << endl;
		cout << "====================================" << endl;
		cout << "	Pet Status" << endl;
		cout << "====================================" << endl;
		cout << "Nama anjing	: " << Anjing::getName() << endl;
		cout << "Hungry level	: " << Anjing::printStatHungry() << endl;
		cout << "Happiness level	: " << Anjing::printStatHappy() << endl;
		cout << "Status	: " << Anjing::printStat() << endl;
		cout << "====================================" << endl;
		cout << endl;

		int in;
		cout << "Ajak " << Anjing::getName() << " untuk :" << endl;
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
			system("CLS");
			ifstream file("dogSleep.txt");
			cout << file.rdbuf() << endl;
			cout << endl << "Ssssssttttt...." << endl << Anjing::getName() << " sedang tidur pulas~" << endl;
			Anjing::modStatHungry(1);
			Anjing::modStatHappy(1);
		}
		else if (in == 2) {
			Anjing::play();
		}
		else if (in == 3) {
			int h;
			h = Anjing::getStatHungry();
			if (h >= 100) {
				cout << "tidak mau makan! kenyang, rufff!" << endl;
			}
			else {
				Anjing::eat();
			}
		}
		else if (in == 9) {
			Anjing::really();
		}
		else {
			cin.clear();
			cout << "Tidak ada pilihan yang sesuai membuat " << Anjing::getName() << " sedih." << endl;
		}
		system("PAUSE");
		system("CLS");
	}
}

void Anjing::eat() {
	int pilihan;
	cout << "Pilihan makanan : " << endl;
	cout << "1. Dog Food" << endl;
	cout << "2. Tulang" << endl;
	cout << "3. Nasi" << endl << endl;
	cout << "9. kembali ke menu utama" << endl;
	cout << "Masukkan pilihan : ";
	cin >> pilihan;
	system("CLS");
	if (pilihan == 1) {
		cout << "Ruff!! rufff!!!" << endl;
		cout << Anjing::getName() << " sangat suka dengan makanan anjing ini." << endl;
		Anjing::modStatHungry(2);
	}
	else if (pilihan == 2) {
		cout << "Rufff!!!" << endl;
		cout << "Tulang ini favorit " << Anjing::getName() << endl;
		Anjing::modStatHungry(2);
	}
	else if (pilihan == 3) {
		cout << Anjing::getName() << " tidak suka makan nasi" << endl;
		Anjing::modStatHappy(1);
	}
	else if (pilihan == 9) {
		Anjing::activities();
	}
	else {
		cin.clear();
		cout << "Wah! sepertinya kamu harus membelikan jenis makanan baru untuk " << Anjing::getName() << endl;
	}
	system("PAUSE");
	system("CLS");
	Anjing::activities();
}

void Anjing::play() {
	int input;
	cout << "Ajak dia bermain : " << endl;
	cout << "1. bola" << endl;
	cout << "2. piring terbang" << endl;
	cout << "3. tulang plastik" << endl;

	cin >> input;
	system("CLS");

	if (input == 1) {
		cout << " Ruff~~" << endl;
		Sleep(800);
		cout << " " << Anjing::getName() << " sangat senang dengan bola ini." << endl;
		Anjing::modStatHungry(1);
		Anjing::modStatHappy(2);
	}
	else if (input == 2) {
		cout << " Hap!!" << endl;
		Sleep(800);
		cout << Anjing::getName() << " meloncat tinggi untuk mengkapnya." << endl;
		Anjing::modStatHungry(1);
		Anjing::modStatHappy(2);
	}
	else if (input == 3) {
		cout << " Arrrggggg!!" << endl;
		Sleep(800);
		cout << " Tulang itu membuat " << Anjing::getName() << " lapar." << endl;
		Anjing::modStatHungry(1);
		Anjing::modStatHappy(2);
	}
	else {
		cin.clear();
		cout << "Hmmm... sepertinya kamu harus membuat mainan baru untuk " << Anjing::getName() << endl;
	}
	system("PAUSE");
	system("CLS");
	Anjing::activities();
}

void Anjing::really() {
	cout << "yakin ingin meninggalkan " << Anjing::getName() << "??" << endl;
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
		cout << "Terimakasih telah mau bermain dengan " << Anjing::getName() << endl;
		Sleep(1000);
		cout << ":(" << endl;
		exit(0);
	}
	else if (in == 2) {
		cin.clear();
		system("CLS");
		Anjing::activities();
	}
	else {
		cin.clear();
		system("CLS");
		cout << "hanya ada dua pilihan di dunia ini. iya atau tidak sama sekali :)" << endl;
		cout << endl;
		Anjing::really();
	}
}