#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>
void chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
}
using namespace std;
typedef struct Tnode
{
	string data;
	int no;
	Tnode *next;
}data;

typedef struct Pnode
{
	string nama;
	string pesan;
	int jumlah;
	int harga;
	int total;
	int dapat;
	Pnode *Pnext;
}Pdata;


int noan=1;
Pnode *Phead;
Tnode *head;
Tnode *bantu;



void init()
{
	head=NULL;
}

int IsEmpty()
{
	if(head==NULL)
	return 1;
	else
	return 0;
}

void insertbelakang(string n)
{
	int x=0;
	if(head==NULL && bantu!=NULL)
	{
		head=bantu;
		x=5;
	}



	Tnode *baru,*Tbantu;
	baru = new Tnode;
	baru->data = n;
	baru->next = NULL;
	if(IsEmpty()==1)
	{
		head=baru;
		head->no = 1;
		head->next = NULL;
	}else
	{
		Tbantu = head;
		while(Tbantu->next!=NULL)
		{
			Tbantu=Tbantu->next;
		}
		baru->no=Tbantu->no+1;
		Tbantu->next=baru;

	}
	cout<<"Data Terisi";

	if(x==5)
	{
		head=Tbantu->next;
	}
}

int PsEmpty()
{
	if(Phead==NULL)
	return 1;
	else
	return 0;
}


void insertpesanan(string pes, int jum,int harga,int total)
{

	Pnode *Pbaru,*Pbantu;
	Pbaru = new Pnode;
	Pbaru->pesan = pes;
	Pbaru->jumlah= jum;
	Pbaru->harga =harga;
	Pbaru->total=total;

	Pbaru->Pnext = NULL;
	if(PsEmpty()==1)
	{
		Phead=Pbaru;
		Phead->Pnext = NULL;

	}else
	{
		Pbantu = Phead;
		while(Pbantu->Pnext!=NULL)
		{
			Pbantu=Pbantu->Pnext;
		}
		Pbantu->Pnext=Pbaru;

	}
	cout<<"Data Tersimpan";

}



void panggil()
{
	int no=noan;
	if(IsEmpty()==0)
	{
			cout<<"Antrian " << no <<" dipersilahkan Mengisi Data"<<endl;
	}else
			cout<<endl<<"Masih Kosong"<<endl;
}


void tampil()
{
	int no=noan;
	Tnode *cantu;
	cantu = head;
	if(IsEmpty()==0)
	{
		chgcolor(10);
		cout<<"\t\t DAFTAR ANTRIAN"<<endl;
	    cout<<"\t=================================="<<endl;
	    cout<<"\t=====  NO  =====  Nama  =========="<<endl;
	    cout<<"\t=================================="<<endl;
		while(cantu!=NULL)
		{
		    chgcolor(10);
		    cout<<"\t"<<setiosflags(ios::left)<<setw(7)<<"||";
		    chgcolor(15);
		    cout<<"\t"<<setiosflags(ios::left)<<setw(7)<<no;
		    cout<<"\t"<<setiosflags(ios::left)<<setw(8)<<cantu->data;
		    chgcolor(10);
		    cout<<"\t"<<setiosflags(ios::left)<<setw(5)<<"||";
			cantu=cantu->next;
			no++;
			cout<<endl;
		}
		chgcolor(10);
        cout<<"\t=================================="<<endl;
	}else
		cout<<endl<<"PERINGATAN !!!!( MASIH KOSONG )"<<endl;
}



