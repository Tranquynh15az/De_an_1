#ifndef SACH_H
#define SACH_H

#include <iostream>
#include <vector>
#include <string>

class Sach {
private:
    std::string TenSach;
    std::string TacGia;
    std::string TheLoai;
    int SoLuong;

public:
    // Hàm khởi tạo
    Sach();
    Sach(std::string TenSach, std::string TacGia, std::string TheLoai, int SoLuong);

    // Hàm truy xuất thuộc tính TenSach
    std::string getTenSach() const;

    // Hàm thiết lập thuộc tính tên sách
    void setTenSach(std::string ten);

    // Hàm truy xuất thuộc tính TacGia
    std::string getTacGia() const;

    // Hàm nhận giá trị cho TacGia
    void setTacGia(std::string gia);

    // Hàm truy xuất thuộc tính TheLoai
    std::string getTheLoai() const;

    // Hàm nhận giá trị cho TheLoai
    void setTheLoai(const std::string &loai);

    // Hàm truy xuất thuộc tính SoLuong
    int getSoLuong() const;

    // Hàm cộng số lượng sách hiện có
    void ThemSoLuong(int sl);

    // Các hàm thêm, sửa, xóa
    void them();
    void sua();
    void xoa();

    // Hiển thị thông tin sách
    void HienThiThongTinSach() const;

    // Hàm tìm kiếm theo tên, tác giả, thể loại
    std::vector<Sach> timkiemTheoTen(std::string TenSach);
    std::vector<Sach> timkiemTheoTacGia(std::string TacGia);
    std::vector<Sach> timkiemTheoTheLoai(std::string TheLoai);
};

#endif
