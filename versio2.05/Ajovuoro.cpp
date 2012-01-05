/*
 * Ajovuoro.cpp
 *
 *  Created on: 3.12.2011
 *  p‰ivitetty 19.12.2011
 *      Author: Elinan
 */
using namespace std;
#include "Paivays.h"
#include "Ajovuoro.h"
#include "Ajoneuvo.h"
#include "Kuljettaja.h"
#include "Ajot.h"

Ajovuoro::Ajovuoro() {
	// TODO Auto-generated constructor stub

}

Ajovuoro::~Ajovuoro() {
	// TODO Auto-generated destructor stub
}

void kysyAlkuPv(int pv, int kk, int vv){
	cout<<"Anna alkup‰iv‰ys"<<endl;
	cin>>this->pv;
	cin>>this->kk;
	cin>>this->vv;
	string = pv+"."+kk+"."+vv;
}
void kysyLoppuPv(int pv, int kk, int vv){
	cout<<"Anna loppup‰iv‰ys"<<endl;
	cin>>this->pv;
	cin>>this->kk;
	cin>>this->vv;
	string = pv+"."+kk+"."+vv;
}
/*kysyt‰‰n ajovuoron saika
 ***/
void kysyAlkuKlo(int tt, int min, ){
	/*kysyt‰‰n ajovuoron alkamisaika**/
	cout<<"kello: ";
	cout<<"tunti";
	cin>>this->tt;
	cout<<"kello: minuutti";
	cin>>this->min;
	cin>>tt<<":"<cout<<":"<<cin>>min;
	return;
}
void kysyLoppuKlo(int t, int m){
	/*kysyt‰‰n ajovuoron lopppumisaika**/

	cout<<"kello: ";
	cout<<"tunti";
	cin>>this->t;
	cout<<"kello: minuutti";
	cin>>this->m;
	cin>>t<<":"<cout<<":"<<cin>>m;
	return;
}
void

int main()
{
	Ajovuoro *uusi = new Ajovuoro();
	uusi-> kysyAlkpva();
	uusi-> kysyLoppukpva();
	uusi.kysyAlkuKlo();
	uusi.kysyLoppuPv();
	uusi.kysyLoppuKlo();
	uusi.laskeTunnit();
	uusi.tulostaTunnit();
	return uusi;
	delete uusi;

}
