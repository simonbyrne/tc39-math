#include <windows.h>

int WINAPI
mydll_init(HANDLE h, DWORD reason, void *foo)
{
  return 1;
}  
   
