#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num1 = 20 , num2 = 20, soma ;
	int resp;
	soma = num1+num2 ;
	cout<<"Quanto é 20 + 20 ? \n ";
	cin>> resp;
	if (resp==40){
	cout<<"Resposta correta! ";	
	}else{
		cout<<"A respota ERRADA! O valor é: "<< soma  ;
	}
	
	return 0;
}
