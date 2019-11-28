#include "ThuVien_QLSV.h"

void nhap_SV(SINHVIEN& sv)
{
	cout << "\nNhap ma sinh vien: ";
	cin >> sv.masv;
	cout << "\nNhap ten sinh vien: ";
	cin.ignore();
	cin.getline(sv.tensv, 30);
	cout << "\nNhap gioi tinh: ";
	cin >> sv.gioitinh;
	cout << "\nNhap nam sinh: ";
	cin >> sv.namsinh;
	cout << "\nNhap diem mon Toan: ";
	cin >> sv.dToan;
	cout << "\nNhap diem mon Van: ";
	cin >> sv.dVan;
	cout << "\nNhap diem mon Tieng Anh: ";
	cin >> sv.dTiengAnh;
	tinhDTB_SV(sv);
}
void xuat_SV(SINHVIEN sv) {

}

void tinhDTB_SV(SINHVIEN& sv) {
	sv.dtb = (sv.dToan + sv.dVan + sv.dTiengAnh) / 3;
}

void xeploai_SV(SINHVIEN a) {

}

void nhap_DSSV(DANHSACH_SV &a ) {
	cout << "\nNhap so sinh vien trong danh sach: ";
	cin >> a.n;
	cout << "\nNhap thong tin cho tung sinh vien." << endl;
	for (int i = 0; i < a.n; i++)
	{
		cout << "\nNhap thong tin sinh vien thu: " << i + 1 << endl;
		nhap_SV(a.dssv[i]);
	}


}

	void xuat_DSSV(DANHSACH_SV a[], int n){

}

void sapxep_DSSV(DANHSACH_SV a[], int n) {

}

void xeploai_DSSV(DANHSACH_SV a[], int n) {

}

void xuatFile(DANHSACH_SV a[], int n, char fileName[]) {

}