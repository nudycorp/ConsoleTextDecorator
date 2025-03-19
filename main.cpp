#include <iostream>
#include <windows.h>

#include "include/Text.h"
#include "include/ColorDecorator.h"
#include "include/BackColorDecorator.h"
#include "include/ItalicDecorator.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Component* s1 = new ColorDecorator(new Text("За Орду!"), Color::GREEN);
    Component* s2 = new BackColorDecorator(new Text("За Альянс!"), BackColor::RED);
    Component* s3 = new ItalicDecorator(new ColorDecorator(new BackColorDecorator(new Text("За Дружбу!"), BackColor::RED), Color::GREEN));

    std::cout << *s1 << std::endl << *s2 << std::endl << *s3 << std::endl;

    delete s1;
    delete s2;
    delete s3;

    return 0;
}