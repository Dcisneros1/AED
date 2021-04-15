
#include <iostream>
#include <fstream>>


using namespace std;
int main()
{
  cout << "Hello world!";

  
  ofstream file ("Output.txt");
  //file.open ("C:\Users\dcisneros\Documents\Damian\facultad\Sistemas\1\AED\Tps\Tp 0\Hello World");
  file << "Hello World!" << endl;
  file.close();
    cin.get();
    cin.get();
  return 0;
}