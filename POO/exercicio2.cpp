#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Veiculo
{
	public:
		string marca;
		int    anoFabr;
		
	string getMarca()
	{
		return this->marca;
	}
	
	void setMarca(string marca)
	{
		this->marca = marca;
	}
	
	int getAnofabr()
	{
		return this->anoFabr;
	}
	
	void setAnofabr(int anoFabr)
	{
		this->anoFabr = anoFabr;
	}
};

class Carga: public Veiculo
{
	public:
		int pesoMax;
		
		int getPesomax()
		{
			return this->pesoMax;
		}
		
		void setPesomax(int pesoMax)
		{
			this->pesoMax = pesoMax;
		}	
};

class Passageiros: public Veiculo
{
	public:
		int quantMax;
		
		int getQuantmax()
		{
			return this->quantMax;
		}
		
		void setQuantmax(int quantMax)
		{
			this->quantMax = quantMax;
		}
};

int main()
{
	string marca;
	int    anoFabr, pesoMax, quantMax;
	
	cout << "Informe a marca do primeiro veiculo: ";
	cin >> marca;
	cout << "Informe o ano de fabricacao do primeiro veiculo: ";
	cin >> anoFabr;
	Veiculo v1;
	v1.setMarca(marca);
	v1.setAnofabr(anoFabr);
	
	cout << "\nInforme a marca do segundo veiculo: ";
	cin >> marca;
	cout << "Informe o ano de fabricacao do segundo veiculo: ";
	cin >> anoFabr;
	Veiculo v2;
	v2.setMarca(marca);
	v2.setAnofabr(anoFabr);
	
	cout << "\nInforme a marca do primeiro veiculo de carga: ";
	cin >> marca;
	cout << "Informe o ano de fabricacao do primeiro veiculo de carga: ";
	cin >> anoFabr;
	cout << "Informe o peso maximo do primeiro veiculo de carga: ";
	cin >> pesoMax;
	Carga c1;
	c1.setMarca(marca);
	c1.setAnofabr(anoFabr);
	c1.setPesomax(pesoMax);
	
	cout << "\nInforme a marca do segundo veiculo de carga: ";
	cin >> marca;
	cout << "Informe o ano de fabricacao do segundo veiculo de carga: ";
	cin >> anoFabr;
	cout << "Informe o peso maximo do segundo veiculo de carga: ";
	cin >> pesoMax;
	Carga c2;
	c2.setMarca(marca);
	c2.setAnofabr(anoFabr);
	c2.setPesomax(pesoMax);
	
	cout << "\nInforme a marca do primeiro veiculo de passageiros: ";
	cin >> marca;
	cout << "Informe o ano de fabricacao do primeiro veiculo de passageiros: ";
	cin >> anoFabr;
	cout << "Informe a quantidade maxima do primeiro veiculo de passageiros: ";
	cin >> quantMax;
	Passageiros p1;
	p1.setMarca(marca);
	p1.setAnofabr(anoFabr);
	p1.setQuantmax(quantMax);
	
	cout << "\nInforme a marca do segundo veiculo de passageiros: ";
	cin >> marca;
	cout << "Informe o ano de fabricacao do segundo veiculo de passageiros: ";
	cin >> anoFabr;
	cout << "Informe a quantidade maxima do segundo veiculo de passageiros: ";
	cin >> quantMax;
	Passageiros p2;
	p2.setMarca(marca);
	p2.setAnofabr(anoFabr);
	p2.setQuantmax(quantMax);
	
	
	cout << "\n" << "Veiculos informados: ";
	cout << "\n" << v1.getMarca() << " - " << v1.getAnofabr();
	cout << "\n" << v2.getMarca() << " - " << v2.getAnofabr();
	cout << "\n\n" << "Veiculos de carga: ";
	cout << "\n" << c1.getMarca() << " - " << c1.getAnofabr() << " - " << c1.getPesomax();
	cout << "\n" << c2.getMarca() << " - " << c2.getAnofabr() << " - " << c2.getPesomax();
	cout << "\n\n" << "Veiculos de passageiros: ";
	cout << "\n" << p1.getMarca() << " - " << p1.getAnofabr() << " - " << p1.getQuantmax();
	cout << "\n" << p2.getMarca() << " - " << p2.getAnofabr() << " - " << p2.getQuantmax();
	system("pause");
}
