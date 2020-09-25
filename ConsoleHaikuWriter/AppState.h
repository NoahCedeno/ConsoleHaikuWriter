#pragma once
#include "ConsoleHelper.h"

namespace HaikuApp {
	class AppState
	{
	protected:
		ConsoleHelper* m_Writer;
	public:
		virtual void Update() = 0;
	};
}
