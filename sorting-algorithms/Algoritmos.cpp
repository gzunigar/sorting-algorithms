// Algoritmos.cpp : main project file.

#include "stdafx.h"
#include "fMain.h"

using namespace Algoritmos;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew fMain());
	return 0;
}
