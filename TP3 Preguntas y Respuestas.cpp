/*Tp#3 Preguntas y Respuestas
Andres Bettinelli - K1091
Ultima modificacion 26/04/2015
*/
#include<string>
#include<iostream>

using namespace std;
int main () {
string tematica;
int i = 5;
do{cout<<"\tJuegos de Preguntas y Respuestas: \n\tLas categorias son: \n\n";
cout<<"\ta) Literatura \n\tB) Frases \n\tC) Frutal \n\n";

if(i==5){
	cout<<"\t\t ### ###   ### ###   ### ###   ### ###   ### ### "<<endl;
	cout<<"\t\t##  #  ## ##  #  ## ##  #  ## ##  #  ## ##  #  ##"<<endl;
	cout<<"\t\t ##   ##   ##   ##   ##   ##   ##   ##   ##   ## "<<endl;
	cout<<"\t\t  ## ##     ## ##     ## ##     ## ##     ## ##  "<<endl;
	cout<<"\t\t   ###       ###       ###       ###       ###   "<<endl;
}
else if(i==4){
	cout<<"\t\t\t ### ###   ### ###   ### ###   ### ###  "<<endl;
	cout<<"\t\t\t##  #  ## ##  #  ## ##  #  ## ##  #  ## "<<endl;
	cout<<"\t\t\t ##   ##   ##   ##   ##   ##   ##   ##  "<<endl;
	cout<<"\t\t\t  ## ##     ## ##     ## ##     ## ##   "<<endl;
	cout<<"\t\t\t   ###       ###       ###       ###    "<<endl;
}
else if(i==3){
	cout<<"\t\t\t   ### ###   ### ###   ### ###  "<<endl;
	cout<<"\t\t\t  ##  #  ## ##  #  ## ##  #  ## "<<endl;
	cout<<"\t\t\t   ##   ##   ##   ##   ##   ##  "<<endl;
	cout<<"\t\t\t    ## ##     ## ##     ## ##   "<<endl;
	cout<<"\t\t\t     ###       ###       ###    "<<endl;
}
else if(i==2){
	cout<<"\t\t\t\t ### ###   ### ###  "<<endl;
	cout<<"\t\t\t\t##  #  ## ##  #  ## "<<endl;
	cout<<"\t\t\t\t ##   ##   ##   ##  "<<endl;
	cout<<"\t\t\t\t  ## ##     ## ##   "<<endl;
	cout<<"\t\t\t\t   ###       ###    "<<endl;
}
else if(i==1){
	cout<<"\t\t\t\t   ### ###  "<<endl;
	cout<<"\t\t\t\t  ##  #  ## "<<endl;
	cout<<"\t\t\t\t   ##   ##  "<<endl;
	cout<<"\t\t\t\t    ## ##   "<<endl;
	cout<<"\t\t\t\t     ###    "<<endl;
}
     
cout<<"\t--------------------------------------------------------------------\n";
cout<<"\t| 3 preguntas por tematica generadas,                              |\n";
cout<<"\t| Escriba la letra correspondiente a la tematica deseada           |\n";
cout<<"\t| Ingrese la respuesta solo con su primera letra en mayuscula      |\n";
cout<<"\t| Para salir escriba Regresar al pasado Ahora                      |\n";
cout<<"\t| Una cosa mas, tiene 5 vidas. Por cada error perdera una vida.    |\n";
cout<<"\t--------------------------------------------------------------------\n";
getline (cin, tematica);

if ((tematica == "A") || (tematica == "a")){
	string RC1;
	char InsertCoin1;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"\t@  Primera Pregunta  @"<<endl;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	do{
	cout<<"\tQue le pidio el principito al aviador que le dibujara? "<<endl;
	cin>>RC1;
	if(RC1 != "Cordero"){
		i--;
		if (i==0)
			return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n\t"<<endl;
		cin>>InsertCoin1;}
	else{cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";
	}
	}
	while ((InsertCoin1 == 'S') && (RC1 != "Cordero"));
	
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"\t@  Segunda Pregunta  @"<<endl;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	string RC2;
	char InsertCoin2;
	do{
	cout<<"\tCual es el pueblo ficticio descrito \n\ten 100 anos de soledad?"<<endl;
	cin>>RC2;
	if(RC2 != "Macondo"){
		i--;
		if (i==0)
			return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin2;
	}
	else{cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";
	}
	}
	while ((InsertCoin2 == 'S') && (RC2 != "Macondo"));
	
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"\t@  Tercera Pregunta  @"<<endl;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	string RC3;
	char InsertCoin3;
	do{
	cout<<"\tEn el libro el alquimista, a que pais viaja el protagonista \n\tpara encontrar su tesoro?"<<endl;
	cin>>RC3;
	if(RC3 != "Egipto"){
		i--;
		if (i==0)
			return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin3;
	}
	else{cout<<"\tRespuesta Correcta.\n";
	}
	}
	while ((InsertCoin3 == 'S') && (RC3 != "Egipto"));
	
	if((RC3 == "Egipto") && (RC2 == "Macondo") && (RC1 == "Cordero")){cout<<"\n\tFelicidades! Ha respondido Correctamente \n\ttodas las preguntas de la categoria Literatura!"<<endl;
		cout<<"\n\tSi desea seguir jugando, presione cualquier tecla \n\ty volvera al menu de seleccion de categoria.\n\tO escriba Salir para salir del programa."<<endl;
		string NewGamePlus;
		cin>> NewGamePlus;
		if(NewGamePlus == "Salir")
		return 0;}
	else{cout<<"\n\tTodavia quedan preguntar sin responder."<<endl;
		cout<<"\n\tSi desea seguir jugando, presione cualquier tecla \n\ty volvera al menu de seleccion de categoria.\n\tO escriba Salir para salir del programa."<<endl;
		string NewGamePlus;
		cin>> NewGamePlus;
		if(NewGamePlus == "Salir")
		return 0;
	}
	
}
//Aqui empieza una nueva Categoria
if ((tematica == "b") || (tematica == "B")){
	string RB1;
	char InsertCoin1;
	cout<<"\t######################"<<endl;
	cout<<"\t#  Primera Pregunta  #"<<endl;
	cout<<"\t######################"<<endl;
	do{
	cout<<"\tQuien sabia que no sabia nada? "<<endl;
	cin>>RB1;
	if(RB1 != "Socrates"){
		i--;
		if (i==0)
			return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n\t"<<endl;
		cin>>InsertCoin1;}
	else{cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";
	}
	}
	while ((InsertCoin1 == 'S') && (RB1 != "Socrates"));
	
	cout<<"\t######################"<<endl;
	cout<<"\t*  Segunda Pregunta  *"<<endl;
	cout<<"\t######################"<<endl;
	string RB2;
	char InsertCoin2;
	do{
	cout<<"\tHenry Ford dijo que el cliente puede elegir el auto de cualquier \n\tcolor que quiera, siempre y cuando sea...?"<<endl;
	cin>>RB2;
	if(RB2 != "Negro"){
		i--;
		if (i==0)
			return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin2;
	}
	else{cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";
	}
	}
	while ((InsertCoin2 == 'S') && (RB2 != "Negro"));
	
	cout<<"\t######################"<<endl;
	cout<<"\t#  Tercera Pregunta  #"<<endl;
	cout<<"\t######################"<<endl;
	string RB3;
	char InsertCoin3;
	do{
	cout<<"\tQuien dijo;: quien nunca ha cometido un \n\terror nunca ha probado algo nuevo?"<<endl;
	cin>>RB3;
	if(RB3 != "Einstein"){
		i--;
		if (i==0)
			return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin3;
	}

	}
	while ((InsertCoin3 == 'S') && (RB3 != "Einstein"));
	
	if((RB3 == "Einstein") && (RB2 == "Negro") && (RB1 == "Socrates")){cout<<"\n\tFelicidades! Ha respondido Correctamente \n\ttodas las preguntas de la categoria Frases!"<<endl;
		cout<<"\n\tSi desea seguir jugando, presione cualquier tecla \n\ty volvera al menu de seleccion de categoria.\n\tO escriba Salir para salir del programa."<<endl;
		string NewGamePlus;
		cin>> NewGamePlus;
		if(NewGamePlus == "Salir")
		return 0;}
	else{cout<<"\n\tTodavia quedan preguntar sin responder."<<endl;
		cout<<"\n\tSi desea seguir jugando, presione cualquier tecla \n\ty volvera al menu de seleccion de categoria.\n\tO escriba Salir para salir del programa."<<endl;
		string NewGamePlus;
		cin>> NewGamePlus;
		if(NewGamePlus == "Salir")
		return 0;
	}
	
	
}
//Aqui empieza una nueva Categoria
if ((tematica == "C") || (tematica == "c")){
	char RA1;
	char InsertCoin1;
	cout<<"\t**********************"<<endl;
	cout<<"\t*  Primera Pregunta  *"<<endl;
	cout<<"\t**********************"<<endl;
	do{
	cout<<"\tDelfin empieza con D y termina con..."<<endl;
	cin>>RA1;
	if((RA1 != 'T') && (RA1 != 't')){
		i--;
		if (i==0)
			return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n\t(Pista: solo tiene 24 posibilidades)"<<endl;
		cin>>InsertCoin1;}
	else{cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";
	}
	}
	while ((InsertCoin1 == 'S') && ((RA1 != 'T') || (RA1 != 't')));
	
	cout<<"\t**********************"<<endl;
	cout<<"\t*  Segunda Pregunta  *"<<endl;
	cout<<"\t**********************"<<endl;
	double RA2;
	char InsertCoin2;
	do{
	cout<<"\tEn una habitacion se encuentran 2 personas tratando de resolver \n\tel siguiente problema binario:\n\tCuantas personas hay en la habitacion?"<<endl;
	cin>>RA2;
	if(RA2 != 10){
		i--;
		if (i==0)
			return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin2;
	}
	else{cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";
	}
	}
	while ((InsertCoin2 == 'S') && (RA2 != 10));
	
	cout<<"\t**********************"<<endl;
	cout<<"\t*  Tercera Pregunta  *"<<endl;
	cout<<"\t**********************"<<endl;
	double RA3;
	char InsertCoin3;
	do{
	cout<<"\tCuantas veces me arrogo error este simpre programa?"<<endl;
	cin>>RA3;
	if((RA3 < 1000) || (RA3 > 10000)){
		i--;
		if (i==0)
			return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin3;
	}
	else{cout<<"\tBastante cerca... Respuesta Correcta.\n";
	}
	}
	while ((InsertCoin3 == 'S') && ((RA3 < 1000) || (RA3 > 10000)));
	
	if(((RA3 > 1000) || (RA3 < 10000)) && (RA2 == 10) && ((RA1 == 'T') || (RA1 == 't'))){cout<<"\n\tFelicidades! Ha respondido Correctamente \n\ttodas las preguntas de la categoria Frutal!"<<endl;
		cout<<"\n\tSi desea seguir jugando, presione cualquier tecla \n\ty volvera al menu de seleccion de categoria.\n\tO escrriba Salir para salir del programa."<<endl;
		string NewGamePlus;
		cin>> NewGamePlus;
		if(NewGamePlus == "Salir")
		return 0;}
	else{cout<<"\n\tTodavia quedan preguntar sin responder."<<endl;
		cout<<"\n\tSi desea seguir jugando, presione cualquier tecla \n\ty volvera al menu de seleccion de categoria.\n\tO escriba Salir para salir del programa."<<endl;
		string NewGamePlus;
		cin>> NewGamePlus;
		if(NewGamePlus == "Salir")
		return 0;
	}}}
while ((tematica != "Regresar al pasado Ahora") && (i!=0));
return 0;
}


/*
Las respuestas en el orden que aparecen las preguntas son:
A)Cordeo - Macondo - Egipto
B)Socrates - Negro - Einstein
C)T - 10 - Cualquier num mayor a 1000 y menor a 10000
*/
