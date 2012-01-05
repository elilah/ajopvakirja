/*
 * Ajot.h
 *
 *  Created on: 3.12.2011
 *   p‰ivitetty 19.12.2011
 *      Author: Elinan
 */

using namespace std;
#ifndef AJOT_H_
#define AJOT_H_

class Ajot {
private:
	/**
	 * M‰‰ritell‰‰n ajon konstruktorit
	 * */
		int tt;
		int mm;
		int t;
		int m;
		int att;
		int amm;
		int avrk;
		int lvrk;

		string osoite;
protected:
		int pva;
		int apva;
		int lpva;

public:
		/*Ajoon liittyv‰ muistiinpano*/
		string memo;
		void TulostaMemo();
		//lis‰t‰‰n uusiajo
		bool taas;
		//lis‰t‰‰n tulostetaan ajon tunnit
		void TulostaAjontunnit();

			void kysyAlkuKlo();
			void kysyLklo();
			void kysyAjontunnit();

			void lisaAjo();

			Ajot *uusi = new Ajot();
	Ajot();
	class KysyMaksutapa: public Maksutapa{
		maksu;


			};
	virtual ~Ajot();


};

#endif /* AJOT_H_ */
