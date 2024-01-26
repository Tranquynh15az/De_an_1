#pragma once
#include <iostream>
#include <vector> 
#include "NguoiDoc.h"
#include "Sach.h"

using namespace std;

class PhieuMuon {
private:
    int soPhieu;
    NguoiDoc nguoiMuon; 
    vector<Sach> dsMuon;
    string ngayMuon, ngayTra;

public:
    void setSoPhieu(int soPhieu);
    int getSoPhieu();

    void setNgayMuon(string ngayMuon); 
    string getNgayMuon();

    void setNgayTra(string ngayTra);
    string getNgayTra();

    void setNguoiMuon(NguoiDoc nguoiMuon);
    NguoiDoc getNguoiMuon();

    void taoPhieuMoi();
    void themPhieuSach();
    void xoaSachKhoiPhieu();  

    int tinhTienPhat();
};