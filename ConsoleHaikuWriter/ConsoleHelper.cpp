#include "ConsoleHelper.h"
#include <string>
#include <iostream>

/// <summary>
/// Simply prints a message to the console, adding a line break afterwards.
/// </summary>
/// <param name="message"></param>
void HaikuApp::ConsoleHelper::Write(std::string message)
{
	std::cout << message << "\n";
}