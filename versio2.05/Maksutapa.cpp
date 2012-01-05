/*
 * Maksutapa.cpp
 *
 *  Created on: 3.12.2011
 *  p‰ivitetty 19.12.2011
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
	/*Oletuksena maksutapoja on v‰hint‰‰n yksi*/
	maara = 1;
	cout << "k‰teinen 1, kela 2, sote 3, pankki 4, visaE 5. ja luotto 6:";
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
	/**Makstapoja on niin monta kuin on m‰‰r‰‰**/
	while (maksu.ajettusumma = 0, 00){
		/*Valitaan sopiva maksutapa*/
		cout << "k‰teinen 1, kela 2, sote 3, pankki 4, visaE 5 jaluotto 6:"
				<< endl;
		cout << "matka teki yhteens‰: " + maksu.ajettusumma << endl;
		cin >> summa << endl;
		cin >> maksu.maksuvaline << endl;
		switch (maksu.maksuvaline) {
		case 1:
			cout << "maksuv‰lineen‰: k‰teinen" << endl;
			cout << "matka teki yhteens‰: " + ajettusumma << endl;
			cout << "maksettu:" << endl;
			cin >> summa << endl;
			break;
		case 2:
			cout << "maksuv‰lineen‰: kela" << endl;
			cout << "matka teki yhteens‰: " + ajettusumma << endl;
			cout << "maksettu:" << endl;
			cin >> summa << endl;
			break;
			break;
		case 3:
			cout << "maksuv‰lineen‰: sote" << endl;
			cout << "matka teki yhteens‰: " + ajettusumma << endl;
			cout << "maksettu:" << endl;
			cin >> summa << endl;
			break;
			break;
		case 4:
			cout << "maksuv‰lineen‰: pankki" << endl;
			cout << "matka teki yhteens‰: " + ajettusumma << endl;
			cout << "maksettu:" << endl;
			cin >> summa << endl;
			break;
		case 5:
			cout << "maksuv‰lineen‰: visa Elektron" << endl;
			cout << "matka teki yhteens‰: " + ajettusumma << endl;
			cout << "maksettu:" << endl;
			cin>> summa <<endl;
			break;
		case 6:
			cout << "maksuv‰lineen‰: luotto" << endl;
			cout << "matka teki yhteens‰: " + ajettusumma << endl;
			cout << "maksettu:" << endl;
			cin >> summa << endl;
			break;
		}
		/*V‰hennet‰‰n maksettuosuus kokonaissummasta ja tarkistetaan j‰‰kˆ viel‰ maksettavaa.*/
		apus = ajettusumma - summa;
		ajettusumma = apus;
	}
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

