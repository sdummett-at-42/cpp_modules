#include <iostream>

using namespace std;

// BAD SOLUTION
// int division(int a,int b) // Calcule a divisé par b.
// {
//    return a/b;
// }
 
// GOOD SOLUTION
int division(int a,int b)
{
	if(b == 0)
		throw string("Division par zéro !");
   return a / b;
}

int main()
{
   int a,b;
   cout << "Valeur pour a : ";
   cin >> a;
   cout << "Valeur pour b : ";
   cin >> b;
 
    try {
		int res = division(a,b);
        cout << a << " / " << b << " = " << res << endl;
    }
    catch(string const& chaine) {
        cerr << chaine << endl;
    }

   return 0;
}