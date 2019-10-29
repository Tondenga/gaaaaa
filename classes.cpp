#include "classes.h"


Vid CTexto::setContenido(string nombreArchivo){
		string lineasDeTexto;
		ifstream Iarchivo;
	
		Iarchivo.open(nombreArchivo.c_str(),ios::in);
		
		if(Iarchivo.fail()){
			cout<<"Archivo no encontrado";
		}
		else{
			while(!Iarchivo.eof()){
				getline(Iarchivo,lineasDeTexto);
				Vtexto.push_back(lineasDeTexto);
			}
		}
		Iarchivo.close();
}
	
Vid CTexto::mostrar(){
		for(int i=0;i<Vtexto.size();i++){
			cout<<Vtexto[i]<<endl;
		}	
		cout<<endl;
}

Vid CTexto::guardar(string nombreArchivo){
	ofstream Oarchivo;
	
	Oarchivo.open(nombreArchivo.c_str(),ios::out);
	
	if(Oarchivo.fail()){
		cout<<"imposible guardar\n";
	}
	else{
	for(int i=0;i<Vtexto.size();i++){
		if(i<Vtexto.size()-1)
			Oarchivo<<Vtexto[i]<<"\n";
		else
			Oarchivo<<Vtexto[i];
	}
	}
	Oarchivo.close();
}

Vid CTexto::justificar(){
	vector<string> _Vtexto(Vtexto.size(),"");
	int max=0;
	int count=0;
	int temp;
	
	for(int i=0;i < Vtexto.size();i++)//tama�o de la linea mas grande
		if(Vtexto[i].size()>max)
			max=Vtexto[i].size();
	
	for(int i=0;i < Vtexto.size();i++){//entramos a una linea
		count=0;
		for(int j=0;j < Vtexto[i].size();j++){//recorremos la linea buscando espacios
			if(Vtexto[i][j]==' ')
				count++;
			}
		
		if(count!=0)				
			temp=(max-Vtexto[i].size())/count;//hallamos los espacios extras que se necesitan tener para llegar al maximo
		else
			temp=0;
				
				
		for(TIPET j=0;j < Vtexto[i].size();j++){
			//agregamos las letras
			_Vtexto[i]+=Vtexto[i][j];
						
			if(Vtexto[i][j]==' ')//agregamos los espacios
				for(TIPET a=0;a<temp;a++)
					_Vtexto[i]+=' ';
		}
	}
	Vtexto=_Vtexto;
}

Vid CTexto::izquierda(){
	vector<string> _Vtexto(Vtexto.size(),"");
	int count=0;
	
	for(int l=0;l < Vtexto.size();l++){
		for(int c=0;c < Vtexto[l].size();c++){	
			if(Vtexto[l][c]==' ')//cuenta los espacios
				count++;
			else
				count=0;
			//si hay 2 espacios seguidos el contador sera > q 1, sino volvera a 0
			
			if(count<2)//asi de 2 espacios seguidos queda solo 1
				_Vtexto[l]+=Vtexto[l][c];
			}
		}
		for(int l=0;l < Vtexto.size();l++)
			if(_Vtexto[l][0]==' ')
				_Vtexto[l][0]=8;//8 es el caracter de retroceso en ascii
		
		Vtexto=_Vtexto;
	}
	
Void CTexto::derecha(){
	vector<string> _Vtexto(Vtexto.size(),"");
	int max=0;
	int temp;
	
	for(int l=0;l < Vtexto.size();l++)
		if(Vtexto[l].size()>max)
			max=Vtexto[l].size();
			
	for(int l=0;l < Vtexto.size();l++){
		temp=max-Vtexto[l].size();
		
		for(int j=0;j<temp;j++)
			_Vtexto[l]+=' ';//caracter nulo en ascii
			
		_Vtexto[l]+=Vtexto[l];
	}
	Vtexto=_Vtexto;
}

Vid CTexto::centrar(){
	vector<string> _Vtexto(Vtexto.size(),"");
	int max=0;
	int temp;
	
	for(int l=0;l < Vtexto.size();l++)
		if(Vtexto[l].size()>max)
			max=Vtexto[l].size();
			
	for(int l=0;l < Vtexto.size();l++){
		temp=(max-Vtexto[l].size())/2;
		
		for(int j=0;j<temp;j++)
			_Vtexto[l]+=' ';
			
		_Vtexto[l]+=Vtexto[l];
	}
	Vtexto=_Vtexto;
}
