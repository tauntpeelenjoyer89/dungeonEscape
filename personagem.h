#pragma once
#include <iostream>
#include <string>
using namespace std;

class Personagem {
public:
	string nome;
	int vida;
	int ataque;
	
	Personagem(string n, int v, int a)
	:nome(n), vida(v), ataque(a) {} 
	
		void apresentar () { 
		cout << "personagem: " << nome << endl;
		cout << "vida: " << vida << endl;
		cout << "ataque: " << ataque << endl;
		
		}
};

class inimigo : public Personagem {
	public:
		string tipo;
		
		Inimigo(string n, int v, int a, string t);
		Personagem(n, v,a), tipo(t){}
		
			void apresentar () { 
		cout << "INIMIGO " << nome << endl;
		cout << "tipo: " << tipo << endl;
		cout << "vida: " << vida << endl;
		cout << "ataque: " << ataque << endl;
	}
};
