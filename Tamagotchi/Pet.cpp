#include "pch.h"
#include "Pet.h"



Pet::Pet(string name){
	setName(name);
}

void Pet::setName(string name){
	this->name = name;
}

string Pet::getName(){
	return this->name;
}

void Pet::setStatHappy(int happy) {
	happyStatus = happy;
}

int Pet::getStatHappy() {
	return happyStatus;
}

void Pet::modStatHappy(int mod) {
	int now;
	now = Pet::getStatHappy();

	if (mod == 1) {
		now = now - 20;
	}
	else if (mod == 2) {
		now = now + 20;
	}
	Pet::setStatHappy(now);
}

string Pet::printStatHappy() {
	int stat;
	stat = Pet::getStatHappy();

	if (stat == 0) {
		this->statHappy = " ";
	}
	else if (stat == 20) {
		this->statHappy = "**";
	}
	else if (stat == 40) {
		this->statHappy = "****";
	}
	else if (stat == 60) {
		this->statHappy = "******";
	}
	else if (stat == 80) {
		this->statHappy = "********";
	}
	else if (stat == 100) {
		this->statHappy = "**********";
	}

	return this->statHappy;
}


void Pet::setStatHungry(int hungry) {
	hungryStatus = hungry;
}

int Pet::getStatHungry() {
	return hungryStatus;
}

void Pet::modStatHungry(int mod) {
	int now;
	now = Pet::getStatHungry();

	if (mod == 1) {
		now = now - 20;
	}
	else if (mod == 2) {
		now = now + 20;
	}
	Pet::setStatHungry(now);
}

string Pet::printStatHungry() {
	int stat;
	stat = Pet::getStatHungry();

	if (stat == 0) {
		this->statHungry = " ";
	}
	else if (stat == 20) {
		this->statHungry = "**";
	}
	else if (stat == 40) {
		this->statHungry = "****";
	}
	else if (stat == 60) {
		this->statHungry = "******";
	}
	else if (stat == 80) {
		this->statHungry = "********";
	}
	else if (stat == 100) {
		this->statHungry = "**********";
	}

	return this->statHungry;
}

string Pet::printStat() {
	int hap = Pet::getStatHappy();
	int hun = Pet::getStatHungry();

	if (hun < 20) {
		this->status = "segera beri makan! sebelum mati kelaparan!";
	}else if (hap < 20 && hun <= 20) {
		this->status = "tidak bahagia dan sangat kelaparan";
	}
	else if(hap <= 80 && hun <= 80 ){
		this->status = "bahagia dan kenyang";
	}
	else if(hap > 80 && hun > 80){
		this->status = "sangat bahagia dan sangat kenyang";
	}
	else{
		this->status = "Tebak! apa yg aku rasakan?";
	}

	return this->status;
}