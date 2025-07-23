#pragma once

class Component {
public:
    virtual void draw() = 0;
    virtual void handleInput(int ch) = 0;
    virtual void focus(bool isFocused) = 0;
    virtual ~Component() = default;
};
