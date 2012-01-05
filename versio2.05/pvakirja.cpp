//============================================================================
// Name        : pvakirja.cpp
// Author      : Elina Lahdensuu,
// opnro 	   : 225486
// Version     : versio 2.1 päivitetty 19.12.2011
// Copyright   : Your copyright notice
// Description : Ajopäivakirja
//============================================================================
using namespace std;
#include <iostream>
#include <string>
#include "Maksutapa.h"
#include "Kuljettaja.h"
#include "Paivays.h"
#include "Ajoneuvo.h"
#include "Ajot.h"
#include "Ajovuoro.h"

int main() {

	/*
	 *  aloitetaan ajovuoro*/
	Ajovuoro *ajoa = new Ajovuoro();
	ajoa ->tt;
	ajoa ->min;
	Paivays *pvmaara =new Paivays();
	pvmaara.KysyPaivays();
	pvmaara.TulostaPaivays();
	/*
	 * Valitaan ajoneuvo*/
	Ajoneuvo *taxi = new Ajoneuvo();
	this->merkki(m);
	/*
	 * Valitaan kuljettaja*/
	kuljettaja *suhari = new Kuljettaja();
	this->ktunnus(kt);

	/*
	 *  lisätään ajo*/
	Ajot *ajetaan = new Ajot();
	ajetaan->uusi;
	ajetaan->memo;

	/*
	 *  lopetetaan ajovuoro*/
	Paivays *pvmaara2 =new Paivays();
	pvmaara2.KysyPaivays();
	pvmaara2.TulostaPaivays();
	Ajovuoro *lopetus = new Ajovuoro();
	this->t;
	this->m;
	return 0;

	/*Ajovuoron raportit**/
	ajoa ->TulostaAjetut();
	ajoa->TulostaProsAjot();
	ajoa->TulostaYlityot();

}
