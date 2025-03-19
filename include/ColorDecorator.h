#pragma once

#include "Color.h"
#include "Decorator.h"
#include <string>

class ColorDecorator : public Decorator {
	private:
		Color color;
	public:
		ColorDecorator(Component*, Color);
		virtual std::string getText() const;
};