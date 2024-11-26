#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

float phi = 3.14;

float volkubus(int sisi1, int sisi2, int sisi3){
	return sisi1*sisi2*sisi3;
}
float luaskubus(int sisi1, int sisi2){
	return 6*sisi1*sisi2;
}
float volbalok(int panjang, int lebar, int tinggi){
	return panjang*lebar*tinggi;
}
float luasbalok(int panjang, int lebar, int tinggi){
	return 2*((panjang*lebar)*(panjang*tinggi)*(lebar*tinggi));
}
float voltabung(int radius, int tinggi){
	return phi*radius*radius*tinggi;
}
float luastabung(int radius, int tinggi){
	return 2*phi*radius*(radius+tinggi);
}
float volbola(int radius){
	return 4/3*phi*radius*radius*radius;
}

void printgaris(int n){
	for(int i = 0; i<= n; i++){
		cout<<"-";
	}
	cout<<endl;
}




int main(){
	int pilih, sisi1, sisi2, sisi3, panjang, lebar, tinggi, radius;
	char select;
	
	
	do{
	
	cout<<"Silahkan pilih ingin menghitung apa : "<<endl;
	cout<<"1. KUBUS"<<endl;
	cout<<"2. BALOK"<<endl;
	cout<<"3. TABUNG"<<endl;
	cout<<"4. BOLA"<<endl;
	cout<<"Pilih nomor : "; cin>>pilih;
	printgaris(20);
	
	if(pilih==1){//kubus
		cout<<"Masukkan sisi 1 : "; cin>>sisi1;
		cout<<"Masukkan sisi 2 : "; cin>>sisi2;
		cout<<"Masukkan sisi 3 : "; cin>>sisi2;
		cout<<endl;
		cout<<"Hasil = "<<"Volume Kubus : "<<volkubus(sisi1, sisi2, sisi3)<<"cm3"<<endl;
		cout<<"\tLuas permukaan kubus : "<<luaskubus(sisi1,sisi2)<<"cm2"<<endl;
	}else if(pilih==2){//balok
		cout<<"Masukkan panjang : ";cin>>panjang;
		cout<<"Masukkan lebar : ";cin>>lebar;
		cout<<"Masukkan tinggi : ";cin>>tinggi;
		cout<<endl;
		cout<<"Hasil = "<<"Volume Balok : "<<volbalok(panjang, lebar, tinggi)<<"cm3"<<endl;
		cout<<"\tLuas permukaan balok : "<<luasbalok(panjang,lebar,tinggi)<<"cm2"<<endl;
	}else if(pilih==3){//tabung
		cout<<"Masukkan radius : ";cin>>radius;
		cout<<"Masukkan tinggi : ";cin>>tinggi;
		cout<<endl;
		cout<<"Hasil = "<<"Volume tabung : "<<voltabung(radius, tinggi)<<"cm3"<<endl;
		cout<<"\tLuas permukaan tabung : "<<luastabung(radius, tinggi)<<"cm2"<<endl;
	}else if(pilih==4){//bola
		cout<<"Masukkan radius : ";cin>>radius;
		cout<<endl;
		cout<<"Hasil = "<<"Volume bola : "<<volbola(radius)<<"cm3"<<endl;
	}else{
		cout<<"Kocak"<<endl;
	}
	
printgaris(20);
cout<<"Ingin mengulang?? (y/n)"<<" = ";cin>>select;
system("cls");
}
while(select=='Y'||select=='y');
	
	
}
