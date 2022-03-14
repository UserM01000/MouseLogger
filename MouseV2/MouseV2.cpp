#include <windows.h>
#include <winuser.h>
#include <bits/stdc++.h> 
#include <fstream>
#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;
using std::cout; using std::endl;
using std::copy; using std::string;

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdline, int nCmdShow)
{
    POINT cursor;
    std::string msgmouse;

    std::ofstream DataMouse;
    int x = 0, y = 0;
    int xs = GetSystemMetrics(SM_CXSCREEN), ys = GetSystemMetrics(SM_CYSCREEN);

    DataMouse.open("DataMouse.txt", std::ios_base::out);
    if(DataMouse.fail()){
      std::cout<<"Archivo DataMouse.txt no created D:"<<std::endl;
      return 0;
    }
    else{
      for(;;){
        msgmouse = "";
            if (GetAsyncKeyState(VK_LBUTTON)) {
                GetCursorPos(&cursor);
                DataMouse << "Position Click left";
                msgmouse += "Position--> " + to_string(cursor.x) + "," + to_string(cursor.y);
                cout<<"Position--> " << cursor.x << "," << cursor.y << "\n";
                char coor[100];
                std::string name = "coordenadas";
                MessageBox(NULL, msgmouse.c_str(), "POSITION", MB_OK);

            }
            if (GetAsyncKeyState(VK_RBUTTON)) {
                GetCursorPos(&cursor);
                msgmouse += "Position--> " + to_string(cursor.x) + "," + to_string(cursor.y);
                cout<<"Position--> " << cursor.x << "," << cursor.y << "\n";
                char coor[100];
                std::string name = "coordenadas";
                MessageBox(NULL, msgmouse.c_str(), "POSITION", MB_OK);

            }
      DataMouse.close();
    }
  }
    return 0;
}
