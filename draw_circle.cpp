#include <windows.h>
#include <stdio.h>

int main(void)
{
	HDC hdc = GetWindowDC(GetForegroundWindow());  // 그리기 속성

	int i;
	for (i = 0; i < 100; i++) {
		int x = rand() % 400;
		int y = rand() % 500;
		int w = rand() % 700;
		int h = rand() % 300;
		Ellipse(hdc, x, y, x + w, y + h); // 화면에 사각형을 그린다.
		Sleep(100);
	}
	return 0;
}