void tampilpesanan()
{
	int no=1;
	Tnode *antu;
	Pnode *Pbantu;

	Pbantu = Phead;
	antu=bantu;
	if(PsEmpty()==0)
	{
            chgcolor(10);
            cout<<"\t\t\t\t\tDATA PEMESANAN TIKET"<<endl;
	        cout<<"==============================================================================================="<<endl;
			cout<<"||== No  =====  Nama  ====  Nama Pesanan  ====  jumlah pesanan  =====  harga  ===== TOTAL ===||"<<endl;
			cout<<"||===========================================================================================||"<<endl;

		while(Pbantu!=NULL)
		{
		    chgcolor(10);
		    cout<<setiosflags(ios::left)<<setw(5)<<"||";
		    chgcolor(15);
            cout<<setiosflags(ios::left)<<setw(11)<<no;
			cout<<setiosflags(ios::left)<<setw(13)<<antu->data;
			cout<<setiosflags(ios::left)<<setw(23)<<Pbantu->pesan;
			cout<<setiosflags(ios::left)<<setw(19)<<Pbantu->jumlah;
			cout<<setiosflags(ios::left)<<setw(13)<<Pbantu->harga;
			cout<<setiosflags(ios::left)<<setw(9)<<Pbantu->total;
			chgcolor(10);
			cout<<setiosflags(ios::left)<<setw(5)<<"||";
			Pbantu=Pbantu->Pnext;
			antu=antu->next;
			no++; cout<<endl;
		}
		chgcolor(10);
		cout<<"==============================================================================================="<<endl;
	}else
		cout<<endl<<"Masih Kosong"<<endl;
}



void hapusdepan()
{
	Tnode *hapus;
	string d;


	if(bantu==NULL)
	bantu = head;


	if(IsEmpty()==0)
	{
		if(head!=NULL)
		{
			noan=noan+1;
			hapus=head;
			d=hapus->data;
			head=hapus->next;
		}

	}else
	cout<<"\nMasih Kosong\n";
}
int main()
{
	int j,h,pil,x;
	char p;
	string n,z;
do{

	chgcolor(11);
cout<<"\t\t||=======Kelompok 11=========||"<<endl;
cout<<"\t\t||tHAFIZ DARMAWAN(5160411121)||"<<endl;
cout<<"\t\t||tM.ALI SODIQIN (5160411128)||"<<endl;
cout<<"\t\t||RENITA ALDEA    (516041117)||"<<endl;
cout<<"\t\t||ANDESKA MASKORI (516041078)||"<<endl;
cout<<"\t\t||===========================||"<<endl;
	chgcolor(15);
	cout<<"\n"<<endl;
        chgcolor(10);
	    cout<<"=============================================================="<<endl;
        cout<<"====APLIKASI PEMESANAN TIKET BUS ANTAR KOTA DAN PROVINSI======"<<endl;
        cout<<"=============================================================="<<endl;
    chgcolor(15);
		cout<<"\tMENU PILIHAN "<<endl;
		cout<<"\t1.Masukan\n";
		cout<<"\t2.Tampilkan Antrian\n";
		cout<<"\t3.Panggil Antrian\n";
		cout<<"\t4.Tampilkan Pesanan \n";
		cout<<"\t5.Clear\n";
		cout<<"\t6.Exit"<<endl;
		cout<<"\tmasukkan pilihan = "; cin>>pil;
		cout<<"\n\n";
		if (pil>=7){
            cout<<"\ttidak ada pilihan !!!"<<endl;
		}
		switch(pil)
		{
			case 1 : cout<<"Masukan Nama : "; cin>>n;
			IsEmpty();
			insertbelakang(n);

			break;

			case 2 :
			IsEmpty();
			tampil();
			break;

			case 3 :
			IsEmpty();

			panggil();
			if(IsEmpty()==0)
				{
						cout<<"Masukan Kota Tujuan    : "; cin>>z;
						cout<<"Masukan Jumlah Tiket   : "; cin>>j;
						cout<<"masukan harga          :";cin>>h;
						x=j*h;
						insertpesanan(z,j,h,x);
						hapusdepan();
				}
			break;

			case 4 :
			PsEmpty();
			tampilpesanan();
			break;

			case 5 :
			head=NULL;
			Phead=NULL;
			cout<<"\n\nData Terhapus\n\n";
			break;

			case 6 :
			cout<<"terimakasih"<<endl;
			break;
			default :
            break;

		}
		cout<<endl;
		chgcolor(15);
		cout<<"Lanjut";
		getch();
	system("cls");
	}while(pil!=6);
	for(int x=1;x<10;x++)

	return 0;
}
