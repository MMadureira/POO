#include <iostream>
#include <string>
using namespace std;

class Bicicleta1
{
	public:
		string modelo;
		string quadro;
		string freios;
		string rodas;
		
		// Construtor Default
		
		Bicicleta1()
		{
			
		}
		
		// Construtor Override
		
		Bicicleta1(string bmodelo, string bquadro, string bfreios, string brodas)
		{
			modelo = bmodelo;
			quadro = bquadro;
			freios = bfreios;
			rodas  = brodas;
		}
		
		void mostra_dados()
		{
			cout << "Modelo: " + modelo << endl;
			cout << "Quadro: " + quadro << endl;
			cout << "Freios: " + freios << endl;
			cout << "Rodas : " + rodas  << endl;
		}
};

class BicicletaMontanha : public Bicicleta1
{
	public:
		string marchas;
		string amortecedores;
		string garrafa;
		string gps;
		
		BicicletaMontanha()
		{
			
		}
		
		BicicletaMontanha(string bmodelo, string bquadro, string bfreios, string brodas, string bmarchas, string bamortecedores, string bgarrafa, string bgps)
		{
			modelo = bmodelo;
			quadro = bquadro;
			freios = bfreios;
			rodas  = brodas;
			marchas = bmarchas;
			amortecedores = bamortecedores;
			garrafa = bgarrafa;
			gps = bgps;
		}
		
		void mostra_dados()
		{
			cout << "Modelo: " + modelo << endl;
			cout << "Quadro: " + quadro << endl;
			cout << "Freios: " + freios << endl;
			cout << "Rodas : " + rodas  << endl;
			cout << "Marchas: " + marchas << endl;
			cout << "Amortecedores: " + amortecedores << endl;
			cout << "Garrafa: " + garrafa << endl;
			cout << "GPS: " + gps << endl;
		}
};

int main()
{
	// Utilizando o método construtor Default
	
	Bicicleta1 bike1;
	bike1.modelo = "ZR069";
	bike1.quadro = "Ferro";
	bike1.freios = "Pastilhas";
	bike1.rodas  = "Ferro";
	bike1.mostra_dados();
	
	cout << endl;
	
	// Utilizando o método construtor Override
	
	Bicicleta1 bike2("XA 200", "Alumínio", "Pastilhas", "Alumínio");
	bike2.mostra_dados();
	
	cout << endl;
	
	// Utilizando o método construtor Default
	
	BicicletaMontanha mntbike1;
	mntbike1.modelo = "Attack 500";
	mntbike1.quadro = "Fibra de Carbono";
	mntbike1.freios = "Disco";
	mntbike1.rodas  = "Alumínio";
	mntbike1.marchas = "18 velocidades";
	mntbike1.amortecedores = "R3000";
	mntbike1.garrafa = "Alumínio 500ml";
	mntbike1.gps = "Discovery 2.5";
	mntbike1.mostra_dados();
	
	cout << endl;
	
	// Utilizando o método construtor Override	
	
	BicicletaMontanha mntbike2("Attack 600", "Fibra Carbono", "ABS", "Alumínio", "21 velocidade", "R3001", "Alumínio 600ml", "Discovery 2.6");
	mntbike2.mostra_dados();
	
}
