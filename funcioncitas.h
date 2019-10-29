#ifndef Funciones_para_el_main
#define Funciones_para_el_main

#include "clases/classes.cpp"


Int Menu(){
	TIPET numero;
	
	cout<<"|=============================================================================|\n";
	cout<<"Funcionalidades:::"<<endl;
	cout<<"Leer[0]\nGuardar[1]\njustificar[2]\nA la Izquierda[3]\nA la Derecha[4]\nAl Centro[5]\nBuscar[6]\nReemplazar[7]\nContar[8]\nEncriptar[9]\nDesencriptar[10]"<<endl;
	cout<<"|=============================================================================|"<<endl;
	
	cin>>numero;
	
	return numero;
}

Vid leer(CTexto &texto){
	texto.mostrar();
}

Vid guardar(CTexto &texto,string &nombreArchivo){
	texto.guardar(nombreArchivo);
	
	cout<<"\nProceso finalizado\n\n";
}

just(CTexto &texto){
	texto.izquierda();
	texto.justificar();
	texto.mostrar();
}

Vid izq(CTexto &texto){
	texto.izquierda();
	texto.mostrar();
}

der(CTexto &texto){
	texto.derecha();
	texto.mostrar();
}

cen(CTexto &texto){
	texto.izquierda();
	texto.centrar();
	texto.mostrar();
}

buscar(CTexto &texto){

}

reemplazar(CTexto &texto){}

contar(CTexto &texto){}

ncrpt(CTexto &texto){}

dncrpt(CTexto &texto){}

#endif
