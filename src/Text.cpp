#include "../include/Text.h"

Text::Text(const std::string&& s) { text = s; }

Text::Text(const std::string& s) { text = s; }

Text::Text(const char s[]) { text = std::string(s); }

std::string Text::getText() const { return text; }