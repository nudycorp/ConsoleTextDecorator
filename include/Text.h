#pragma once

#include "Component.h"

class Text : public Component {
    std::string text;
public:
    Text(const std::string&&);

    Text(const std::string& );

    Text(const char s[]);

    virtual std::string getText() const;
};