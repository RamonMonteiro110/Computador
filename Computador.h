#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include <iostream>
#include <string>

using std::ostream;

class Computador {
	
	friend ostream &operator<<(ostream &, const Computador &);
	
public:
	
	Computador(string & = "", string & = "", string & = "", int = 0, int = 0, int= 0);
	Computador(const Computador &);
	
	  void setPlacaMae(string &);
      void setProcessador(string &, int);
      void setMemoria(int, int);
      void setPlacaVideo(string &);
	  void getComputador();
      
private:
	
       int memoriaRAM;
	   int discoRigido;
	   int nucleoProcessador;
       string processador;
	   string placaMae;
	   string placaVideo;  
	        
       
};

#endif
