#include<iostream>
#include <cmath>
using namespace std;

class INGRESO{
	private:
		string nombre;
		string direccion;
		
	public:
	virtual string LEER_S(){
		string s;
		cin>>s;
		return s;
	}
	
   virtual 	float LEER_F(){
		float f;
		cin>>f;
		return f;
	}
	
	void set_n(string _n){
		nombre=_n;
	}	
	
	void set_d(string d){
		direccion=d;
	}
	string get_n(){
		return nombre;
		
	}
	string get_d(){
		return direccion;
	}
	
	virtual void ingreso_I(){
		set_n(LEER_S());
		set_d(LEER_S());
	}
	
	virtual void mostrar_I(){
	get_n();
	get_d();
	
	}
	
};



class EMPRESA:public INGRESO{
	private:
		string propietario;
	public:
	
	void set_p(string p){
		propietario=p;
	}
	
	string get_p(){
		return propietario;
	}
	
	virtual void ingreso(){
		cout<<"datos de la empresa"<<endl;
		cout<<"nombre y direccion"<<endl;
		ingreso_I();
		cout<<"propietario de la empresa"<<endl;
		set_p(LEER_S());
		
	}
	virtual void mostrar(){
		mostrar_I();
		get_p();
	}
	
	
};

class PROVEEDOR:public EMPRESA{
	private:
	string Tipo_P;
	int bodega_P;
	public:	
	void set_b(int b){
		bodega_P=b;
	}
	
	int get_b(){
		return bodega_P;
	}
	
	
	void set_t(string t){
		Tipo_P=t;
	}
	
	string get_t(){
		return Tipo_P;
	}
	
	
	virtual void ingreso(){
		//ingreso();
		cout<<"tipo de productos"<<endl;
		set_t(LEER_S());
		cout<<"cantidad de productos en bodega"<<endl;
		set_b (LEER_F());
	}
	
	void mostrar(){
		//mostrar();
		get_t();
		get_b();
	}
	
	
};

class DISQUERA:public EMPRESA{
	private:
	int stock;	
	public:	
	void set_s(int s){
		stock=s;
	}
	
	int get_s(){
		return stock;
	}
	
	void registro_S(){
	cout<<"stock que tiene"<<endl;
	while(get_s()>0){
	set_s(LEER_F());
	}
		
		
		
}
	
	virtual void ingreso(){
	//ingreso();
	registro_S();
	}
	
	
	
};

class CD:public INGRESO{
	private:
	string *cd=new string [30];
	float *cdp= new float [5];	
	string genero;
	float precio;	
	public:

	
	
	
	void set_g(string g){
		genero=g;
	}
	
	string get_g(){
		return genero;
	}

	
	
	void set_pr(float pr){
		precio=pr;
	}
	
	float get_pr(){
		return precio;
	}
	
	
	
	
	float discos(){
	float aux=0;
	float b,c=0;
	cd[1]="Photograf- Nickelback";
	cdp[1]=17.5;
	cd[2]="Sexual- Neiked";	
	cdp[2]=10.3;
	cd[3]="Dance Monkey- Tones and I";
	cdp[3]=15;
	cd[4]="Maestra - Adrian Valdez";
	cdp[4]=13;
	cd[5]="Billie Jean- MichaelJackson";
	cdp[5]=30.99;
	
	cout<<"1 DISCO DE ROCK "<<endl;
	cout<<"2 DISCO DE ELECTRONICA"<<endl;
	cout<<"3 DISCO DE ELETRO-POP"<<endl;
	cout<<"4 DISCO DE SALSA "<<endl;
	cout<<"5 DISCO DEL REY DEL POP POP"<<endl;
	
	int a;
	
	
	do{
	cout<<""<<endl;	
	cout<<"INGRESAR OPCION"<<endl;	
	cin>>a;
	
	switch (a){
	case 1:
	set_g(cd[1]);
	set_pr(cdp[1]);
	cout<<get_g()<<endl;
	cout<<"PRECIO : "<<get_pr();
		
	break;
	case 2:
	set_g(cd[2]);
	set_pr(cdp[2]);
	cout<<get_g()<<endl;
	cout<<"PRECIO : "<<get_pr();	
	break;
	case 3:
	set_g(cd[3]);
	set_pr(cdp[3]);
	cout<<get_g()<<endl;
	cout<<"PRECIO : "<<get_pr();	
	break;
	case 4:
	set_pr(cdp[4]);
	set_g(cd[4]);	
	cout<<get_g()<<endl;
	cout<<"PRECIO : "<<get_pr();	
	break;
	case 5:
	set_g(cd[5]);
	set_pr(cdp[5]);	
	cout<<get_g()<<endl;
	cout<<"PRECIO : "<<get_pr();	
	break;

}

	aux=get_pr();
    b=b+aux;
    aux=0;
    cout<<""<<endl;
    
}while(a!=6);
cout<<""<<endl;
cout<<"TOTAL MAS IVA : "<<endl;
cout<<b;


return b;

	}
	
	
	



	
};

