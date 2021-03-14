#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 int num;

  cout << "Digite um numero: ";
  cin >> num;

  if (num  > 0)
  {
      num++;
      cout << num << " ";
  }
  cout << num + 1 << " ";
  if (num < 0)
  {
      num--;
      cout << num << " ";
  }else {
  	cout << num * 10 ;
  	
  }
     return 0;
     
	 }

