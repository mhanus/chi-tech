#include <cstdio>

#include "chi_console.h"
#include <iostream>

//#include "../CHI_LIB/chi_lib.h"

#ifdef CHI_INTERACTIVE
#include "../CHI_WINDOWMANAGER/chi_windowmanager.h"

extern CHI_VECTOR<char>          chiconsoleInputBuffer;
extern CHI_WINDOWMANAGER       chiwindowManager;
#endif
//#define CHI_INTERACTIVE

extern bool chi_termination_posted;
extern CHI_VECTOR<char>  chiconsoleInputBuffer;


//############################################################################# Run Console loop
/** Executes the loop for the console.*/
void CHI_CONSOLE::RunConsoleLoop(char* fileName)
{

    printf("Console loop started.\n");
	exitLoop = false;
#ifdef CHI_USEGRAPHICS
    while ((!exitLoop) || (!chi_termination_posted))
	{
        char* newConsoleInput = new char[200];
        fgets (newConsoleInput, 200, stdin);

        //if (CHI_LIB::StringCompare(newConsoleInput,"exit\n"))
        {
            exitLoop=true;
        }
        chiconsoleInputBuffer.PushItem(newConsoleInput);
		
		
	}
#else
  while ((!exitLoop) || (!chi_termination_posted))
  {
//    char* newConsoleInput = new char[200];
//    fgets (newConsoleInput, 200, stdin);
    std::string console_input;

    std::cin >> console_input;

    if (console_input == "exit")
      exitLoop=true;

    chiconsoleInputBuffer.PushItem((char*)console_input.data());

  }
  chi_termination_posted = true;
#endif
    printf("Console loop stopped successfully\n");
}