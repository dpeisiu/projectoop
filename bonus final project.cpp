//nama : Defitry Praise Utomo
//kelas : Object Oriented Programming - A
//bonus final

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class NamaUsaha{
	public:
		
		void nama(){
			cout<<"========================================================================================"<<endl<<endl;
			cout<<"selamat datang dalam Toko 4D collection"<<endl;
			cout<<"jika terdapat kesalahan silahkan hubungi customer service kami"<<endl<<endl;
			cout<<"========================================================================================"<<endl<<endl;
		}
		void info(){
			cout<<"========================================================================================"<<endl<<endl;
			cout<<"4D Collection adalah Online shop bisa temukan kami di IG = 4Dcollection, facebook = 4D collection"<<endl;
			cout<<"4D juga bisa ditemukan langsung di Tondano"<<endl<<endl;
			cout<<"kami buka sejak pukul 8.00 AM WITA - 8.00PM WITA"<<endl;
			cout<<"kami menyediakan barang keperluan acara, wisuda dan lain lain"<<endl<<endl;
			cout<<"========================================================================================"<<endl<<endl;
		}
		
		virtual void DaftarProduk(){
			cout<<"1. bunga"<<endl<<"2. gift box"<<endl;
		}
		virtual void paket(){
			cout<<"1. paket lengkap"<<endl<<"request"<<endl;
		}
        virtual void beli(int pilharga){
            cout<<"kami memiliki banyak tawaran dan diskon menarik untuk kalian pelanggan 4D Collection"<<endl;
        }
};

class Owner: public NamaUsaha{
	public:
		void owner(){
		cout<<"Nama owner 1 = Defitry Praise Utomo"<<endl;
		cout<<"Nama Owner 2 = Dinda Utomo"<<endl<<endl;
		}
		void latarbelakang(){
			cout<<"pendidikan owner 1 = SMA (sementara pendidikan S1 di UNKLAB jurusan SI"<<endl;
			cout<<"Pendidikan owner 2 = Sarjana Akuntansi"<<endl<<endl;
		}
};

class Produk: public NamaUsaha{
	public:
		void DaftarProduk(){
		cout<<"DAFTAR PRODUK : "<<endl;
		cout<<"1. Bunga Bunga"<<endl;
		cout<<"2. Gift Box"<<endl<<endl;
		}	
};

class Penjelasan: public Produk{
	public:
	void penjelasanProduk(){
			cout<<"========================================================================================"<<endl<<endl;
			cout<<"PENJELASAN PRODUK : "<<endl;
			cout<<"Bunga tangkai adalah satu bunga yang buat seindah mungkin dengan tangkai dan atribut lainnya"<<endl;
			cout<<"Buket Bunga bisa berbentuk hanya bunga dan bisa juga tangkai-tangkai bunga yang di rangkai menjadi sebuah buket, tergantung request kalian"<<endl;
			cout<<"Gift Box adalah kotak hadiah ataupun bisa direquest bentuk box nya, isi dari gift box bisa kalian request juga"<<endl;
			cout<<"request paket adalah kombinasi antara bunga tangkai dan gift box, atau buket dengan box"<<endl<<endl;
			cout<<"========================================================================================"<<endl<<endl;
		}	
};

class RincianProduk: public NamaUsaha{
	
	public:
		void DaftarProduk(){
		cout<<"========================================================================================"<<endl<<endl;
		cout<<"JENIS - JENIS BUNGA : "<<endl;
		cout<<"Bunga tankai polos"<<endl;
		cout<<"Bunga tangkai + kartu ucapan"<<endl;
		cout<<"buket Bunga satu warna saja"<<endl;
		cout<<"Buket Bunga dengan variasi warna"<<endl;
		cout<<"Buket Bunga paket lengkap"<<endl<<endl;
		cout<<"========================================================================================"<<endl<<endl;
		}
		
		
		void paket(){
			cout<<"========================================================================================"<<endl<<endl;
			cout<<"DAFTAR PAKET BUNGA : "<<endl;
			cout<<"Paket tangkai"<<endl;
			cout<<"paket Bucket"<<endl;
			cout<<"paket complete"<<endl<<endl;
			cout<<"========================================================================================"<<endl<<endl;
		}
};

class RincianProduk1: public NamaUsaha{
	
	public:
	void DaftarProduk(){
			cout<<"========================================================================================"<<endl<<endl;
			cout<<"JENIS - JENIS GIFT BOX : "<<endl;
			cout<<"Gift Box Kotak"<<endl;
			cout<<"Gift Box hexagon"<<endl;
			cout<<"small box"<<endl;
			cout<<"large box"<<endl;
			cout<<"lingkaran"<<endl;
			cout<<"isi dari gift Box sesuai request"<<endl<<endl;
			cout<<"========================================================================================"<<endl<<endl;
		}
		
	void paket(){
			cout<<"========================================================================================"<<endl<<endl;
			cout<<"DAFTAR PAKET GIFT BOX : "<<endl;
			cout<<"Paket Box + letter"<<endl;
			cout<<"paket Big Box, Small Box + Request Cars"<<endl;
			cout<<"Paket box Snack + Photo"<<endl;
			cout<<"paket complete"<<endl<<endl;
			cout<<"========================================================================================"<<endl<<endl;
		}
		
};

class Harga: public Penjelasan{
	int tangkai;
	int buket;
	int largebox;
	int smallbox;
	int paketB;
	float disc;
	public:
		Harga(){
			tangkai=8000;
			buket=50000;
			largebox=50000;
			smallbox=20000;
			paketB=150000;
		}
		
