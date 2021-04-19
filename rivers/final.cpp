#include <iostream>
#include"Rivers.h"
#include<fstream>
using namespace std;
int main()
{
  ifstream fin("rivers.txt");
  int k;
  fin >> k;
  River* p;
  for (int i = 0; i < k; i++) 
  {
	  p = new River(fin);
	  if (p->n > k) 
      {
		  p->pr();
	  }
  }
  int a;
  cin>>a; // vscode s problema aqvs, radgan araferi shemyavs itisheba konsoli mashinve da amitom davwere;
}