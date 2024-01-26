#ifndef NGUOIDOC_H
#define NGUOIDOC_H

#include <iostream>
#include <string>
#include <vector>

class NguoiDoc {
private:
    int maSo;
    std::string hoTen;
    std::string ngaySinh;
    std::string diaChi;

    static std::vector<NguoiDoc> thongTin;  // Danh sách người đọc

public:
    // Constructor
    NguoiDoc(int ma = 0, const std::string& ten = "", const std::string& ngay = "", const std::string& diaChi = "")
        : maSo(ma), hoTen(ten), ngaySinh(ngay), diaChi(diaChi) {}

    // Destructor
    ~NguoiDoc() {}

    // Getter và Setter
    void setMaSo(int number) {
        maSo = number;
    }

    int getMaSo() const {
        return maSo;
    }

    void setHoTen(const std::string& name) {
        hoTen = name;
    }

    std::string getHoTen() const {
        return hoTen;
    }

    void setNgaySinh(const std::string& date) {
        ngaySinh = date;
    }

    std::string getNgaySinh() const {
        return ngaySinh;
    }

    void setDiaChi(const std::string& address) {
        diaChi = address;
    }

    std::string getDiaChi() const {
        return diaChi;
    }

    // Thêm, sửa, và xóa người đọc
    void themNguoiDoc();
    void suaNguoiDoc();
    void xoaNguoiDoc();
};

// Khai báo vector người đọc


#endif
