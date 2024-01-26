#include <iostream>
#include <vector>
#include "PhieuMuon.h"
#include "Sach.h"
#include "NguoiDoc.h"

using namespace std;

int main() {
    vector<Sach> dsSach;
    // Khởi tạo danh sách sách

    NguoiDoc doc;
    doc.themNguoiDoc();
    // Nhập thông tin người đọc

    PhieuMuon pm;
    pm.taoPhieuMoi();

    int n;
    cout << "Nhập số lượng sách muốn mượn: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Sach s;
        s.them();
        dsSach.push_back(s);
        pm.taoPhieuMoi();
    }

    int songaytre = pm.tinhTienPhat();
    if (songaytre > 0) {
        cout << "Số ngày trễ: " << songaytre << endl;
        cout << "Tiền phạt: " << songaytre << " VND" << endl;
    }

    pm.xoaSachKhoiPhieu();

    return 0;
}
