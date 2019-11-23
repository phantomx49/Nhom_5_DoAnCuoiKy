#include <iostream>
#include <stdio.h>
using namespace std;

const int MAX = 100;
struct SINHVIEN{
	char masv[11];
	char tensv[30];
	char gioitinh[5];
	int namsinh;
	float dToan, dVan, dTiengAnh;
	float dtb = 0;
};

struct DANHSACH_SV
{
	SINHVIEN dssv[MAX];
	int n;
};

//Sinh Vien.
void nhap_SV(SINHVIEN &sv);
void xuat_SV(SINHVIEN sv);
void tinhDTB_SV(SINHVIEN &sv);
void xeploai_SV(SINHVIEN a);


//Danh Sach Sinh Vien
void nhap_DSSV(DANHSACH_SV a[], int n);
void xuat_DSSV(DANHSACH_SV a[], int n);
void sapxep_DSSV(DANHSACH_SV a[], int n);
void xeploai_DSSV(DANHSACH_SV a[], int n);
void xuatFile(DANHSACH_SV a[], int n, char fileName[]);