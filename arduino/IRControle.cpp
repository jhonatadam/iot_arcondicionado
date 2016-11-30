#include "IRControle.hpp"

IRControle::IRControle(
		unsigned long ligar_codigo, unsigned long desli_codigo, 
		unsigned long aumen_codigo, unsigned long dimin_codigo, int nbits)
{
	this->ligar_codigo = ligar_codigo;
	this->desli_codigo = desli_codigo;
	this->aumen_codigo = aumen_codigo;
	this->dimin_codigo = dimin_codigo;
	this->nbits        =        nbits;
}

void IRControle::ligar()
{
  irsend.sendSony(this->ligar_codigo, this->nbits);
}
	
void IRControle::desligar()
{
  irsend.sendSony(this->desli_codigo, this->nbits);
}
	
void IRControle::aumentar_temp()
{
  irsend.sendSony(this->aumen_codigo, this->nbits);
}
	
void IRControle::diminuir_temp()
{
  irsend.sendSony(this->dimin_codigo, this->nbits);
}

