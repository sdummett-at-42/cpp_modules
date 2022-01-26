#include <exception>
#include <string>
#include <iostream>
using namespace std;

// class exception
// {
// public:
//     exception() throw(){ } //Constructeur.
//     virtual  exception() throw(); //Destructeur.

//     virtual const char* what() const throw(); //Renvoie une chaîne "à la C" contenant des infos sur l'erreur.
// };

class Erreur : public exception
{
	public:
		Erreur(int numero = 0, string const &phrase = "", int niveau = 0) throw()
			: m_numero(numero), m_phrase(phrase), m_niveau(niveau)
		{
		}

		virtual const char *what() const throw()
		{
			return m_phrase.c_str();
		}

		int getNiveau() const throw()
		{
			return m_niveau;
		}

		virtual ~Erreur() throw()
		{
		}

	private:
		int m_numero;	 // Numéro de l'erreur
		string m_phrase; // Description de l'erreur
		int m_niveau;	 // Niveau de l'erreur
};

int division(int a, int b) // Calcule a divisé par b.
{
	if (b == 0) {
		throw Erreur(1, "Division par zéro", 2);
	}
	else
		return a / b;
}

int main()
{
	int a, b;
	cout << "Valeur pour a : ";
	cin >> a;
	cout << "Valeur pour b : ";
	cin >> b;

	try
	{
		cout << a << " / " << b << " = " << division(a, b) << endl;
	}
	catch (std::exception const &e)
	{
		cerr << "ERREUR : " << e.what() << endl;
	}

	return 0;
}