/*
 * Paivays.cpp
 *
 *  Created on: 19.12.2011
 *  p�ivitetty 19.12.2011
 *      Author: Elina Lahdensuu
 */

#include "Paivays.h"

Paivays::Paivays() {
	// TODO Auto-generated constructor stub

}

Paivays::~Paivays() {
	// TODO Auto-generated destructor stub
}
void Paivays::KysyPaivays(){
cout << "Anna ajovuoron p�iv�m��r�: ";
cin >> pv;
cout <<" kk:";
cin >> kk;
cout <<" vvvv:";
cin >> vuosi;
}
void Paivays::TulostaPaivays(){
cout << "P�iv�ys:" << pv << "." << kk << "." << vuosi << endl;
}

int main()
{
Paivays alkupva;
alkupva.KysyPaivays();
alkupva.TulostaPaivays();

Paivays loppupva;
loppupva.KysyPaivays();
loppupva.TulostaPaivays();
}
