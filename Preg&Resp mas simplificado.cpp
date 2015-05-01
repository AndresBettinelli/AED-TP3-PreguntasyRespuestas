/*Tp#3 Preguntas y Respuestas
Andres Bettinelli - K1091
Ultima modificacion 01/05/2015
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

string R1, R2, R3, NewGamePlus;
double RA2, RA3;
char InsertCoin;

if ((tematica == "A") || (tematica == "a")){
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"\t@  Primera Pregunta  @"<<endl;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	do{
	cout<<"\tQue le pidio el principito al aviador que le dibujara? "<<endl;
	cin>>R1;
	if(R1 != "Cordero"){
		i--;
		if (i==0) return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n\t"<<endl;
		cin>>InsertCoin;}
	else cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";}
	while (InsertCoin == 'S');
	
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"\t@  Segunda Pregunta  @"<<endl;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	do{
	cout<<"\tCual es el pueblo ficticio descrito \n\ten 100 anos de soledad?"<<endl;
	cin>>R2;
	if(R2 != "Macondo"){
		i--;
		if (i==0) return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin;}
	else cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";}
	while (InsertCoin == 'S');

	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"\t@  Tercera Pregunta  @"<<endl;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	do{
	cout<<"\tEn el libro el alquimista, a que pais viaja el protagonista \n\tpara encontrar su tesoro?"<<endl;
	cin>>R3;
	if(R3 != "Egipto"){
		i--;
		if (i==0) return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin;}
	else cout<<"\tRespuesta Correcta.\n";}
	while (InsertCoin == 'S');
	
	if((R3 == "Egipto") && (R2 == "Macondo") && (R1 == "Cordero"))cout<<"\n\tFelicidades! Ha respondido Correctamente \n\ttodas las preguntas de la categoria Literatura!"<<endl;
	else cout<<"\n\tTodavia quedan preguntar sin responder."<<endl;
	cout<<"\n\tSi desea seguir jugando, presione cualquier tecla \n\ty volvera al menu de seleccion de categoria.\n\tO escriba Salir para salir del programa."<<endl;
	cin>> NewGamePlus;
	if(NewGamePlus == "Salir") return 0;}

//Aqui empieza una nueva Categoria
if ((tematica == "b") || (tematica == "B")){
	cout<<"\t######################"<<endl;
	cout<<"\t#  Primera Pregunta  #"<<endl;
	cout<<"\t######################"<<endl;
	do{
	cout<<"\tQuién sabia que no sabia nada? "<<endl;
	cin>>R1;
	if(R1 != "Socrates"){
		i--;
		if (i==0) return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n\t"<<endl;
		cin>>InsertCoin;}
	else cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";}
	while (InsertCoin == 'S');
	
	cout<<"\t######################"<<endl;
	cout<<"\t*  Segunda Pregunta  *"<<endl;
	cout<<"\t######################"<<endl;
	do{
	cout<<"\tHenry Ford dijo que el cliente puede elegir el auto de cualquier \n\tcolor que quiera, siempre y cuando sea...?"<<endl;
	cin>>R2;
	if(R2 != "Negro"){
		i--;
		if (i==0) return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin;}
	else cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";}
	while (InsertCoin == 'S');
	
	cout<<"\t######################"<<endl;
	cout<<"\t#  Tercera Pregunta  #"<<endl;
	cout<<"\t######################"<<endl;
	do{
	cout<<"\tQuien dijo;: quien nunca ha cometido un \n\terror nunca ha probado algo nuevo?"<<endl;
	cin>>R3;
	if(R3 != "Einstein"){
		i--;
		if (i==0) return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin;}}
	while (InsertCoin == 'S');
	
	if((R3 == "Einstein") && (R2 == "Negro") && (R1 == "Socrates"))cout<<"\n\tFelicidades! Ha respondido Correctamente \n\ttodas las preguntas de la categoria Frases!"<<endl;
	else cout<<"\n\tTodavia quedan preguntar sin responder."<<endl;
	cout<<"\n\tSi desea seguir jugando, presione cualquier tecla \n\ty volvera al menu de seleccion de categoria.\n\tO escriba Salir para salir del programa."<<endl;
	cin>> NewGamePlus;
	if(NewGamePlus == "Salir") return 0;}

//Aqui empieza una nueva Categoria
if ((tematica == "C") || (tematica == "c")){
	cout<<"\t**********************"<<endl;
	cout<<"\t*  Primera Pregunta  *"<<endl;
	cout<<"\t**********************"<<endl;
	do{
	cout<<"\tDelfin empieza con D y termina con..."<<endl;
	cin>>R1;
	if((R1 != "T") && (R1 != "t")){
		i--;
		if (i==0) return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n\t(Pista: solo tiene 24 posibilidades)"<<endl;
		cin>>InsertCoin;}
	else cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";}
	while (InsertCoin == 'S');
	
	cout<<"\t**********************"<<endl;
	cout<<"\t*  Segunda Pregunta  *"<<endl;
	cout<<"\t**********************"<<endl;
	do{
	cout<<"\tEn una habitacion se encuentran 2 personas tratando de resolver \n\tel siguiente problema binario:\n\tCuantas personas hay en la habitacion?"<<endl;
	cin>>RA2;
	if(RA2 != 10){
		i--;
		if (i==0) return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin;}
	else cout<<"\tFelicidades! Respuesta Correcta.\n\tSiguiente Pregunta.\n\n";}
	while (InsertCoin == 'S');
	
	cout<<"\t**********************"<<endl;
	cout<<"\t*  Tercera Pregunta  *"<<endl;
	cout<<"\t**********************"<<endl;
	do{ cout<<"\tCuantas veces me arrogo error este simpre programa?"<<endl;
	cin>>RA3;
	if((RA3 < 1000) || (RA3 > 10000)){
		i--;
		if (i==0) return 0;
		cout<<"\tRespuesta Incorrecta\n\tDesea volver a intentarlo? Ingrese S de Si\n"<<endl;
		cin>>InsertCoin;}
	else cout<<"\tBastante cerca... Respuesta Correcta.\n";}
	while (InsertCoin == 'S');
	
	if(((RA3 > 1000) || (RA3 < 10000)) && (RA2 == 10) && ((R1 == "T") || (R1 == "t")))cout<<"\n\tFelicidades! Ha respondido Correctamente \n\ttodas las preguntas de la categoria Frases!"<<endl;
	else cout<<"\n\tTodavia quedan preguntar sin responder."<<endl;
	cout<<"\n\tSi desea seguir jugando, presione cualquier tecla \n\ty volvera al menu de seleccion de categoria.\n\tO escriba Salir para salir del programa."<<endl;
	cin>> NewGamePlus;
	if(NewGamePlus == "Salir") return 0;}}
while (tematica != "Regresar al pasado Ahora");
return 0;}


/*
Las respuestas en el orden que aparecen las preguntas son:
A)Cordeo - Macondo - Egipto
B)Socrates - Negro - Einstein
C)T - 10 - Cualquier num mayor a 1000 y menor a 10000
*/
