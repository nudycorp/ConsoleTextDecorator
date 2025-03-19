#pragma once

#include "Decorator.h"

class ItalicDecorator : public Decorator {
public:
    explicit ItalicDecorator(Component*);

    std::string getText() const;
};