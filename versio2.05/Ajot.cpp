/*
 * Ajot.cpp
 *
 *  Created on: 3.12.2011
 *  p‰ivitetty 19.12.2011
 *      Author: Elinan
 */
#include <string>;
#include <iostream>
#include "Ajot.h"
#include "Ajoneuvo.h"
#include "Kuljettaja.h"
#include "Ajovuoro.h"
#include "Paivays.h"
#include "Maksutapa.h"
using namespace std;

Ajot::Ajot() {
	// TODO Auto-generated constructor stub
}

void lisaAjo(bool taas) {
	switch (taas) {
	case 1:
		taas = 1;
		break;
	case 0:
		taas = 0;
		cout<<"ei uutta ajoa"<<endl;
		return;
		break;
	}
}
void KysyMaksutapa(int maksuvaline) {
	int mvaline = this->maksuvaline;
}
void TulostaMaksutapa(int mvaline) {
	return this ->mvaline;
}
void TulostaAjosumma(double summa, double apusumma) {
	apusumma = maksu.Maksutapa();
	cout << "Maksettu " << cin >> apusumma;
	return ;
}
void KysyAlklo(int tt, int min, bool taas = 1) {

	cout << "kello: tunti";
	cin >> this->tt;
	cout << "kello: minuutti";
	cin >> this->min;
	cin >> tt << ":" << cout << ":" << cin >> min;
	return;

}
void KysyLklo(int t, int m) {

	cout << "kello: tunti";
	cin >> this->t;
	cout << "kello: minuutti";
	cin >> this->m;
	cin >> tt << ":" << cout << ":" << cin >> min;
	return;

}/*tt ja min alkuaika, t ja m loppuaika*/
void KysyAjontunnit(int tt, int t, int min, int m, int at, int amin) {
	int tunnit;
	int aput;
	/*Jos alkutunti on pienempi kuin lopputunnit niin lasketaan t‰m‰ tuntim‰‰r‰**/
	if (tt %24< t%24) {
		for (int i = 0; tt <= t; i++) {
			aputt++;
			tunnit = tt;
			for (int j = m; min <= m; j++) {
				amin = j;
				apumin = amin;
			}
			cin >> tt << ":" << cout << ":" << cin >> min;
		}
		return;

	}	/*Jos alkutunti on suurempi kuin lopputunnit niin lasketaan tuntim‰‰r‰**/

	if (tt %24 >= t %24) {
	int avrk;
	int lvrk;
		for	(int i = 0; tt >=t; i++) {
		aputt++;
		tunnit = tt;
		avrk=tt<=vrk;
		lvrk=t<=vrk;
		at = i;
		for(j = m; min <=m; j++) {
			amin = j;
			apumin = amin;
		}
		cin>>at<<":"<<cout<<":"<<cin>>amin;
	}

}

}
void TulostaAjontunnit(int tt, int t, int min, int m, int at, int amin) {
void KirjoitaMemo(String memo){
	 cout<< "kirjoita muistiin:"<<cin>>memo<<endl;
	 return 0;
}
void TulostaMemo(String memo){
	 return memo;
}
Ajot.KirjoitaMemo();
Ajot TulostaMemo();
int main() {
	Ajot alkuklo;
	alkuklo.KysyAlklo();
	alkuklo.TulostaAlklo();
	Ajot loppulklo;
	loppuklo.Kysylklo();
	loppuklo.Tulostalklo();
	Ajot ajotunnit();
	ajotunnit.KysyAjontunnit();

return 0;
}

