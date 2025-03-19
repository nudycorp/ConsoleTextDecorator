#pragma once

#include <iostream>

class Component {
public:
    virtual ~Component() = default;

    virtual std::string getText() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Component& c) {
        os << c.getText();
        return os;
    }
};