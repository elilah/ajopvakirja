/*
 * Maksutapa.cpp
 *
 *  Created on: 3.12.2011
 *      Author: Elinan
 */
#include <iostream>
using namespace std;
#include <string>
#include "Maksutapa.h"

Maksutapa::Maksutapa() {
	// TODO Auto-generated constructor stub

}

Maksutapa::~Maksutapa() {
	// TODO Auto-generated destructor stub
}

void Maksutapa::KysyMaksutapa(int maksuvaline, int maara) {
	/*
	 * Suoritetaan kysely maksun suorittamis tavasta.
	 */
	Maksutapa *maksu = new Maksutapa();
	/*Oletuksena maksutapoja on vähintään yksi*/
	maara = 1;
	cout << "käteinen 1, kela 2, sote 3, pankki 4, visaE 5. ja luotto 6:";
	cout << "anna maksuvaline: ";
	cin >> maksuvaline;
	maksu->maksuvaline;
	cout << "monellako tavalla halua maksaa: ";
	cin >> maara;
	return this->maksu.maara;
}
void Maksutapa::Maksa(int maksuvaline, int maara, double laskutus, double summa,
		double ajettusumma, double apus) {
	maara = 1;
	maksu.maara = this->Maksutapa();
	/*Makstapoja on niin monta kuin on määrää*/
	do
	(maksu.maara > 0)	{
		/*Valitaan sopiva maksutapa*/
		cout << "käteinen 1, kela 2, sote 3, pankki 4, visaE 5 jaluotto 6:"
				<< endl;
		cout << "matka teki yhteensä: " + maksu.ajettusumma << endl;
		cin >> summa << endl;
		cin >> maksu.maksuvaline << endl;
		switch (maksu.maksuvaline) {
		case 1:
			cout << "maksuvälineenä: käteinen" << endl;
			cout << "matka teki yhteensä: " + ajettusumma << endl;
			cout << "maksettu:" << endl
			cin >> summa << endl;
			break;
		case 2:
			cout << "maksuvälineenä: kela" << endl;
			cout << "matka teki yhteensä: " + ajettusumma << endl;
			cout << "maksettu:" << endl
			cin >> summa << endl;
			break;
			break;
		case 3:
			cout << "maksuvälineenä: sote" << endl;
			cout << "matka teki yhteensä: " + ajettusumma << endl;
			cout << "maksettu:" << endl
			cin >> summa << endl;
			break;
			break;
		case 4:
			cout << "maksuvälineenä: pankki" << endl;
			cout << "matka teki yhteensä: " + ajettusumma << endl;
			cout << "maksettu:" << endl
			cin >> summa << endl;
			break;
		case 5:
			cout << "maksuvälineenä: visa Elektron" << endl;
			cout << "matka teki yhteensä: " + ajettusumma << endl;
			cout << "maksettu:" << endl
			cin >> summa << endl;
			break;
		case 6:
			cout << "maksuvälineenä: luotto" << endl;
			cout << "matka teki yhteensä: " + ajettusumma << endl;
			cout << "maksettu:" << endl
			cin >> summa << endl;
			break;
		}
		/*Vähennetään maksettuosuus kokonaissummasta ja tarkistetaan jääkö vielä maksettavaa.*/
		apus = ajettusumma - summa;
		ajettusumma = apus;
	}
	while (maksu.ajettusumma = 0, 00);
}
void Maksutapa::TulostaAjosumma() {
	double *apusumma = ajettusumma;
	cout << "ajosta tuli ";
	cin >> maksu.apusumma;
}
void Maksutapa::TulostaMaksutapa() {
	double *valine = maksuvaline;
	cout << "ajon maksutapa on" + maksu.valine;
}
int main() {
	Maksutapa maksu;
	maksu.Maksutapa();
	return maksu;
}

