#include "Sach.h"
#include <iostream>
#include <string>
#include <vector>
extern std::vector<Sach> dsSach;
// Hàm khởi tạo mặc định
Sach::Sach() : SoLuong(0) {}

// Hàm khởi tạo với tham số
Sach::Sach(std::string tenSach, std::string tacGia, std::string theLoai, int soLuong)
    : TenSach(tenSach), TacGia(tacGia), TheLoai(theLoai), SoLuong(soLuong) {}

// Các hàm thành viên của class Sach
void Sach::them() {
    // Nhập thông tin
    std::cout << "Nhap Ten Sach: "; std::cin >> TenSach;
    std::cout << "Nhap Tac Gia: "; std::cin >> TacGia;
    std::cout << "Nhap The Loai: "; std::cin >> TheLoai;
    std::cout << "Nhap So Luong: "; std::cin >> SoLuong;
}

void Sach::sua() {
    // Hiển thị thông tin cũ
    HienThiThongTinSach();

    // Nhập thông tin sách mới
    std::cout << "Nhap Ten Sach Moi: "; std::cin.ignore(); std::getline(std::cin, TenSach);
    std::cout << "Nhap Tac Gia Moi: "; std::getline(std::cin, TacGia);
    std::cout << "Nhap The Loai Moi: "; std::getline(std::cin, TheLoai);
    std::cout << "Nhap So Luong Moi: "; std::cin >> SoLuong;
}

void Sach::xoa() {
    TenSach = "";
    TacGia = "";
    TheLoai = "";
    SoLuong = 0;
}

std::vector<Sach> Sach::timkiemTheoTen(std::string tenSach) {
    std::vector<Sach> ketQua;

    // Duyệt danh sách các quyển sách
    for (Sach s : dsSach) {
        if (s.getTenSach().find(tenSach) != std::string::npos) {
            // Tên đúng với từ khoá => thêm vào kết quả
            ketQua.push_back(s);
        }
    }
    return ketQua;
}

std::vector<Sach> Sach::timkiemTheoTacGia(std::string tacGia) {
    std::vector<Sach> ketQua;
    for (Sach s : dsSach) {
        if (s.getTacGia().find(tacGia) != std::string::npos) {
            ketQua.push_back(s);
        }
    }
    return ketQua;
}

std::vector<Sach> Sach::timkiemTheoTheLoai(std::string theLoai) {
    std::vector<Sach> ketQua;
    for (Sach s : dsSach) {
        if (s.getTheLoai().find(theLoai) != std::string::npos) {
            ketQua.push_back(s);
        }
    }
    return ketQua;
}
