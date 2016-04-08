class Item{
	public:
		string valor;
		int cant_llamados;
		Item *next;
};
class Lista{
public:
	Item *head;
	lista(){
		head=null;
	}
	void agregar(Item i){
		if(!head){
			head=Item;
		}
		else{
			i->next=head;
			head=i;
		}
	}
	int probabilidad(string valor){
		if(!head){
			return -1;
		}
		new Item bux= new Item;
		new Item aux= new Item;
		bux=head;
		int total_llamados;
		while(bux->next){
			total_llamados+=aux->cant_llamados;
		}
		aux=head;
		while(aux->next){
			if(aux->valor==valor){
				int prom=0;
				aux->cant_llamados/total_llamados=prom;
				break;
			}
			if(!valor){
				int prom=0;
				aux->cant_llamados/total_llamados=prom;
				break;
			}
		}
		return prom;
	}
	string llamar_kesimo(int k){
		if(head){
		new Item aux= new Item;
		aux=head;
		while(aux){
			if(aux.probabilidad()==k){
				return aux->valor;
			}
			aux->next;
		}
	}//la verdad, no se como hacer para sacar el que sea el mejor, sin crear otra lista ordenada por la probabilidad de tener el mejor.
}
};