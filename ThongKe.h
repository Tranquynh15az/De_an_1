#ifndef THONGKE_H
#define THONGKE_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <string>
#include "Sach.h"
#include "PhieuMuon.h"

class thongKe {
private:
    std::vector<Sach> dsSach;
    std::vector<PhieuMuon> dsPhieuMuon;

public:
    void thongKeSachTheoTheLoai();
    void sachDuocMuonNhieuNhat();
    void thongKeSoLuongSachTonKho();
    // Các phương thức khác nếu cần
};

#endif
