#include <windows.h>
#include <fstream>
#include <string>
#include <iostream>
#include "test.h"
#include <winuser.h>

#define GENERATE_BUTTON 1
#define GENERATE_TEXT 2
#define SHOW_PHOTO 3

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

void Window1(HWND);
void Window2(HWND);
void Window3(HWND);
void loadImages();
void DisplayThaiText(const wstring&);

HWND hLogo,hOut,hNum,hDay,hMonth,hList,ComboBox;
HBITMAP hLogoImage;

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmgshow){
    WNDCLASSW wc = {0};

    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpszClassName = L"WindowClass";
    wc.lpfnWndProc = WindowProcedure;

    if(!RegisterClassW(&wc)) return -1;
    
    CreateWindowW(L"WindowClass", L"Window", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 500, 600, NULL, NULL, NULL, NULL);
    
    MSG msg = {0};
    
    while(GetMessage(&msg, NULL, NULL, NULL)){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp){
    switch(msg){
        case WM_COMMAND:
            switch (wp){
                case SHOW_PHOTO:
                    Window3(hWnd);
                    break;
                case GENERATE_TEXT:
                    Window1(hWnd);
                    break;
                default:
                    break;
                }
            break;
        case WM_CREATE:
            loadImages();
            Window2(hWnd);
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProcW(hWnd, msg, wp, lp);
    }
}

void Window1(HWND hWnd){
    /*const WCHAR* TEXT = L"สวัสดี, นี้คือข้อความในภาษาไทย!";
    LPCWSTR lpText = TEXT;
    LPCWSTR lpCaption = L"ข้อความ";
    MessageBoxExW(NULL, lpText, lpCaption, MB_OK, 0x041E);*/

    char Day[5], Month[5], Out[50], Num[20];

    GetWindowText(hDay, Day, 5);
    GetWindowText(hMonth, Month, 5);
    float A, B;

    A = stof(Day);
    B = stof(Month);

    sprintf(Num, "%.2f", NUMBER(A,B));
    strcpy(Out,Num);

    SetWindowText(hOut, Out);
}

void DisplayThaiText(const wstring& text) {
    MessageBoxExW(NULL, text.c_str(), L"Thai Text", MB_OK | MB_ICONINFORMATION, 0x041E);
}

void Window2(HWND hWnd){
    CreateWindowW(L"Static", L"Day", WS_VISIBLE | WS_CHILD | ES_CENTER, 50, 50, 98, 48, hWnd, NULL, NULL, NULL);
    hDay = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 152, 50, 98, 48, hWnd, NULL, NULL, NULL);

    CreateWindowW(L"Static", L"Month", WS_VISIBLE | WS_CHILD | ES_CENTER, 50, 102, 98, 48, hWnd, NULL, NULL, NULL);
    hMonth = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 152, 102, 98, 48, hWnd, NULL, NULL, NULL);

    CreateWindowW(L"Static", L"Year", WS_VISIBLE | WS_CHILD | ES_CENTER, 50, 154, 98, 48, hWnd, NULL, NULL, NULL);
    CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 152, 154, 98, 48, hWnd, NULL, NULL, NULL);

    CreateWindowW(L"Button", L"GEN", WS_VISIBLE | WS_CHILD | WS_BORDER, 100, 206, 98, 48, hWnd, (HMENU)GENERATE_TEXT, NULL, NULL);
    CreateWindowW(L"Button", L"PHOTO", WS_VISIBLE | WS_CHILD | WS_BORDER, 254, 50, 98, 48, hWnd, (HMENU)SHOW_PHOTO, NULL, NULL);

    hList = CreateWindowW(L"ListBox", L"", WS_VISIBLE | WS_CHILD | LBS_STANDARD, 254, 102, 98, 48, hWnd, NULL, NULL, NULL);

    SendMessageW(hList, LB_ADDSTRING, 0, (LPARAM)L"Item 1");
    SendMessageW(hList, LB_ADDSTRING, 0, (LPARAM)L"Item 2");
    SendMessageW(hList, LB_ADDSTRING, 0, (LPARAM)L"Item 3");

    hOut = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 50, 258, 200, 200, hWnd, NULL, NULL, NULL);

    

}

void Window3(HWND hWnd){
    hLogo = CreateWindowW(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, 0, 0, 300, 300, hWnd, NULL, NULL, NULL);
    SendMessageW(hLogo, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hLogoImage);
}

void loadImages(){
    hLogoImage = (HBITMAP)LoadImageW(NULL, L"Logo1.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
}