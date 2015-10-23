#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

using std::cout;
using std::cin;
using std::string;

#include "Computador.h"

Computador::Computador(const Computador &C)
{
	this->placaMae = C.placaMae;
	this->placaVideo = C.placaVideo;
	this->processador = C.processador;
	this->nucleoProcessador = C.nucleoProcessador;
	this->discoRigido = C.discoRigido;
	this->memoriaRAM = C.memoriaRAM;
}

Computador::Computador(const string &motherBoard, const string &video, const string &processador, int nucleo, int hd, int ram) 
{
	this->motherBoard = "";
	this->video = "";
	this->processador = "";
	this->nucleo = 0;
	this->hd = 0;
	this->ram = 0;
}

void Computador::setPlacaMae(string &motherBoard)
{
	placaMae = (motherBoard == "AT" || motherBoard == "ATX") ? motherBoard : " ";
}

void Computador::setPlacaVideo(string &video)
{
	placaVideo = (video == "On-Board" ||video == "Off-Board") ? video : " ";
}

void Computador::setProcessador(string &processador, int nucleo)
{
	processador = (processador == "Intel" || processador == "AMD") ? processador : " ";
	nucleoProcessador = (nucleo == 2 || nucleo == 4) ? nucleo : 0;
}

void Computador::setMemoria(int hd, int ram)
{
	discoRigido = (hd >= 0 && hd < 1024) ? hd : 0;
	memoriaRAM = (ram >= 0 && ram < 1024) ? ram : 0;
}

void Computador::getComputador()
{
	cout<<"Propriedades do Computador:\n";
	cout<<"\nPlaca-Mãe: "<<placaMae;
	cout<<"\nPlaca de Vídeo: "<<placaVideo;
	cout<<"\nProcessador: "<<processador<<" "<<nucleoProcessador<<" núcleos";
	cout<<"\nDisco Rígido: "<<discoRigido;
	cout<<"\nMemória RAM: "<<memoriaRAM;
}

