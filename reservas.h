#pragma once

#include <string>
#include "oferta.h"
#include "Data.h"

using namespace std;

class Reserva {
private:
	Data data;
	unsigned long nif;
	string nomeCliente;
	Oferta* oferta;
public:
	Reserva();
	Reserva(Data data, unsigned long nif, string nomeCliente, Oferta* oferta);
	Data getData() const;
	unsigned long getNif() const;
	string getNomeCliente() const;
	void setNif(unsigned long Nif);
	void setNomeCliente(string nome);
	void setData(int dia, int mes);
	Oferta* getOferta() const;
	bool operator < (const Reserva r2) const;
	bool operator == (const Reserva r2) const;

};
