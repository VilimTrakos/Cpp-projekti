// MD5:R779GN1ytrgByqMCg4a4xg==
#include<fstream>
#include<ctime>
using namespace std;
void TEST(int i){fstream dat;dat.clear(); 
  static int p[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; 
  static int suma=0;static int zag=0;static int zaglavlje=0;static int br=0;p[i]++;suma++;int f,s=0;char c;
  for (f=0;f<60;f++)s=s+p[f];if (s!=suma){cout<<"Neispravna suma brojaca. Poziv: TEST("<<i<<")"<<endl;cin>>c;return;} 
  zag=(int)time(0);if (zag==zaglavlje){br++;if ((br>1)&&(p[i]>1))return;} else br=0;zaglavlje = (int)time(0);
  dat.open("testiranje.txt",ios::out);
  dat << zaglavlje << endl <<"Rezultati testiranja (test N = 10):" << endl; 
  for (f=0;f<60;f++){if (p[f]>0) dat << f << char(58) << p[f] << endl;} 
  dat.close();dat.clear(); 
}; 
 #include <iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include"biblioteka_vrijeme.cc"
#include<ctime>
#include<iomanip>
using namespace std;



void polje(){TEST(1);
  float suma;
  float* polje=new float[4]{3.56,7.17,5.12,4.21};
  for(int i=0;i<4;i++)
  {TEST(2);
    cout<<polje[i]<<endl;
    suma+=polje[i];
  }  
  cout<<"Zbroj clanova polja je:"<<suma<<endl;
  
}

float pov(float stra, float strb)
{TEST(3);
  float pov;
  pov=(stra*strb)/2;
  return pov;
  
}

void funkcija(){TEST(4);

  float a=0,b=0;

  cout<<"Unesite vrijednost stranice a"<<endl;
  cin>>a;
  cout<<"Unesite vrijednost stranice b"<<endl;
  cin>>b;
  if(a<0)
    a=-a;
    if(b<0)
    b=-b;
  cout<<"povrsina trokuta je: "<<pov(a,b)<<endl;

}



struct taparat{
  
  int sifra;
  char naziv[13];
  int godina;

};
void struktura()
{TEST(5);
    taparat aparat,pomvar;
    aparat.sifra=1271;
    strcpy(aparat.naziv, "Hladnjak_xwo");
    aparat.godina=2018;
    
    memcpy(&pomvar,&aparat,sizeof(taparat));
    cout<<"Vas aparat:"<<endl<<endl;
    
    cout<<"Sifra:    "<<pomvar.sifra<<endl
    <<"Naziv:    "<<pomvar.naziv<<endl
    <<"Godina proizvodnje:     "<<pomvar.godina<<endl<<endl;
    
}



void mjerenje(){TEST(6);
  

  float a,b,c;
  float s,pov;
  
  do{TEST(7);
    cout<<"Unesite duzine stranica trokuta:"<<endl;
    vrijeme_pocetak();
    cin>>a>>b>>c;
    vrijeme_kraj();
    s=(a+b+c)/2;
    
  }while(a<0 || b<0 ||c<0 ||a>s ||b>s||c>s);
  
  cout<<"Trebalo vam je: "<<vrijeme_proteklo()<<"tisucinki sekunde" <<endl;  
  
  pov=sqrt(s*(s-a)*(s-b)*(s-c));
  
  cout<<"Povrsina vaseg trokuta je: "<<setprecision(2)<<pov<<endl;

}




int main(){TEST(8);

  int odabir;
  do{TEST(9);
  cout<<endl;
  cout<<"Odaberite program:"<<endl;
  cout<<"1.Polje"<<endl
  <<"2.Funkcija"<<endl
  <<"3.Struktura"<<endl
  <<"4.Mjerenje vremena"<<endl
  <<"9.Izlaz iz programa"<<endl;
  cin>>odabir;
    TEST(10); switch(odabir)
    {
      case 1:polje();break;
      case 2:funkcija();break;
      case 3:struktura();break;
      case 4:mjerenje();break;
      case 9: break;
      
      default:
        cout<<"Pogresan unos"<<endl;
      
    }
  cout<<endl;
  
  }while(odabir!=9);

  system("PAUSE");
  return 0;
}
  
  
    