# ProyectoX
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
#include <iostream>
using namespace std;
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 
 int registro(char,char);
 int main(){
 	char c[10], id[10];
	system ("color 9F");
	for(int j=4;j<76;j++){
			gotoxy(j,3);
			cout<<"=";
			gotoxy(j,21);
			cout<<"=";
	}
	gotoxy(76,3);cout<<"+";
	gotoxy(3,3);cout<<"+";
	gotoxy(3,20);cout<<"+";
	gotoxy(76,20);cout<<"+";
	
	for(int k=3;k<20;k++){
			gotoxy(3,k);
			cout<<endl;
			gotoxy(3,k+1);
			cout<<"|";
			gotoxy(76,k+1);
			cout<<"|";
	}
	gotoxy(34,5);cout<<"PROSHEKTO X";
	gotoxy(10,9);cout<<"Ingrese su id : ";
	for(int i=38;i<65;i++){
		gotoxy(i,8);cout<<"-";
		gotoxy(i,10);cout<<"-";
	}
	gotoxy(37,9);cout<<"|";
	gotoxy(65,9);cout<<"|";
	gotoxy(40,9);cin>>id;
	
	gotoxy(10,15);cout<<"Ingrese su contrasenha : ";
	for(int i=38;i<65;i++){
		gotoxy(i,14);cout<<"-";
		gotoxy(i,16);cout<<"-";
	}
	gotoxy(37,15);cout<<"|";
	gotoxy(65,15);cout<<"|";
	gotoxy(40,15);cin>>c;
	


 }  
 //parte inicial
#include <iostream>
#include <windows.h>
using namespace std;
struct cuenta{
	string nombre;
	string apell;
	string direc;
	string pais;
	string usua;
	string contra;
	string pin;
	string correo;
	string cod;
};
struct app{
	string nom;
	string desar;
	string anyo;
	float precio,tam,punto;
};
cuenta usu[100];
void ingreso(cuenta []);
void crear(cuenta []);
int menuprinc();
int menuusu();
void mainusuario();
int main(){
	int o,v=1;
	while(v==1){
	o=menuprinc();
	switch(o){
		case 1: ingreso(usu); break;
		case 2: crear(usu); break;
		case 3: v=0; break;		
	}
	}
	system("pause");
}
int menuprinc(){
	int a;
	cout<<"-.-.-.-.-.-.BIENVENIDOS-.-.-.-.-.-"<<endl;
	cout<<"(1) INGRESAR"<<endl;
	cout<<"(2) CREAR USUARIO"<<endl;
	cout<<"(3) SALIR"<<endl;
	cin>>a;
	system("cls");
	return a;
}
void ingreso(cuenta usu[]){
	string u,p,n;
	char resp;
	int i,t=0;
	cout<<"INGRESE USUARIO Y CLAVE:"<<endl;
	cout<<"Usuario:";
	cin>>u;
	cout<<"Password:";
	cin>>p;
	cout<<"Pin:";
	cin>>n;
	for(i=0;i<100;i++){
		if(u==usu[i].usua && p==usu[i].contra && n==usu[i].pin){
			cout<<"Bienvenido, "<<u<<endl;
			t=1;
			mainusuario();
		}
	}
	system("cls");
	while(t==0){
	cout<<"Usuario erroneo/no existe!"<<endl;
	cout<<"(a) Desea volver a intentar?"<<endl;
	cout<<"(b) Volver al menu principal"<<endl;
	cin>>resp;
		if(resp=='a'){
			cout<<"Ingrese sus datos nuevo!"<<endl;
		cout<<"Usuario:";
		cin>>u;
		cout<<"Password:";
		cin>>p;
		cout<<"Pin:";
		cin>>n;
			for(i=0;i<100;i++){
				if(u==usu[i].usua && p==usu[i].contra && n==usu[i].pin){
					cout<<"valido!";
					t=1;
				}
			}
		}
		else{
			main();
		}
}
	system("cls");
}
void mainusuario(){
	int o,v=1;
	while(v==1){
	o=menuusu();
	switch(o){
		case 1: //apps(usu); break;
		case 2: //tienda(usu); break;
		case 3: v=0; break;		
	}
	}
	main();
}
int menuusu(){
	int a;
	cout<<"-.-.-.-.-.-.BIENVENIDO-.-.-.-.-.-"<<endl;
	cout<<"(1) Mis apps"<<endl;
	cout<<"(2) Tienda"<<endl;
	cout<<"(3) Cerrar sesion"<<endl;
	cin>>a;
	system("cls");
	return a;}
void crear(cuenta usu[]){
	cin.ignore(256,'\n');
	static int k=0;
	cout<<"-.-.-.-.-.CREA TU CUENTA.-.-.-.-.-.-"<<endl;
	cout<<"nombre:";
	getline(cin,usu[k].nombre);
	cout<<"apellido:";
	getline(cin,usu[k].apell);
	cout<<"direccion:";
	getline(cin,usu[k].direc);
	cout<<"pais:";
	getline(cin,usu[k].pais);
	cout<<"usuario:";
	getline(cin,usu[k].usua);
	cout<<"password:";
	getline(cin,usu[k].contra);
	cout<<"pin unico:";
	getline(cin,usu[k].pin);
	cout<<"correo:";
	getline(cin,usu[k].correo);
	cout<<"cuenta creada exitosamente!"<<endl;
	system("cls");
}
