#include "ThuVien_QLSV.h"
void nhap_SV(SINHVIEN& sv)
{
	cout << "nhap ma so sinh vien ";
	cin >> sv.masv;
	cout << "nhap ten sinh vien ";
	cin >> sv.tensv;
	cout << "nhap gioi tinh ";
	cin >> sv.gioitinh;
	cout << "nhap diem van ";
	cin >> sv.dVan;
	cout << "nhap diem toan ";
	cin >> sv.dToan;
	cout << "nhap diem tieng anh ";
	cin >> sv.dTiengAnh;	
}
