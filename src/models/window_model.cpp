#include "window_model.hpp"

namespace GVEditor {
    WindowModel::WindowModel(int windowWidth, int windowHeight)
        : _windowWidth(windowWidth),
          _windowHeight(windowHeight)
    {
        // impl
    }

    int WindowModel::getWindowWidth() const {
        return _windowWidth;
    }

    int WindowModel::getWindowHeight() const {
        return _windowHeight;
    }
    
    void WindowModel::setWindowWidth(int width) {
        _windowWidth = width;
    }
    
    void WindowModel::setWindowHeight(int height) {
        _windowHeight = height;
    }
}