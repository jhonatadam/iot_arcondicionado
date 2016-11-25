#ifndef IRControle_hpp
#define IRControle_hpp

#include <IRremote.h>

class IFControle () 
{
public:
	IRControle(
		unsigned long ligar_codigo, unsigned long desli_codigo, 
		unsigned long aumen_codigo, unsigned long dimin_codigo, int nbits);

	void ligar();
	void desligar();
	void aumentar_temp();
	void diminuir_temp();

private:
	unsigned long ligar_codigo;
	unsigned long desli_codigo;
	unsigned long aumen_codigo;
	unsigned long dimin_codigo;
	int nbits;
};

#endif