#ifndef VIEW_H
#define VIEW_H

namespace GVEditor {
    class View {
    public:
        View() = default;
        virtual ~View() = default;

        View(const View&) = delete;
        View& operator=(View &&) = delete;
    };
}

#endif // VIEW_H