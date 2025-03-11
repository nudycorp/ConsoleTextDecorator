#include <iostream>
#include <windows.h>

using namespace std;

class Component {
public:
    virtual ~Component() = default;

    virtual string getText() const = 0;

    friend ostream& operator<<(ostream& os, const Component& c) {
        os << c.getText();
        return os;
    }
};

class Text: public Component {
    string text;
public:
    Text(const string&& s) {
        text = s;
    }

    Text(const string& s) {
        text = s;
    }

    Text(const char s[]) {
        text = string(s);
    }

    string getText() const {
        return text;
    }
};

class Decorator: public Component {
protected:
    Component *component;

public:
    explicit Decorator(Component *p) : component{p} {};
};


class GreenDecorator: public Decorator {
public:
    string getText() const {
        return "\033[32m" + component->getText() + "\033[0m";
    }

    explicit GreenDecorator(Component *p) : Decorator(p) {}
};

class BackRedDecorator: public Decorator {
public:
    string getText() const {
        return "\033[41m" + component->getText() + "\033[0m";
    }

    explicit BackRedDecorator(Component *p) : Decorator(p) {}
};

class ItalicDecorator: public Decorator {
public:
    string getText() const {
        return "\033[03m" + component->getText() + "\033[0m";
    }

    explicit ItalicDecorator(Component *p) : Decorator(p) {}
};


int main() {
    SetConsoleOutputCP(CP_UTF8);
    Component *s = new Text("За орду!");
    Component *s2 = new Text("За альянс!");
    Component *s3 = new Text("За дружбу");

    s = new GreenDecorator(s);

    s2 = new BackRedDecorator(s2);

    s3 = new BackRedDecorator(s3);
    s3 = new GreenDecorator(s3);
    s3 = new ItalicDecorator(s3);

    cout << *s << endl << *s2 << endl;
    cout << *s3 << endl;
    return 0;
}
