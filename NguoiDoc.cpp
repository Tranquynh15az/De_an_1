// NguoiDoc.cpp
#include "NguoiDoc.h"
#include <iostream>
std::vector<NguoiDoc> NguoiDoc::thongTin;


// Hàm thêm người đọc
void NguoiDoc::themNguoiDoc() {
    std::cout << "Nhap Ma So: "; 
    std::cin >> maSo;
    std::cin.ignore(); // Loại bỏ kí tự '\n' từ bộ đệm đầu vào
    std::cout << "Nhap Ho Ten: "; 
    std::getline(std::cin, hoTen);
    std::cout << "Nhap Ngay Sinh (DD/MM/YYYY): "; 
    std::cin >> ngaySinh;
    std::cout << "Nhap Dia Chi: "; 
    std::cin.ignore(); 
    std::getline(std::cin, diaChi);

    thongTin.push_back(*this);
}

// Hàm sửa thông tin người đọc
void NguoiDoc::suaNguoiDoc() {
    std::cout << "Nhap ma so can sua: "; 
    std::cin >> maSo;
    std::cin.ignore(); 

    int index = -1;
    for (int i = 0; i < thongTin.size(); i++) {
        if (thongTin[i].maSo == maSo) {
            index = i;
            break;
        }
    }

    if (index == -1)
        std::cout << "Ma so khong tim thay!";
    else {
        std::cout << "Nhap ho ten: "; 
        std::getline(std::cin, hoTen);
        std::cout << "Ngay sinh: "; 
        std::getline(std::cin, ngaySinh);
        diaChi = diaChi + ", " + ngaySinh;
        std::cout << "Dia chi: " << diaChi << std::endl;
        thongTin[index] = *this;
    }
}

// Hàm xóa người đọc
void NguoiDoc::xoaNguoiDoc() {
    int maSo;
    std::cout << "Nhap vao ma so cua nguoi doc can xoa: ";
    std::cin >> maSo;

    int ViTri = -1;
    for (int i = 0; thongTin.size(); i++) {
        if (thongTin[i].maSo == maSo) {
            ViTri = i;
            break;
        }
    }

    if (ViTri == -1) {
        std::cout << "Khong tim thay!" << maSo << std::endl;
        return;
    }

    thongTin.erase(thongTin.begin() + ViTri);
}

