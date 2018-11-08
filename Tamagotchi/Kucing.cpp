#include "pch.h"
#include "Kucing.h"
#include <fstream>
#include <windows.h>


Kucing::Kucing(string name)
	:Pet::Pet(name){
}


void Kucing::activities(){
	while (1){
		ifstream file("catStand.txt");
		cout << file.rdbuf() << endl;
		cout << "====================================" << endl;
		cout << "	Pet Status" << endl;
		cout << "====================================" << endl;
		cout << "Nama kucing	: " << Kucing::getName() << endl;
		cout << "Hungry level	: " << Kucing::printStatHungry() << endl;
		cout << "Happiness level	: " << Kucing::printStatHappy() << endl;
		cout << "Status	: " << Kucing::printStat() << endl;
		cout << "====================================" << endl;
		cout << endl;

		int in;
		cout << "Ajak "<< Kucing::getName() << " untuk :" << endl;
		cout << "1. Tidur" << endl;
		cout << "2. Bermain" << endl;
		cout << "3. Makan" << endl;
		cout << "9. Exit" << endl;
		cout << "Pilih : ";

		cin >> in;
		system("CLS");
		if (in == 1){
			cout << "Z . . .";
			Sleep(800);
			system("CLS");
			cout << "Z z . . .";
			Sleep(800);
			system("CLS");
			cout << "Z z z . . .";
			Sleep(800);
			system("CLS");
			ifstream file("catSleep.txt");
			cout << file.rdbuf() << endl;
			cout << endl << "Ssssssttttt...." << endl << Kucing::getName() << " sedang tidur pulas~" << endl;
			Kucing::modStatHungry(1);
			Kucing::modStatHappy(1);
		}else if (in == 2){
			Kucing::play();
		}
		else if (in == 3){
			int h;
			h = Kucing::getStatHungry();
			if (h >= 100) {
				cout << "tidak mau makan! kenyang, mew!" << endl;
			}
			else {
				Kucing::eat();
			}
		}
		else if (in == 9){
			Kucing::really();
		}
		else{
			cin.clear();
			cout << "Tidak ada pilihan yang sesuai membuat " << Kucing::getName() << " sedih." << endl;
		}
		system("PAUSE");
		system("CLS");
	}
}

void Kucing::eat(){
	int pilihan;
	cout << "Pilih (nomer) makanan yang diberikan : " << endl;
	cout << "1. Cat Food" << endl;
	cout << "2. Ikan" << endl;
	cout << "3. Nasi" << endl << endl;
	cout << "9. kembali ke menu utama" << endl;
	cout << "Masukkan pilihan : ";
	cin >> pilihan;
	system("CLS");
	if (pilihan==1){
		cout << Kucing::getName() << " sangat suka dengan makanan kucing ini. mew~" << endl;
		Kucing::modStatHungry(2);
	}
	else if (pilihan==2){
		cout << "Mew~ ikan favorit " << Kucing::getName() << endl;
		Kucing::modStatHungry(2);
	}
	else if(pilihan == 3){
		cout << Kucing::getName() << " tidak suka makan nasi" << endl;
		Kucing::modStatHappy(1);
	}
	else if (pilihan == 9){
		Kucing::activities();
	}else{
		cin.clear();
		cout << "Wah! sepertinya kamu harus membelikan jenis makanan baru untuk " << Kucing::getName() << endl;
	}
	system("PAUSE");
	system("CLS");
	Kucing::activities();
}

void Kucing::play() {
	int input;
	cout << "Ajak dia bermain : " << endl;
	cout << "1. bola" << endl;
	cout << "2. tali" << endl;
	cout << "3. tikus-tikusan" << endl;
	cout << "4. kotak kardus" << endl;
	
	cin >> input;
	system("CLS");

	if (input == 1) {
		ifstream file("catBall.txt");
		cout << file.rdbuf() << endl;
		cout << " Meewww~~" << endl;
		Sleep(800);
		cout << " " << Kucing::getName() << " sangat senang dengan bola ini." << endl;
		Kucing::modStatHungry(1);
		Kucing::modStatHappy(2);
	}
	else if (input == 2) {
		ifstream file("catBenang.txt");
		cout << file.rdbuf() << endl;
		Sleep(800);
		cout << " Gulungan benang ini membuat " << Kucing::getName() << " merasa tenang." << endl;
		Kucing::modStatHungry(1);
		Kucing::modStatHappy(2);
	}
	else if (input == 3) {
		ifstream file("catMouse.txt");
		cout << file.rdbuf() << endl;
		cout << " Mew! mew!!" << endl;
		Sleep(800);
		cout << " " << Kucing::getName() << " dengan gesit mengakpa tikus itu" << endl;
		Sleep(900);
		cout << " dan . . ." << endl;
		Sleep(1000);
		cout << " Tikus itu membuat " << Kucing::getName() << " lapar." << endl;
		Kucing::modStatHungry(1);
		Kucing::modStatHappy(2);
	}
	else if (input == 4) {
		ifstream file("catKotak.txt");
		cout << file.rdbuf() << endl;
		Sleep(800);
		cout << " Hmm..." << endl;
		Sleep(800);
		cout << " Kemana " << Kucing::getName() << " bersembunyi?" << endl;
		Kucing::modStatHungry(1);
		Kucing::modStatHappy(2);
	}
	else {
		cin.clear();
		cout << "Hmmm... sepertinya kamu harus membuat mainan baru untuk " << Kucing::getName() << endl;
	}
	system("PAUSE");
	system("CLS");
	Kucing::activities();
}

void Kucing::really() {
	cout << "yakin ingin meninggalkan " << Kucing::getName() << "??" << endl;
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
		cout << "Terimakasih telah mau bermain dengan " << Kucing::getName() << endl;
		Sleep(1000);
		cout << ":(" << endl;
		exit(0);
	}
	else if (in == 2) {
		cin.clear();
		system("CLS");
		Kucing::activities();
	}
	else {
		cin.clear();
		system("CLS");
		cout << "hanya ada dua pilihan di dunia ini. iya atau tidak sama sekali :)" << endl;
		cout << endl;
		Kucing::really();
	}
}