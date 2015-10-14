#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include <iostream>
#include <string>

using std::ostream;

class Computador {
	
	friend ostream &operator<<(ostream &, const Computador &);
	
public:
	
	Computador();
	Computador(string, string, string, int static, int const, int);
	        
      void setPlacaMae(string);
      void setProcessador(string, int);
      void setMemoria(int static, int const);
      void setPlacaVideo(string);
      void getComputador();
      
protected:
	
       int static memoriaRAM;
	   int const discoRigido;
	   int nucleoProcessador;
       string processador;
	   string placaMae;
	   string placaVideo;       
       
};

#endif
