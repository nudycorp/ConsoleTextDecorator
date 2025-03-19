#pragma once

#include "Decorator.h"
#include "BackColor.h"
#include <string>

class BackColorDecorator : public Decorator {
	private:
		BackColor color;
	public:
		BackColorDecorator(Component*, BackColor);
		virtual std::string getText() const;
};