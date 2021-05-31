// MD5:nKN5he1rYMMAYDtpO089+A==
#include<cmath>
#include<ctime>
#include"biblioteka_vrijeme.cc"
using namespace std;
int broj_elemenata=0;

struct troba{
int sifra;
char naziv[30];
int skladiste;
float cijena;
int vrijeme=0;
troba *sljedeci;
};

void kraj_liste(troba*lista)
{ 
	
	
	
	troba *novi,*zadnji;
	zadnji = lista;
	
	while(zadnji->sljedeci)
	{
		zadnji=zadnji->sljedeci;
	}
	
	
		novi=new troba;
		zadnji->sljedeci=novi;
		novi->sljedeci=NULL;
		vrijeme_pocetak();
		cout<<"Sifra robe: "<<endl;
		cin>>novi->sifra;
		cout<<"Naziv robe: "<<endl;
		unos(novi->naziv);
		cout<<"Broj skladista: "<<endl;
		cin>>novi->skladiste;
		cout<<"Cijena robe:"<<endl;
		cin>>novi->cijena;
		vrijeme_kraj();
		novi->vrijeme =vrijeme_proteklo()/1000;
		broj_elemenata++;
		
	
};

void ispis(troba*lista)
{
troba *tekuci =lista->sljedeci;
cout<<"ISPIS"<<endl;

while(tekuci)
{
cout<<"Adresa elementa"<<int((size_t)tekuci)<<endl;
cout<<"Sifra robe:"<<tekuci->sifra<<endl;
cout<<"Naziv robe:"<<tekuci->naziv<<endl;
cout<<"Broj skladista:"<<tekuci->skladiste<<endl;
cout<<"Cijena robe:"<<tekuci->cijena<<endl;
cout<<"Vrijeme potrebno za unos:"<<tekuci->vrijeme<<"sekundi"<<endl;
cout<<"Adresa sljedeceg elementa:"<<int((size_t)tekuci->sljedeci)<<endl;
cout<<"------------------------"<<endl;
tekuci =tekuci->sljedeci;
}
};

void pretr(troba*lista,int sifra)
{
troba*tekuci=lista->sljedeci;
cout<<"PRETRAZIVANJE:"<<endl;
while(tekuci)
{
if(tekuci->sifra == sifra)
{
cout<<"Adresa elementa"<<int((size_t)tekuci)<<endl;
cout<<"Sifra robe:"<<tekuci->sifra<<endl;
cout<<"Naziv robe:"<<tekuci->naziv<<endl;
cout<<"Broj skladista:"<<tekuci->skladiste<<endl;
cout<<"Cijena robe:"<<tekuci->cijena<<endl;
cout<<"Vrijeme potrebno za unos:"<<tekuci->vrijeme<<endl;
cout<<"Adresa sljedeceg elementa"<<int((size_t)tekuci->sljedeci)<<endl;
cout<<"------------------------"<<endl;
return;
}
tekuci=tekuci->sljedeci;
}
cout<<"Element nije pronaden!"<<endl;
};

void brisi(troba*lista, int sifra){

troba*brisi=lista->sljedeci,*prethodni=lista;
cout<<"BRISANJE"<<endl;
while(brisi)
{
if(brisi->sifra==sifra)
{
prethodni->sljedeci=brisi->sljedeci;
delete brisi;
cout<<"Element je izbrisan iz vezane liste"<<endl;
return;
}
prethodni =brisi;
brisi= brisi->sljedeci;
}
cout<<"Element za brisanje nije prona�en!"<<endl;
};

int main(){

int izbor, sifra;
troba *lista =new troba;
lista->sljedeci=NULL;

do{

cout<<"Odaberite program koji zelite izvrsiti:"<<endl;
cout<<"1.Unos novog elementa vezane liste(samo jedan na kraj liste)"<<endl;
cout<<"2.Ispis sadr�aja vezane liste zajedno s ukupnom vrijednosti robe"<<endl;
cout<<"3.Pretra�ivanje vezane liste(prema nazivu robe)"<<endl;
cout<<"4.Delokacija cijele liste(glava ostaje)"<<endl;
cout<<"9.Izlaz iz programa"<<endl;
cout<<"---------------"<<endl;
cin>>izbor;
cout<<"---------------"<<endl;

switch(izbor)
{
case 1:kraj_liste(lista);break;
case 2:ispis(lista);break;
case 3:cout<<"Unesite sifru za pretragu"<<endl;
cin>>sifra;break;
pretr(lista,sifra);break;
case 4:cout<<"Uensite sifru za brisanje"<<endl;
cin>>sifra;break;
brisi(lista,sifra);break;
case 9: break;
default:
cout<<"Pogresan unos!"<<endl;break;
}

}while(izbor!=9);

	system("PAUSE");
}