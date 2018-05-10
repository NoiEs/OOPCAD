#pragma once

#include <vector>

namespace ACCAD
{
    class Editor
    {
    public:
        /* Alter each pixel to given color
         */
        void alterPixels(const std::vector<pair<Vec2, Color> > &pixels);

        /* Alter all pixels to the same color
         */
        void alterPixels(const std::vector<Vec2> &pixels, const Color &color);

        /* Insert a figure
         */
        void insertFigure(IFigure *figure);

        /* Alter an Anchor of a figure
         */
        void alterFigure(IFigure *figure, int anchorId, const Vec2 &from, const Vec2 &to);

        /* Erase a figure
         */
        void eraseFigure(IFigure *figure);

    private:
        
        Image image;
        Renderer renderer;
        Loader loader;

        /* This is my self-designed Stack,
         * Not STL!!!
         */
        Stack<IOperation> stack; 
    };
}