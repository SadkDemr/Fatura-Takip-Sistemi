#include <iostream>
#include <clocale>
#include<istream>
#include<fstream>


using namespace std;

class Kullanici{
	public:
		string isim;
		string sifre;


};
class Fatura{
public:
    string ay;
    int yil;
    int elektrikFaturasi;
    int suFaturasi;
    int dogalgazFaturasi;
    int internetFaturasi;
    int kira;
    int aydat;
    int gidaGideri;
    void aylar(){
        cout<<"AY / YIL :"<<ay<<"/"<<yil<<"\n"<<endl;

    }


    void efTutari(){
        cout<<"Elektrik faturasi:"<<elektrikFaturasi<<"TL\n"<<endl;

   }
    void sfTutari(){
        cout<<"Su faturasi:"<<suFaturasi<<"TL\n"<<endl;

   }
 void dgfTutari(){
        cout<<"Dogalzgaz faturasi:"<<dogalgazFaturasi<<"TL\n"<<endl;

   }
 void ifTutarii(){
        cout<<"Ineternet faturasi:"<<internetFaturasi<<"TL\n"<<endl;

   }
 void kiraTurari(){
        cout<<"Kira:"<<kira<<"TL\n"<<endl;

   }
void aydatTutari(){
    cout<<"Aydat:"<<aydat<<"TL\n"<<endl;

}
void gidaTutari(){
    cout<<"Gida Tutari:"<<gidaGideri<<"TL\n"<<endl;
}
};
class Para{
    public:
    int aylik;
    void gelir(){
        cout<<"Aylik Gelir"<<aylik<<"TL\n"<<endl;


    }



};
int main ()
{
    setlocale(LC_ALL, "Turkish");
    system("title FATURA TAKIP SISTEMI");

	Kullanici kullanici1;
	kullanici1.isim="Sadik";
	kullanici1.sifre="Sadik";
	Fatura fatura1;
	Para cokPara;
	int toplam;
	int x;

	ofstream yazmaDosyasi;
	yazmaDosyasi.open("fatura.txt");
	ofstream arsiv;
	arsiv.open("eski.txt",ios::app);
	ifstream dosyayiOku;
	dosyayiOku.open("fatura.txt");
	char n;
	ifstream arsiv1;
	arsiv1.open("eski.txt");
	char y;
	string isim1;
	string sifre1;
	cout<<"----FATURA TAKIP SISTEMI----"<<endl;
	cout<<"Kullanim Amaci:"<<endl;
	cout<<"Programin amaci evin gelir gider kontrolunu yapmak \n ve faturalarin ay ay ne kadar geldigini kontrol etmek\n\n"<<endl;
   cout<<"---Kullanici Girisi---\n"<<endl;
   cout << "Kullanici Adi: ";
   cin >> isim1;
   cout << "\tSifre: ";
   cin >> sifre1;
	if(isim1==kullanici1.isim && sifre1==kullanici1.sifre){
		 cout << "Tebrikler! Giris yaptınız.\n"<<endl;
		 system("cls");
		 donus:
         donus2:
		 cout<<"Yapmak Istediginiz Islemi Seciniz:\n"<<endl;
		 cout<<"Yeni gider bilgisi girmek (1)"<<endl;
		 cout<<"Eski kayitlara bakmak icin(2)"<<endl;
		 cout<<"Cikis icin(3)"<<endl;
		 cout<<"(1) / (2) / (3):";
		 cin>>x;
		 system("cls");
		 switch(x){

		 case 1:
		 //Ay YIL
		 cout<<"Hangi ay ve yilin faturalarini takip ettiginizi yaziniz:";
		 cin>>fatura1.ay;
		 cin>>fatura1.yil;
		 yazmaDosyasi<<"AY / YIL :"<<fatura1.ay<<"/"<<fatura1.yil<<"\n"<<endl;
		 arsiv<<"AY / YIL :"<<fatura1.ay<<"/"<<fatura1.yil<<"\n"<<endl;

		 fatura1.aylar();

		 //Elektrik Faturasý Ýçin
		 cout<<"Elektrik faturasi tutarini giriniz:";
		 cin>>fatura1.elektrikFaturasi;
		 yazmaDosyasi<<"Elektrik faturasi tutarini giriniz:";
		 yazmaDosyasi<<fatura1.elektrikFaturasi<<"TL\n"<<endl;
		 arsiv<<"Elektrik faturasi tutarini giriniz:";
		 arsiv<<fatura1.elektrikFaturasi<<"TL\n"<<endl;

         fatura1.efTutari();

         //Su faturasý için
         cout<<"Su faturasi tutarini giriniz:";
         cin>>fatura1.suFaturasi;
         yazmaDosyasi<<"Su faturasi tutarini giriniz:";
         yazmaDosyasi<<fatura1.suFaturasi<<"TL\n"<<endl;
         arsiv<<"Su faturasi tutarini giriniz:";
         arsiv<<fatura1.suFaturasi<<"TL\n"<<endl;

         fatura1.sfTutari();

         //Doðalgaz Faturasý için
         cout<<"Dogalgaz faturasi tutarini giriniz:";
         cin>>fatura1.dogalgazFaturasi;
         yazmaDosyasi<<"Dogalgaz faturasi tutarini giriniz:";
         yazmaDosyasi<<fatura1.dogalgazFaturasi<<"TL\n"<<endl;
         arsiv<<"Dogalgaz faturasi tutarini giriniz:";
         arsiv<<fatura1.dogalgazFaturasi<<"TL\n"<<endl;

         fatura1.dgfTutari();

         //Ýnternet Faturasý için
         cout<<"Internet faturasi tutarini giriniz:";
         cin>>fatura1.internetFaturasi;
         yazmaDosyasi<<"Internet faturasi tutarini giriniz:";
         yazmaDosyasi<<fatura1.internetFaturasi<<"TL\n"<<endl;
         arsiv<<"Internet faturasi tutarini giriniz:";
         arsiv<<fatura1.internetFaturasi<<"TL\n"<<endl;

         fatura1.ifTutarii();

         //Kira
         cout<<"Kira tutarini giriniz:";
         cin>>fatura1.kira;
         yazmaDosyasi<<"Kira tutarini giriniz:";
         yazmaDosyasi<<fatura1.kira<<"TL\n"<<endl;
         arsiv<<"Kira tutarini giriniz:";
         arsiv<<fatura1.kira<<"TL\n"<<endl;

         fatura1.kiraTurari();

         //Aydat
         cout<<"Aydat tutarini giriniz:";
         cin>>fatura1.aydat;
         yazmaDosyasi<<"Aydat:";
         yazmaDosyasi<<fatura1.aydat<<"TL\n"<<endl;
         arsiv<<"Aydat:";
         arsiv<<fatura1.aydat<<"TL\n"<<endl;

         fatura1.aydatTutari();

         //Gıda
         cout<<"Gida gideri tutarini giriniz:";
         cin>>fatura1.gidaGideri;
         yazmaDosyasi<<"Gida tutari:"<<fatura1.gidaGideri<<"TL\n"<<endl;
         arsiv<<"Gida tutari:"<<fatura1.gidaGideri<<"TL\n"<<endl;

         fatura1.gidaTutari();

         system("cls");
         //toplam
         cout<<"Bu ay ki gelir nedir kral:";
         cin>>cokPara.aylik;
         yazmaDosyasi<<"Aylik Gelir:"<<cokPara.aylik<<"TL"<<endl;
         arsiv<<"Aylik Gelir:"<<cokPara.aylik<<"TL"<<endl;

         cokPara.gelir();
         toplam=fatura1.elektrikFaturasi+fatura1.suFaturasi+fatura1.dogalgazFaturasi+fatura1.internetFaturasi+fatura1.kira+fatura1.aydat+fatura1.gidaGideri;
         cout<<"Toplam aylik kar/zarar:"<<cokPara.aylik-toplam<<"TL";
         system("cls");
         yazmaDosyasi<<"Toplam aylik kar/zarar:"<<cokPara.aylik-toplam<<"TL"<<endl;
         arsiv<<"Toplam aylik kar/zarar:"<<cokPara.aylik-toplam<<"TL"<<endl;




         yazmaDosyasi<<"------------------------------------"<<endl;
         arsiv<<"------------------------------------"<<endl;

         dosyayiOku>>noskipws;
         while(dosyayiOku>>n){
            cout<<n;
         }
         goto donus2;
         case 2 :
            arsiv1>>noskipws;
            while(arsiv1>>y)
            {
                cout<<y;

            }
            goto donus;
         case 3:
            break;

		 }

	}
	else  {
             cout << "Hata! kullanici adi veya sifre hatali";


     }


	return 0;
}
