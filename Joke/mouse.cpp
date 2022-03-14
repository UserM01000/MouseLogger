#include <Windows.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main(){

    srand(GetTickCount());                              // Crea un contador para rand()
    while(!GetAsyncKeyState(VK_ESCAPE)){                // Bucle while el cual si el usuario preciona la tecla Escape(Esc) se pausra el ejecutable si no quieres que eso pase cambialo por while(1)
        SetCursorPos((rand()%1280)+1, (rand()%722+1));  //comienza a poner numeros aleatorios pueden cambiarlos a su gusto
        Sleep(6);                                       //Sleep(6) <---Milisegundos--> para que se pueda ver los movimientos del curso ustedes pueden poner mas segundos, mintuso, etc
    }   
     
    return 0;
}