#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int ida ;
	char sex;
	
	cout<< "<<TRE>> \n";
	cout<<"========= \n";
	cout<<"\n";
	cout<<"Idade:";
	cin>>ida;
	cout<<"Sexo:";
	cin>>sex;
	if(ida >=15 || ida==17  ){
		cout<<"Voto facultativo! \n";
			if(sex =='m'){
				cout<<"Me informe o nº do seu CAM !\n ";
				
		}
				
			}else{
				if(ida<16){
					cout<<"Nao pode votar! \n";
				}else{
					if(ida>=18 ||ida==70 ){
						cout<<"Voto obrigatorio! \n";
					}else{
						cout<<"Isento do voto! \n";
					}
				}
			}
		return 0;	
	}

		
	
	


