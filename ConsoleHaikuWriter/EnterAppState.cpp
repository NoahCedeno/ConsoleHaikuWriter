#include <iostream>
#include "EnterAppState.h"

void HaikuApp::EnterAppState::Update()
{
	// I don't really want to have EVERY base class include <iostream>, maybe I'll just pass down a reference to a ConsoleWriter object.
	// std::cout << "Welcome to the first"; <- NOT THIS
	m_Writer->Write("Welcome to Noah's Haiku Writing Application!");

	// TODO: Will need 'PromptAppState that listens for input
}