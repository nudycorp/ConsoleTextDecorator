#include "../include/ItalicDecorator.h"

ItalicDecorator::ItalicDecorator(Component* p) : Decorator(p) {}

std::string ItalicDecorator::getText() const { return "\033[03m" + component->getText() + "\033[0m"; }