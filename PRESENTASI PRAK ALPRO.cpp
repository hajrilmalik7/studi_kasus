#include<iostream>
#include<string>
#include<conio.h>

using namespace std;
int main(){
	int ag=17000, ab=21000, hargabarang,disc,hargabersih;
	int p, menu,jumlah,bayar,diskon;
	string nama;

	
	
	cout<<"TOKO AYAM X"<<endl;
	cout<<"Menu :"<<endl;
	cout<<"1. ayam Goreng"<<endl;
	cout<<"2. Ayam Bakar"<<endl;
	cout<<"pilih  menu :";cin>>menu;
	
	if(menu==1){
		cout<<"banyak porsi : ";cin>>p;
		jumlah =p*ag;
		cout<<"total harga = Rp. "<<jumlah<<endl;
	}
	else{
		cout<<"Banyak Porsi : ";cin>>p;
		jumlah = p*ab;
		cout<<"Total Harga = Rp. "<<jumlah<<endl;
   if(jumlah>45000){
   disc=jumlah*0.1;
   jumlah=jumlah-disc;
   }
   else{
   	diskon=0;
   	jumlah=jumlah-disc;}
   	cout<<"diskon 10%";
	   cout<<endl;
   	cout<<"total termasuk diskon"<<jumlah;

    return 0;

}
}
