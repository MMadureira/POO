#include <iostream>
using namespace std;

int main()
{
cout << "\n1 - Verde";
cout << "\n2 - Azul";
cout << "\n3 - Amarelo";
cout << "\n4 - Vermelho";
cout << "\n5 - Laranja";
cout << "\n\nEscolha uma cor: ";
int numCor;
cin >> numCor;
switch(numCor)
 {
  case 1:
   cout << "\nVoce escolheu Green.";
   break;
  case 2:
   cout << "\nVoce escolheu Blue.";
   break;
  case 3:
   cout << "\nVoce escolheu Yellow.";
   break;
  case 4:
   cout << "\nVoce escolheu Red.";
   break;
  case 5:
   cout << "\nVoce escolheu Orange.";
   break;
  default:
   cout << "\nVoce escolheu uma cor desconhecida";
   break;
 }
}

