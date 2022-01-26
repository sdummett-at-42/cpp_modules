#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<double> tab(5, 3.14);  //Un tableau de 5 nombres à virgule

    try
    {
        tab.at(8) = 4.;  //On essaye de modifier la 8ème case
    }
    catch(exception const& e)
    {
        cerr << "ERREUR : " << e.what() << endl;
    }
    return 0;
}
