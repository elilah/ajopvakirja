/*
 * Maksutapa.h
 *
 *  Created on: 3.12.2011
 *      Author: Elinan
 */

#ifndef MAKSUTAPA_H_
#define MAKSUTAPA_H_

class Maksutapa {
	Maksutapa();
public:
	void KysyMaksutapa();
	void TulostaMaksutapa();
	void Maksa();
	void TulostaAjosumma();

	virtual ~Maksutapa();
private:
	int kateinen =1;
	int kela = 2;
	int sote = 3;
	int pankki = 4;
	int luotto = 6;
	int visaE = 5;
	int maksuvaline;
	double ajettusumma;
	double osa;
	double laskutus;
	double maara;
protected:
};

#endif /* MAKSUTAPA_H_ */
