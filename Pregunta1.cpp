void agregar(Data x){
	SetTDA.insert(x);
}
Data sacar(){
	SetTDA.delete();
}
bool estaVacio(){
	SetTDA.isEmpty()
}
bool pertenece(Data x){
	if(estaVacio()==0){
		while(estavacio()!=1){
			if(saca()==x){
				break;
				return 1;
			}
		}
	}
	return 0;
}
ConjuntoTDA interseccion(Conjunto c){
	if(estaVacio()&&c.estaVacio()){
		return -1;
	}
	if(estaVacio()){
		return c;
	}//asumiendo que tiene constructor.
	Conjunto b;
	while(c.estaVacio()==0||estaVacio()==0){
		z=c.sacar();
		y=sacar();
		if(z==y){
			b.agregar(z);
		}
		if(z!=y){
			b.agregar(z);
			b.agregar(y);
		}
	}
}
ConjuntoTDA union(Conjunto c){
	if(estaVacio()&&c.estaVacio()){
		return -1;
	}
	if(estaVacio()){
		return c; 
		}
	Conjunto b;
	while(c.estaVacio()&&estaVacio()){
		z=c.sacar();
		y=sacar();
		if(z==y){
			b.agregar(z);
		}else{
		b.insertar(z);
		b.insertar(y);
	    }
	}
}