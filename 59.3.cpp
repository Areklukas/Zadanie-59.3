#include <iostream>
#include <fstream>
using namespace std;

int power(int n) 
{
	int power(81);
  	while(n>0) 
	{
    	power=n%10;
    	n=n/10;
  	}
  return power;
}
int t() 
{
  int t, tablica_mocy;
  int result[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
 
  for(int i=1;i<9;i++) 
  {
    cout<< i <<": "<<result[i]<<"; ";
  }
  cout<<endl;
}

int main() 
{
  ifstream moc;
  moc.open("liczby.txt");
  moc.close();
}
