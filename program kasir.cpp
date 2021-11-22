#include <iostream>

using namespace std;

void head(){
	cout
	<<"\t\tProgram List Belanjaan Anda\n";
} 
int main(){
	system("cls");
	head();
	int a;
	cout<<"======================Selamat Datang=============================="<<endl;
	cout<<"Masukkan jumlah barang yang ingin anda beli : ";
	cin>>a;
	string ar[a];
	int arr[a],arrr[a],tot[a];
	int sum=0;
	for(int i=0;i<a;i++){
		cout<<"===================================================="<<endl;
		cout<<"Nama Barang : ";
		cin>>ar[i];
		cout<<"Harga "<<ar[i]<<" : ";
		cin>>arr[i];
		cout<<"Jumlah "<<ar[i]<<" : ";
		cin>>arrr[i];
		tot[i]=arr[i]*arrr[i];
		sum+=tot[i];
	}system("cls");
	cout<<"=============================List Belanja=========================================="<<endl;
	cout
	<<"Nama Barang\t\t\tJumlah\t\t\t Harga\n";
	for(int i=0;i<a;i++){
		cout<<i+1<<". "<<ar[i]<<"\t\t\t\t"<<arrr[i]<<"\t\t\tRp."<<tot[i]<<endl;
		cout<<"======================================================================="<<endl;
	}cout<<"Total Harga Keseluruhan : Rp."<<sum<<endl;
	cout<<endl;
	string c;
	cout<<"==========================================================================="<<endl;
	cout<<"Apakah anda ingin membuat list baru (Y/T)?\n";
	cin>>c;
	if(c=="Y"||c=="y"){
		main();
	}else if(c=="T"||c=="t"){
		cout<<"Terima kasih, Sampai Jumpa Kembali";
	}else{
		cout<<"Masukkan anda salah";
	}
}
