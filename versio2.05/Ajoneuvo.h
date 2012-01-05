/*
 * Ajoneuvo.h
 *
 *  Created on: 3.12.2011
 *  päivitetty 19.12.2011
 *      Author: Elinan
 */

#ifndef AJONEUVO_H_
#define AJONEUVO_H_



class Ajoneuvo {
public:
	Ajoneuvo();
	virtual ~Ajoneuvo();
public:
	//ajoneuvon merkki ja tunnus
	int merkki;
	int tunnus;

protected:
  void TulostaTaksi();
  void Laskeloppukm();
  void alkukm();
 virtual void setMerkki(int m);
};
class km: public Ajoneuvo{

	int km;
	int lkm;
	int apukm;
	bool taas = 1;
};

#endif /* AJONEUVO_H_ */
