/*
 * Ajovuoro.cpp
 *
 *  Created on: 3.12.2011
 *      Author: Elinan
 */
using namespace std;
#include "Ajovuoro.h"

Ajovuoro::Ajovuoro() {
	// TODO Auto-generated constructor stub

}

Ajovuoro::~Ajovuoro() {
	// TODO Auto-generated destructor stub
}

void kysyAlkuPv(int pv, int kk, int vv){
	cout<<"Anna alkupäiväys"<<endl;
	cin>>pv;
	cin>>kk;
	cin>>vv;
	string = pv+"."+kk+"."+vv;
}
void kysyAlkuKlo(int tt, int min, int at, int amin){
	cout<<"kello: ";
	cout<<"tunti";
	cin>>this->tt;
	cout<<"kello: minuutti";
	cin>>this->tt;
	cin>>this->min;
	amin = this->min;
	cin>>at cout<<":"<<cin>>amin;
	return;
}
void laskeTunnit (int tt, int tunnit, int att, int pva, int apva,int lpva, int min,int amin, int min,int lmin,int ltt, int vrk, int pv){
while(apva != lpva){
	for(int i = 0; att<24; i++){
		tt = i++;
		att++;
		tunnit = tt;
		for(int im = 00; amin <60; im++){
			int min = im++;
		}
		return;

	}int apu = tunnit;
	for(int j=0; ltt>00; j--){
		apu++;
		int apumin;
		for(int jm = 00; lmin <60; jm++){
					apumin = jm++;

	}

	}

}
}
int main()
{
	Ajovuoro *uusi = new Ajovuoro();
	uusi-> kysyAlkpva();
	uusi.kysyAlkuKlo();
	uusi.kysyLoppuPv();
	uusi.kysyLoppuKlo();
	uusi.laskeTunnit();
	uusi.tulostaTunnit();
	return uusi;
}
