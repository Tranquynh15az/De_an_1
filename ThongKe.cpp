// thongKe.cpp
#include "thongKe.h"

void thongKe::thongKeSachTheoTheLoai() {
    std::map<std::string, int> mapTheLoai;

    // Duyệt danh sách đếm mọi thể loại
    for (Sach s : dsSach) {
        std::string theLoai = s.getTheLoai();
        mapTheLoai[theLoai]++;
    }

    // In kết quả thống kê ra màn hình
    std::cout << "Thong ke so luong sach theo the loai:" << std::endl;
    for (auto it : mapTheLoai) {
        std::cout << it.first << ": " << it.second << " quyen" << std::endl;
    }
}

void thongKe::sachDuocMuonNhieuNhat() {
    std::map<std::string, int> mapSach;

    // Đếm số lượng mỗi quyển sách
    for (PhieuMuon pm : dsPhieuMuon) {
        std::vector<Sach> ds = pm.getDsSach();
        for (Sach s : ds) {
            std::string theLoai = s.getTheLoai();
            mapSach[theLoai]++;
        }
    }

    // Tìm sách có số lượng mượn nhiều nhất
    int maxCount = 0;
    std::string TheLoaiMuonNhieuNhat;
    for (auto it : mapSach) {
        if (it.second > maxCount) {
            maxCount = it.second;
            TheLoaiMuonNhieuNhat = it.first;
        }
    }

    // In kết quả thống kê ra màn hình
    std:: cout << "The loai duoc muon nhieu nhat: ";
    if (!TheLoaiMuonNhieuNhat.empty()) {
        std::cout << TheLoaiMuonNhieuNhat << " - " << maxCount << " quyen" << std::endl;
    } else {
        std::cout << "Khong co sach nao duoc muon." << std::endl;
    }
}

// Thống kê số lượng sách tồn kho
void thongKe::thongKeSoLuongSachTonKho() {
    int tongSoLuongTonKho = 0;

    // Duyệt danh sách để tính tổng số lượng sách tồn kho
    for (Sach s : dsSach) {
        tongSoLuongTonKho += s.getSoLuong();
    }

    // In kết quả thống kê ra màn hình
    std::cout << "Tong so luong sach ton kho: " << tongSoLuongTonKho << " quyen" << std::endl;
}
