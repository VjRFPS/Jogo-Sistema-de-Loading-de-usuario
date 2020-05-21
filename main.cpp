#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int life;
int money;
bool espada;
string user;
string choose;

int dificul()
{
	system("cls");
	cout << "Aguarde enquanto lembramos o seus dados...";
	Sleep(3500);
	system("cls");
	cout << "Ola," << user << ".Escolha a dificuldade em que voce ira jogar:\n\n";
  cout << "1.Facil\n";
  cout << "2.Dificil\n\n";
  cout << "Digite aqui o numero da opcao desejada: ";
  cin >> choose;
  if(choose == "1")
  {
      system("cls");
	  	espada++;
      cout << "Voce escolheu o modo facil.\n";
      system("pause");
      system("cls");

      cout << "Sua historia:Voce se chama:" << user << ".Voce se perdeu de casa aos 11 anos\ne aos 28 sua missao e voltar para casa.\n\n";
      system("pause");
      system("cls");	
	}
	if(choose == "2")
	{
		system("cls");
		cout << "Opcao esta em processo de programacao,por favor aguarde ate ser redirecionado.";
		Sleep(5000);
		return dificul();
	}	
}

int gameover()
{
    cout << "GameOver!!!\n";
    cout << "GameOver!!!\n";
    cout << "GameOver!!!\n";
    cout << "GameOver!!!\n";
    cout << "GameOver!!!\n";
}

int main()
{
    cout << "Made By VJR(Vinicius de Jesus)\n\n\n\n";

    cout << "Ola,escolha uma das opcoes:\n";
    cout << "1.Iniciar Jogo\n";
    cout << "2.Sair\n\n";

    cout << "Digite aqui o numero da opcao escolhida: ";
    cin >> choose;
    if(choose == "1")
    {
		system("cls");
       	cout << "Digite aqui o seu nome de usuario: ";
       	cin >> user;
		system("cls");
		cout << "Aguarde enquanto armazenamos seus dados...";
		Sleep(3500);
		system("cls");
		cout << "Ola," << user << ".Escolha a dificuldade em que voce ira jogar:\n\n";
       	cout << "1.Facil\n";
       	cout << "2.Dificil\n\n";
       	cout << "Digite aqui o numero da opcao desejada: ";
       	cin >> choose;
       	if(choose == "1")
       	{
            system("cls");
			espada++;
            cout << "Voce escolheu o modo facil.\n";
            system("pause");
            system("cls");

            cout << "Sua historia:Voce se chama:" << user << ".Voce se perdeu de casa aos 11 anos\ne aos 28 sua missao e voltar para casa.\n\n";
            system("pause");
            system("cls");
		}
		if(choose == "2")
		{
			system("cls");
			cout << "Opcao esta em processo de programacao,por favor aguarde ate ser redirecionado.";
			Sleep(5000);
			return dificul();
		}
	}
    if(choose == "2")
    {
        return 0;
    }
    else
    {
        system("cls");
        cout << "Opcao Invalida,aguarde e tente novamente.";
        Sleep(2000);
        system("cls");
        return main();
    }

}
