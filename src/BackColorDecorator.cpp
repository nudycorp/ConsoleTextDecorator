#include "../include/BackColorDecorator.h"

BackColorDecorator::BackColorDecorator(Component* component, BackColor color) : Decorator(component), color(color) {}

std::string BackColorDecorator::getText() const { return "\033[" + std::to_string(static_cast<int>(color)) + "m" + component->getText() + "\033[0m"; }