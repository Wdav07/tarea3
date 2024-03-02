#include <iostream>
using namespace std; 
main(){
	/* conteo de manera regresiva
		for (int i=10;i>=0; i-- ){
		cout<<i<<endl;
		 */
		//variable inicio; finaliza; 
	for (int i=0; i<10; i++ ){
			if (i==5){
			cout<<"if"<<endl; 
			break;
		}
		cout<<i<<endl;
	
	}
		cout<<"Fuera del for "<<endl; 
	
	system("pause");
}