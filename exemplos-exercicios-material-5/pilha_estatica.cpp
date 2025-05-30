#include <iostream>
#define tamanho 5

using namespace std;

typedef struct{
      int topo ;
      int item[tamanho] ;
}PILHA;


void iniciaPilha (PILHA &p) {
     p.topo = -1 ;
}

bool pilhaVazia(PILHA p){
    if(p.topo == -1){
        return true;
	}
    else{
        return false;
	}
}

bool pilhaCheia(PILHA p){
    if (p.topo == tamanho-1){
        return true;
	}
    else{
        return false;
	}
}

void empilha(PILHA &p, int x){
	p.topo++;
    p.item[p.topo]=x;
}

int desempilha(PILHA &p){
    return (p.item[p.topo--]);
}

int main(){

	int cont=0;
    PILHA s;

    //cria a pilha
    iniciaPilha(s);

    //Verifica se a pilha está vazia
    if (pilhaVazia(s)){
        cout << "A pilha esta vazia." << endl;
	}
    else{
        cout << "A pilha nao esta vazia." << endl;
	}

	//empilha 5 elementos
    empilha(s,12);
    empilha(s,33);
    empilha(s,7);
    empilha(s,11);
    empilha(s,22);

    //exibe os itens da pilha
	do{
    	cout << "Item empilhado: " << s.item[cont] << endl;
    	cont++;
	}
	while (cont!=tamanho);

    //Verificar que a pilha está cheia
    if(pilhaCheia(s)){
        cout << "A pilha esta cheia." << endl;
	}
    else{
        cout << "A pilha nao esta cheia." << endl;
	}

    //desempilha exibindo na tela os itens
    do{
    	cout << "Item desempilhado: " << desempilha(s) << endl;
	}
	while (s.topo!=-1);

	//Verificar que a pilha está cheia
    if(pilhaCheia(s)){
        cout << "A pilha esta cheia." << endl;
	}
    else{
        cout << "A pilha nao esta cheia." << endl;
	}

    return 0;
}
