#ifndef WINDOW_MODEL_H
#define WINDOW_MODEL_H

namespace GVEditor {
    class WindowModel {
    public:
        WindowModel() = delete;
        WindowModel(int windowWidth, int windowHeight);
        virtual ~WindowModel() = default;

        virtual int getWindowWidth() const;
        virtual int getWindowHeight() const;
        
        virtual void setWindowWidth(int width);
        virtual void setWindowHeight(int height);

    protected:
        int _windowWidth;
        int _windowHeight;
    };
}

#endif // WINDOW_MODEL_H