		void getHarga(int tangkai,int buket,int largebox,int smallbox,int paketB){
			this -> tangkai = tangkai;
			this -> buket = buket;
			this -> largebox = largebox;
			this -> smallbox = smallbox;
			this -> paketB = paketB;
			
			cout<<"========================================================================================"<<endl<<endl;
			cout<<"DAFTAR HARGA UMUM : "<<endl;
			cout<<"1. bunga tangkai\t = "<<tangkai<<endl<<"2. buket Bunga\t\t = "<<buket<<endl<<"3. Large Box\t\t = "<<largebox<<endl<<"4. Small Box\t\t = "<<smallbox<<endl<<"5. Paket\t\t = "<<paketB<<endl<<endl;
			cout<<"========================================================================================"<<endl<<endl;
		}
		
		void beli(int pilharga){
			if(pilharga == 1){
				disc = tangkai - (tangkai*15/100);
				cout<<"ANDA MENDAPAT DISKON SEBESAR 15% "<<endl<<endl;
				cout<<"Harga bunga per tangkai setelah diskon (FOR SALE!!!) = "<<disc<<endl;
			}else if(pilharga == 2){
				disc = buket - (buket*25/100);
				cout<<"ANDA MENDAPAT DISKON SEBESAR 25% "<<endl<<endl;
				cout<<"Harga buket bunga setelah diskon (FOR SALE!!!) = "<<disc<<endl;
			}else if(pilharga == 3){
				disc = largebox - (largebox*25/100);
				cout<<"ANDA MENDAPAT DISKON SEBESAR 25% "<<endl<<endl;
				cout<<"Harga gift Box ukuran large setelah diskon (FOR SALE!!!) = "<<disc<<endl;
			}else if(pilharga == 4){
				disc = smallbox - (smallbox*15/100);
				cout<<"ANDA MENDAPAT DISKON SEBESAR 15% "<<endl<<endl;
				cout<<"Harga gift box ukuran small setelah diskon (FOR SALE!!!) = "<<disc<<endl;
			}else if(pilharga == 5){
				disc = paketB - (paketB*25/100);
				cout<<"ANDA MENDAPAT DISKON SEBESAR 25% "<<endl<<endl;
				cout<<"Harga paket lengkap setelah diskon (FOR SALE!!!) = "<<disc<<endl<<endl;
			}else {
				throw pilharga;
			}
		}		
};

class Thankyoucard: public Harga{
	public:
		void thankyou(){
			cout<<"========================================================================================"<<endl<<endl;
			cout<<"JANGAN MELEWATKAN DISKON - DISKON MENARIK LAINNYA"<<endl;
			cout<<"Thankyou For your trusting"<<endl;
			cout<<"Terimakasih untuk kepercayaan anda kepada kami"<<endl<<endl;
			
		}
		
		void happy(){
			cout<<"Happy shopping"<<endl<<endl;
			cout<<"========================================================================================"<<endl<<endl;
		}
};

int main(){
	NamaUsaha *jenis;
	Owner praise;
	
	Thankyoucard Customer;
	
	Customer.nama();
	Customer.info();
	
	int pilihan, pil, pilharga;
	
	do{
		
	cout<<"__________________________________________________________________________________________"<<endl<<endl;
	cout<<"INFO YANG BISA ANDA TEMUKAN DISINI (Masukkan 6 jika anda ingin keluar dari Program): "<<endl;
	cout<<"1. info tentang Owner"<<endl;
	cout<<"2. Daftar Produk + Paket yang ada di 4D Collection"<<endl;
	cout<<"3. Penjelasan setiap produk"<<endl;
	cout<<"4. Harga setiap Produk 4D Collection"<<endl;
	cout<<"5. Pilih Produk yang akan di beli "<<endl;
	cout<<"6. Keluar"<<endl<<endl;
	cout<<"___________________________________________________________________________________________"<<endl<<endl;
	cout<<"Masukkan Pilihan Anda : ";
	cin>>pilihan;
	try{
	if (pilihan == 1){
		system("cls");
		praise.owner();
		praise.latarbelakang();
	
	}else if(pilihan == 2){
		system("cls");
		jenis = new Produk;
		jenis -> DaftarProduk();
		delete jenis;
		
		cout<<"Masukkan Pilihan menu apa yang ingin anda lihat : ";
		cin>>pil;
		
		if (pil == 1){
			jenis = new RincianProduk;
			jenis -> DaftarProduk();
			delete jenis;
		
			jenis = new RincianProduk;
			jenis -> paket();
			delete jenis;
		}else if(pil == 2){
			jenis = new RincianProduk1;
			jenis-> DaftarProduk();
			delete jenis;
			
			jenis = new RincianProduk1;
			jenis -> paket();
			delete jenis;	
		}
	
	}else if(pilihan == 3){
		system("cls");
		Customer.penjelasanProduk();
	
	}else if(pilihan == 4){
		system("cls");
		Customer.getHarga(15000,70000, 70000, 50000, 200000);
	
	}else if (pilihan == 5){
		system("cls");
		try {
		Customer.getHarga(15000,70000, 70000, 50000, 200000);
		cout<<"Masukkan pilihan produk yang akan anda beli : ";
		cin>>pilharga;
		jenis = new Harga;
        jenis -> beli(pilharga);
        delete jenis;
		}
		catch(int pilharga){
		cout<<"Kesalahan : terjadi kesalahan input pada : "<<pilharga<<endl<<endl;
		}
	
	}else {
		throw pilihan;
	}
	}
	
	catch(int pilharga){
		cout<<"Kesalahan : terjadi kesalahan input pada : "<<pilihan<<endl<<endl;
	}
	
	}while(pilihan != 6);

	Customer.thankyou();
	Customer.happy();
}





