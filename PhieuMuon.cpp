#include "PhieuMuon.h"
#include <iostream>
std::vector<Sach>dsMuon;
void PhieuMuon::taoPhieuMoi() {
    cout << "Nhập số phiếu mượn: ";
    cin >> soPhieu;
    cout << "Nhập ngày mượn (dd/mm/yyyy): ";
    cin >> ngayMuon;
    cout << "Nhập ngày trả (dd/mm/yyyy): "; 
    cin >> ngayTra;
}

void themPhieuSach(Sach sach) {
    dsMuon.push_back(sach);
    cout << "Đã thêm sách " << sach.getTenSach() << " vào phiếu mượn." << endl;
}

void PhieuMuon::xoaSachKhoiPhieu() {
    string tenSach;
    cout << "Nhập tên sách cần xóa khỏi phiếu: ";
    cin.ignore();
    getline(cin, tenSach);

    for (size_t i = 0; i < dsMuon.size(); i++) {
        if (dsMuon[i].getTenSach() == tenSach) {
            dsMuon.erase(dsMuon.begin() + i);
            cout << "Đã xóa sách " << tenSach << " khỏi phiếu mượn." << endl; 
            return;
        }
    }

    cout << "Khong tim thay sach trong phieu muon." << endl;
}

int PhieuMuon::tinhTienPhat() {
    string ngayMuonStr, ngayTraStr;
    cout << "Nhập ngày mượn (dd/mm/yyyy): ";
    cin.ignore();
    getline(cin, ngayMuonStr);
    
    cout << "Nhập ngày trả (dd/mm/yyyy): ";
    getline(cin, ngayTraStr);

    // Chuyển chuỗi ngày thành ngày tháng
    int ngayMuon, thangMuon, namMuon;
    sscanf(ngayMuonStr.c_str(), "%d/%d/%d", &ngayMuon, &thangMuon, &namMuon);

    int ngayTra, thangTra, namTra;
    sscanf(ngayTraStr.c_str(), "%d/%d/%d", &ngayTra, &thangTra, &namTra);

    // Tính số ngày trễ
    int songaytre = (namTra - namMuon) * 365 + (thangTra - thangMuon) * 30 + (ngayTra - ngayMuon);
          
    if (songaytre > 0) {
        return songaytre * 2000; 
    } else {
        return 0;
    }
}
