#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int a;
    fin >> a;
    fout << a*2;

    fin.close();
    fout.close();

    return 0;
}
