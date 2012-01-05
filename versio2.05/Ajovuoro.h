/*
 * Ajovuoro.h
 *
 *  Created on: 3.12.2011
 *  p‰ivitetty 19.12.2011
 *      Author: Elinan
 */

#ifndef AJOVUORO_H_
#define AJOVUORO_H_
#include "Ajovuoro.h"
#include "Kuljettaja.h"
#include "Ajoneuvo.h"
#include "Maksutapa.h"
#include "Ajot.h"


class Ajovuoro {
private:
	int alku;
	int loppu;
	double palkka;
Maksutapa::TulostaAjosumma(ajettusumma);
Kuljettaja::TulostaKuljettaja(nimi);
Ajoneuvo::TulostaTaksi(merkki);
class vuoro: public Ajovuoro, public Ajot{
	int pva;
	int apva;
	int lpva;
	int alkut;
	int alkum;
	int lopput;
	int loppum;
	int tuntia;
};
	/*
		 * M‰‰ritell‰‰n ajon konstruktorit*/
		int pv;
		int kk;
		int vv;
		int tt;
		int mm;
		int tt;
		int vrk = 24;
protected:
public:
		//lis‰t‰‰n uusiajo
		void tulostaAjotunnit();
		void TulostaAjetut() const;
		void TulostaProsAjot();
		void TulostaYlityot();

		//lis‰t‰‰n uusiajo
		bool taas;
		/*Ajoon liittyv‰ muistiinpano*/
		string memo;
		void kysyAlkuPv();
		void kysyAlkuKlo();
		void kysyLoppuPv();
		void kysyLoppuKlo();
		void laskeTunnit();

		class ylityo: public Ajovuoro{

		};
		class prosentti: public Ajovuoro{

		};
		class kuljettaja: public Kuljettaja{
			kuski1;
		};
		class ajoneuvo: public Ajoneuvo{
			taksi1;
		};
		class lisaAjo: public Ajot{
			uusi;
		};

	Ajovuoro();
	virtual ~Ajovuoro();
};

#endif /* AJOVUORO_H_ */
