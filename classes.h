#ifndef CLASES_PARA_EL_PROYECTO
#define CLASES_PARA_EL_PROYECTO

#include "Types.h"


class CTexto{
	private:
		vector<string> Vtexto;
	public:
		CTexto(){}
		~CTexto(){}
		
		Vid setContenido(string);
		
		Vid mostrar();
		
		Vid guardar(string);
		
		Vid justificar();
		
		Vid izquierda();
		
		Vid derecha();
		
		Vid centrar();
		
};


#endif
