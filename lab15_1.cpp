#include <iostream>
using namespace std;

int main()
{

	// 1. สร้างตัวแปร a และกำหนดค่าเป็น 5
	int a = 5;
	// 2. สร้างตัวแปร b และกำหนดค่าเป็น 'A'
	char b = 'A';
	// 3. ประกาศ Reference c ไปที่ b
	char &c = b;
	// 4. สร้าง Pointer x ชี้ไปที่ a
	int *x = &a;
	// 5. สร้าง Pointer y ชี้ไปที่ b
	char *y = &b;
	// 6. สร้าง Pointer z ชี้ไปที่ x
	int **z = &x;

	// 7. แสดงค่าของตัวแปร
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
	// 8. แสดง Address ของตัวแปร
	cout << &a << " " << (void *)&b << " " << (void *)&c << " " << &x << " " << &y << " " << z << endl;

	// 9. เปลี่ยนค่าของ b เป็น 'F' ผ่าน c
	c = 'F';
	// 10. แสดงค่าของตัวแปร a, b, c, x, y และ z โดยมีช่องว่างระหว่างแต่ละค่า เมื่อพิมพ์ครบ 6 ค่าแล้วให้ขึ้นบรรทัดใหม่
    cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;

	// 11. เปลี่ยนค่าของตัวแปร b ให้เป็นตัวอักษร W โดยการกำหนดผ่าน Pointer y
	*y = 'W';
	// แสดงค่าของตัวแปร a, b, c, x, y และ z โดยมีช่องว่างระหว่างแต่ละค่า เมื่อพิมพ์ครบ 6 ค่าแล้วให้ขึ้นบรรทัดใหม่
    cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;

	// 12. เปลี่ยนค่าของตัวแปร a ให้เป็น 6 โดยการกำหนดผ่าน Pointer x
	*x = 6;
	// 13. แสดงค่าของตัวแปร a, b, c, x, y และ z โดยมีช่องว่างระหว่างแต่ละค่า เมื่อพิมพ์ครบ 6 ค่าแล้วให้ขึ้นบรรทัดใหม่
    cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;

	// 14. เปลี่ยนค่าของตัวแปร a ให้เป็น 7 โดยการกำหนดผ่าน Pointer z
	**z = 7;
	// 15. แสดงค่าของตัวแปร a, b, c, x, y และ z โดยมีช่องว่างระหว่างแต่ละค่า เมื่อพิมพ์ครบ 6 ค่าแล้วให้ขึ้นบรรทัดใหม่
    cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;

	return 0;
}