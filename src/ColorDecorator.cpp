#include "../include/ColorDecorator.h"

ColorDecorator::ColorDecorator(Component* component, Color color) : Decorator(component), color(color) {}

std::string ColorDecorator::getText() const { return "\033[" + std::to_string(static_cast<int>(color)) + "m" + component->getText() + "\033[0m"; }