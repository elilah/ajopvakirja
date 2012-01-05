/*
 * Kuljettaja.cpp
 *
 *  Created on: 3.12.2011
 *  päivitetty 19.12.2011
 *      Author: Elinan
 */

#include "Kuljettaja.h"

using namespace std;

Kuljettaja::Kuljettaja() {
	// TODO Auto-generated constructor stub

}

Kuljettaja::Kuljettaja(std::string nimi, std::string enimi, std::string snimi, int ktunnus) {
	// TODO Auto-generated constructor stub
	Kuljettaja *kuski1 = new Kuljettaja();
	kuski1->enimi("Antti");
	kuski1->snimi("Ajavainen");
	kuski1-> nimi(enimi+" "+ snimi);
	kuski1 ->ktunnus(1);

	Kuljettaja *kuski2 = new Kuljettaja();
	kuski2-> enimi("Kalle");
	kuski2-> snimi("Kaasujalka");
	kuski2 -> nimi(enimi+" "+ snimi);
	kuski2 ->ktunnus(2);

	Kuljettaja *kuski3 = new Kuljettaja();
	kuski3-> enimi("Riku");
	kuski3-> snimi("Riemukas");
	kuski3 -> nimi(enimi+" "+ snimi);
	kuski3 ->ktunnus(3);

	switch(ktunnus){
	case 1:
		//cout<<kuski1;
		return kuski1;
		break;
	case 2:
		//cout<<kuski2->(this.enimi+" "+ this.snimi);
		return kuski2;
		break;
	case 3:
		//cout<<kuski3->(this.enimi+" "+ this.snimi);
		return kuski3;
		break;
	}
	//Muistin vapautus
	delete kuski1;
	delete kuski2;
	delete kuski3;
}
Kuljettaja::TulostaKuljettaja(string nimi){
	return this->nimi;
}

void Kuljettaja::setKtunnus(std::string nimi, int kt) {
	this->ktunnus = kt;
	return this ->nimi;
}


