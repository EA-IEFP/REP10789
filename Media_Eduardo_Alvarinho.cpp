#include <iostream>

using namespace std;

int main()
{
	float n1, n2, n3, n4, media;
	
	do
	{
		cout<<"Introduza a primeira nota: ";
		cin>>n1;
		if(n1<0||n1>20)
			cout<<"nota introduzida errada"<<endl;
			
	}while(n1<0||n1>20);
	
	do
	{
		cout<<"Introduza a segunda nota: ";
		cin>>n2;
		if(n2<0||n2>20)
			cout<<"nota introduzida errada"<<endl;
	}while(n2<0||n2>20);
	
	do
	{
		cout<<"Introduza a terceira nota: ";
		cin>>n3;
		if(n3<0||n3>20)
			cout<<"nota introduzida errada"<<endl;
	}while(n3<0||n3>20);
	
	do
	{
		cout<<"Introduza a quarta nota: ";
		cin>>n4;
		if(n4<0||n4>20)
			cout<<"nota introduzida errada"<<endl;
	}while(n4<0||n4>20);

	media=(n1+n2+n3+n4)/4;
	
	cout<<"Media das notas: "<<media;
	
}
