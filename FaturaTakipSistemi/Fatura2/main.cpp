#include <iostream>
#include<istream>
#include<fstream>
#include<windows.h>
#include<ctime>

using namespace std;
class Kullanici{
	public:
		string isim;
		string sifre;
		string faturaAdi;
        string ay;
        int gun;
        int yil;
        int tutar;
        int toplam=0;
        int gelir;

        int FaturaToplami(int top){
            cin>>tutar;
            top=top+tutar;


        return top;
        }


};

int main()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    cout <<dt << endl;
    Kullanici kullanici1;

    system("color 30");

    ofstream yazmaDosyasi;
	yazmaDosyasi.open("onGosterim.txt");
	ofstream arsiv;
	arsiv.open("arsivs.txt",ios::app);
	ifstream dosyayiOku;
	dosyayiOku.open("onGosterim.txt");
	char n;
	ifstream arsiv1;
	arsiv1.open("arsivs.txt");
	char y;

    int fatura;
    int i=1;
    int x;
    kullanici1.isim="Sadik";
	kullanici1.sifre="Sadik";
	string isim1;
	string sifre1;
	cout<<"\t\t****FATURA TAKIP SISTEMI****"<<endl;
	cout<<"Kullanim Amaci:"<<endl;
	cout<<"Programin amaci evin gelir gider kontrolunu yapmak \n ve faturalarin ay ay ne kadar geldigini kontrol etmek\n\n"<<endl;
   cout<<"***KULLANICI GIRISI***\n"<<endl;
   cout << "Kullanici Adi: ";
   cin >> isim1;
   cout << "\tSifre: ";
   cin >> sifre1;
   system("cls");
    if(isim1==kullanici1.isim && sifre1==kullanici1.sifre){
        cout << "Tebrikler! Giris yaptýnýz.\n"<<endl;
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
		  switch(x)
		  {
        case 1:
        cout<<"Lutfen bu kac gider gireceginizi yazininiz:";
        cin>>fatura;
        cout<<"Sorulan sorulari cevaplayiniz.\n"<<endl;


         while(i<=fatura){
        cout<<"Gider Adi;"<<endl;
        cin>>kullanici1.faturaAdi;
        cout<<"\n\n";


        cout<<"Giderin Son Odeme Tarihi;"<<endl;
        cout<<"Gun:";
        cin>>kullanici1.gun;
        cout<<"Ay:";
        cin>>kullanici1.ay;
        cout<<"Yil:";
        cin>>kullanici1.yil;
        cout<<"\n\n";


        cout<<"Gider Tutari:"<<endl;
        cin>>kullanici1.tutar;
        cout<<"**********************************************"<<endl;
        kullanici1.toplam=kullanici1.toplam+kullanici1.tutar;

        yazmaDosyasi<<kullanici1.faturaAdi<<":"<<kullanici1.tutar<<"TL\t"<<kullanici1.gun<<"/"<<kullanici1.ay<<"/"<<kullanici1.yil<<"\n"<<endl;
        arsiv<<kullanici1.faturaAdi<<":"<<kullanici1.tutar<<"TL\t"<<kullanici1.gun<<"/"<<kullanici1.ay<<"/"<<kullanici1.yil<<"\n"<<endl;

i++;
}
cout<<"Toplam:"<<kullanici1.toplam;
system("cls");
cout<<"Bu ay gelirinizin miktarini giriniz:";
cin>>kullanici1.gelir;
yazmaDosyasi<<"Toplam:"<<kullanici1.toplam<<endl;
arsiv<<"Toplam:"<<kullanici1.toplam<<endl;
yazmaDosyasi<<"Gelir:"<<kullanici1.gelir<<endl;
arsiv<<"Gelir:"<<kullanici1.gelir<<endl;
yazmaDosyasi<<"Kar\Zarar"<<kullanici1.gelir-kullanici1.toplam<<"TL"<<endl;
arsiv<<"Kar\Zarar:"<<kullanici1.gelir-kullanici1.toplam<<"TL"<<endl;
system("cls");
yazmaDosyasi<<"******************************************************"<<endl;
arsiv<<"*****************************************************"<<endl;

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
