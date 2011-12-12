/*
 * Ajot.h
 *
 *  Created on: 3.12.2011
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
		int vrk = 24;

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

			void kysyAlkuKlo();
			void kysyLoppuKlo();
			void lisaAjo();

			Ajot *uusi = new Ajot();
	Ajot();
	virtual ~Ajot();


};

#endif /* AJOT_H_ */