class SUCURSAL:public DISQUERA{
	private:
	string ubicacion;
	string categoria;	
	public:
	void set_ca(string ca){
		categoria=ca;
	}
	
	string get_ca(){
		return categoria;
	}
	
	void set_u(string u){
		ubicacion=u;
	}
	
	string get_u(){
		return ubicacion;
	}
	
	virtual void ingreso(){
		//ingreso();
		cout<<"datos de la sucursal"<<endl;
		cout<<"ubicacion"<<endl;
		set_u(LEER_S());
		cout<<"categoria"<<endl;
		set_ca(LEER_S());
		
	}	
	
	virtual void mostrar(){
		//mostrar();
		get_u();
		get_ca();
		
	}
		
	void registro_Venta(){
	}
		
};

class VENTA:public INGRESO{
	private:
	int cantidad;
	float dinero;
	int hora;
	string dia;
    int mes;
	int anios; 		
	public:
	void set_can(int can){
		cantidad=can;
	}
	
	int get_can(){
		return cantidad;
	}
	void set_di(float di){
		dinero=di;
	}
	
	int get_di(){
		return dinero;
	}
	void set_h(int h){
		hora=h;
	}
	
	int get_h(){
		return hora;
	}
	void set_dia(string _dia){
		dia=_dia;
	}
	
	string get_dia(){
		return dia;
	}
	void set_m(int m){
		mes=m;
	}
	
	int get_m(){
		return mes;
	}
	void set_anios(int an){
		anios=an;
	}
	
	int get_anios(){
		return anios;
	}	
	
	float realizar_P(){
		cout<<"pago hecho su vuelto es de "<<endl;
		//return get_di()-get_pr();
		return get_di();
	}
		
	void ingreso(){
		cout<<"cantidad"<<endl;
		set_can(LEER_F());
		cout<<"pago en efectivo dado de "<<endl;
		set_di(LEER_F());
		cout<<"fecha y hora de compra"<<endl;
		set_h(LEER_F());
		set_m(LEER_F());
		set_dia(LEER_S());
		set_anios(LEER_F());
		while((get_h()<=0)||(get_h()>=24)&&(get_m()<=12)||(get_m()>=0)){
	    realizar_P(); 
	
	
	
		}
		
		
		
	}	
		
		
		
};

class PERSONA:public INGRESO{
	private:
	string cedula;	
	public:
	void set_ce(string c){
		cedula=c;
	}
	string get_ce(){
		return cedula;
	}
	
	void ingresar(){
		cout<<"ingrese cedula"<<endl;
		set_ce(LEER_S());
	}
	void mostrar(){
		get_ce();
	}
		
};


class CLIENTE:public PERSONA{
	private:
	string correo;
    bool afiliado="F" ;	
	public:
		
	void set_c(string c){
		correo=c;
	}
	
	string get_c(){
		return correo;
	}	
	
	void set_a(int an){
		afiliado=an;
	}
	
	bool get_a(){
		return afiliado;
	}	
		
	void ingreso(){
		string s;
		//ingreso();
		ingreso_I();
		cout<<"ingrese su correo electronico"<<endl;
		set_c(LEER_S());
		cout<<"ingrese si tiene tarjeta de afiliado"<<endl;
		cin>>s;
		if (s=="SI"||s=="si"||s=="Si"){
			bool y="T";
			set_a(y);
		}
	}	
	
	void mostrar(){
		mostrar_I();
		//mostrar();
		get_c();
	}
};

int main(){
	CD P1;
	P1.discos();
	return 0;
}
