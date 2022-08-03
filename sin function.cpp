#include <windows.h>
#include <stdio.h>
#include <math.h>
#define PI 3.141592

double rad(double degree) // 라디안(radian)을 도(degree)로 변환하는 함수이다.
{
	return PI * degree / 180.0;
}
int main(void)
{
	int degree, x, y;
	double radian, result;

	HWND hwnd = GetForegroundWindow();
	HDC hdc = GetWindowDC(hwnd);

	MoveToEx(hdc, 30, 200, 0); // x와 y축을 그린다.
	LineTo(hdc, 500, 200);

	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 30, 0);

	for (degree = 0; degree <= 360; degree++)
	{
		result = sin(rad((double)degree));
		x = degree + 30;
		y = 200 - (int)(100.0 * result); // 싸인값은 0.0에서 1.0 사이의 값이라 100.0을 곱한다. 또 y의 방향이 반대이므로 -1을 곱하고 원점을 (30, 200)으로 하기 위하여 200을 더한다.
		SetPixel(hdc, x, y, RGB(255, 0, 0));
	}
	return 0;
}